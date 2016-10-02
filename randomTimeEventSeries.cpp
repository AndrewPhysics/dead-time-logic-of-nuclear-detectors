#include "randomTimeEventSeries.h"
#include "openDeadTimeWindow.h"
#include <iostream>
#include <random>
#include <fstream>



using namespace std;
randomTimeEventSeries::randomTimeEventSeries(int t) : t_deadTime(t) //member syntax
{
	
}
randomTimeEventSeries::~randomTimeEventSeries(){}

void randomTimeEventSeries::generateTimeEvents(){
	default_random_engine generator;
	poisson_distribution<int> distribution(4);
	// number of events during measurements
	const int events = 500; 
	int* p1 = new int[events];
	p1[0] = 0;
	int i = 1;
	//generating fullow-up time events by geometric series
	while (i < events) {
		p1[i] = p1[i - 1] + distribution(generator); 
		i++;
	}
	//output to monitor
	//the time of arrivals are in [ms] units
	
	//opening dead-time window
	//openingDeadTimeWindow p1;

	for (size_t i = 0; i < events; i++)
	{
		if (p1[i] - p1[i - 1] < t_deadTime)//p[i]-p1[i-1]=deltaT
		{
			p1[i] = 0;
		}
	}

	for (int i = 0; i < events; i++) {
		cout << "the " << i << " -th rocorded arrival time is: " << p1[i] << " [ms]." << endl;
	}
	cout << "-------------------------------------------------------------------------" << endl;
	int number = 0;
	for (int i = 0; i < events; i++)
	{
		if (p1[i]==0)
		{
			number++;
		}
	}
	cout << "The number of events inside the deadTime window : " << number << endl;

	delete[] p1;
}



void randomTimeEventSeries::testPoissonDistribution() {
	default_random_engine generator;
	poisson_distribution<int> distribution(2);
	const int events = 500;
	int* p1 = new int[events];
	ofstream arrayData("timeEventArray1.txt");
	int i = 0;
	while (i < events) {
		p1[i] = distribution(generator);
		i++;
	}
	for (int i = 0; i < events; i++)
	{
		arrayData << p1[i] << endl;
	}
	delete[] p1;
}
