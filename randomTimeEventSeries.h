#pragma once
class randomTimeEventSeries
{
public:
	randomTimeEventSeries(int t);
	~randomTimeEventSeries();
	void generateTimeEvents();
	void testPoissonDistribution();
private:
	int t_deadTime;
};

