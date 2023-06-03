//
//  TimeInterval.hpp
//  FirstCalendarInCpp
//
//  Created by Jonathan Thomas on 5/29/23.
//

#ifndef TimeInterval_hpp
#define TimeInterval_hpp

#include <stdio.h>
#include <ctime>
#include <string>
#include "Time.hpp"

class TimeInterval {
    Time startTime, endTime;
    
public:
    TimeInterval(const Time&, const Time&);
    string toString();
};

#endif /* TimeInterval_hpp */
