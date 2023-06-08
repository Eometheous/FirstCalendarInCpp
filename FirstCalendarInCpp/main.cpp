//
//  main.cpp
//  FirstCalendarInCpp
//
//  Created by Jonathan Thomas on 5/29/23.
//

#include "TimeInterval.hpp"

int main(int argc, const char * argv[]) {
    tm *time1 = new tm;
    tm *time2 = new tm;
    
    time1->tm_hour = 5;
    time1->tm_min = 0;
    time1->tm_sec = 0;
    
    time2->tm_hour = 10;
    time2->tm_min = 0;
    time2->tm_sec = 0;
    
    TimeInterval *time_interval = new TimeInterval(*time1, *time2);
    
    cout << *time_interval << endl;
    
    delete time1;
    delete time2;
    delete time_interval;
    
    return 0;
}
