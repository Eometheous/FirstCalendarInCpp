//
//  main.cpp
//  FirstCalendarInCpp
//
//  Created by Jonathan Thomas on 5/29/23.
//

#include "TimeInterval.hpp"

int main(int argc, const char * argv[]) {
    Time time1, time2;
    cout << "Enter start time (xx:xx:xx): ";
    cin >> time1;
    cout << "Enter end time (xx:xx:xx): ";
    cin >> time2;
    TimeInterval *time_interval = new TimeInterval(time1, time2);
    cout << "Entered Time Interval: " << *time_interval << endl;
    delete time_interval;
    
    return 0;
}
