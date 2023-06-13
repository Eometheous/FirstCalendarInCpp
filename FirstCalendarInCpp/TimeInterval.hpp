//
//  TimeInterval.hpp
//  FirstCalendarInCpp
//
//  Created by Jonathan Thomas on 5/29/23.
//

#ifndef TimeInterval_hpp
#define TimeInterval_hpp

#include <stdio.h>
#include <iostream>
#include "Time.hpp"

class TimeInterval {
    Time start;
    Time end;
    
public:
    TimeInterval();
    TimeInterval(const Time&, const Time&);

    Time get_start();
    Time get_end();
    void set_start(const Time&);
    void set_end(const Time&);
    
    friend std::istream& operator>> (std::istream&, TimeInterval&);
    friend std::ostream& operator<< (std::ostream&, const TimeInterval&);
};

#endif /* TimeInterval_hpp */
