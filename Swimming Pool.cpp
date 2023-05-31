#include <iostream>
#include "swimmingPool.h"

using namespace std;


double userLength;
double userWidth;
double userDepth;
double userWaterFlowInRate;
double userWaterFlowOutRate;
double userAmountOfWaterInPool;


int main() {
    //std::cout << "Pool data:\n" << " Length: ";
    //std::cin >> userLength;
    //std::cout << " Width: ";
    //std::cin >> userWidth;
    //std::cout << " Depth: ";
    //std::cin >> userDepth;
    //std::cout << " Total water in the pool: ";
    //std::cin >> userAmountOfWaterInPool;
    //std::cout << "To completely fill the pool:\n";
    //std::cout << " Enter water fill-in rate: ";
    //std::cin >> userWaterFlowInRate;
    userLength = 164;
    userWidth = 82;
    userDepth = 6;
    userWaterFlowOutRate = 10000;
    //swimmingPool pool(userLength, userWidth, userDepth, userWaterFlowInRate, userWaterFlowOutRate, userAmountOfWaterInPool);

    swimmingPool pool(164, 82, 6);
    pool.addWater(1, 301773);
    cout << pool.waterNeededToFillThePool() << endl;
    int breakVar = 0;


    //std::cout << " Time to fill the pool is approximately : " << pool.timeToFillThePool() << " hour(s) and ";
 

    return 0;
}



/*
Pool data:
  Length: 30
  Width: 15
  Depth: 10
  Total water in the pool: 0
To completely fill the pool:
  Enter water fill-in rate: 10

  Time to fill the pool is approximately: 56 hour(s) and 6 minute(s).
  
  */