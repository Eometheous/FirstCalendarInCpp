//
//  Event.hpp
//  FirstCalendarInCpp
//
//  Created by Jonathan Thomas on 6/8/23.
//

#ifndef Event_hpp
#define Event_hpp

#include <chrono>
#include "TimeInterval.hpp"

class Event {
    string name;
    chrono::year_month_day date;
    TimeInterval time_interval;
public:
    Event(const string, const chrono::year_month_day &date, const TimeInterval &time_interval);
    string get_name();
    chrono::year_month_day get_start_date();
    TimeInterval get_time_interval();
};

#endif /* Event_hpp */
