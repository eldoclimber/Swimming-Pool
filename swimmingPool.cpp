#include "swimmingPool.h"
#include <cmath>
#include <iostream>

/*
	double length;
	double width;
	double depth;
	double waterFlowInRate;
	double waterFlowOutRate;
	double amountOfWaterInPool;

*/

void swimmingPool::set(double l, double w, double d, double fi, double fo, double wInPool)
{
	length = l;
	width = w;
	depth = d;
	waterFlowInRate = fi;
	waterFlowOutRate = fo;
	amountOfWaterInPool = wInPool;
}

void swimmingPool::setLength(double l)
{
	length = l;
}

void swimmingPool::setWidth(double w)
{
	width = w;
}

void swimmingPool::setDepth(double d)
{
	depth = d;
}

void swimmingPool::setWaterFlowRateIn(double fi)
{
	waterFlowInRate = fi;
}

void swimmingPool::setWaterFlowRateOut(double fo)
{
	waterFlowOutRate = fo;
}

void swimmingPool::addWater(double time, double fillRate)
{
	amountOfWaterInPool = amountOfWaterInPool + (time * fillRate);

	if (amountOfWaterInPool > poolTotalWaterCapacity())
		std::cout << "Pool overflow";
}

void swimmingPool::drainWater(double time, double drainRate)
{
	amountOfWaterInPool = amountOfWaterInPool - (time * drainRate);
}

double swimmingPool::poolTotalWaterCapacity()
{
	
	return (length * width * depth)*7.48;
}

double swimmingPool::getLength()
{
	return length;
}

double swimmingPool::getWidth()
{
	return width;
}

double swimmingPool::getDepth()
{
	return depth;
}

double swimmingPool::getWaterFlowRateIn()
{
	return waterFlowInRate;
}

double swimmingPool::getWaterFlowRateOut()
{
	return waterFlowOutRate;
}

double swimmingPool::getTotalWaterInPool()
{
	return amountOfWaterInPool;
}

int swimmingPool::timeToFillThePool()
{
	
	return (poolTotalWaterCapacity() / waterFlowInRate);
}

int swimmingPool::timeToDrainThePool()
{
	int timeDrain = (amountOfWaterInPool / waterFlowOutRate);
	return timeDrain;
}

double swimmingPool::waterNeededToFillThePool()
{
	double waterNeeded = poolTotalWaterCapacity() - amountOfWaterInPool;
	return waterNeeded;
}

swimmingPool::swimmingPool(double l, double w, double d, double fi, double fo, double wInPool)
{
	length = l;
	width = w;
	depth = d;
	waterFlowInRate = fi;
	waterFlowOutRate = fo;
	amountOfWaterInPool = wInPool;
}
