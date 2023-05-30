//
//  main.cpp
//  FirstCalendarInCpp
//
//  Created by Jonathan Thomas on 5/29/23.
//

#include <iostream>
#include "TimeInterval.hpp"
#include "Time.hpp"

int main(int argc, const char * argv[]) {
    Time time1(5, 0, 0);
    Time time2(10,0,0);
    
    TimeInterval timeInterval(time1, time2);
    
    std::cout << timeInterval.toString();
    return 0;
}
