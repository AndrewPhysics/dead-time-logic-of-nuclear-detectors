#include <iostream>
#include <random>
#include "randomTimeEventSeries.h"
#include "openDeadTimeWindow.h"
using namespace std;
int main() {
	int deadTimeWindow = 3;
	int numberOfEvents=500;
	randomTimeEventSeries p1(deadTimeWindow);
	p1.generateTimeEvents();
	p1.testPoissonDistribution();
	system("pause");
	return 0;
}