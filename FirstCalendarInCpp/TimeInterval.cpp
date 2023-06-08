//
//  TimeInterval.cpp
//  FirstCalendarInCpp
//
//  Created by Jonathan Thomas on 5/29/23.
//

#include "TimeInterval.hpp"

TimeInterval::TimeInterval(const tm &start_time, const tm &end_time) {
    TimeInterval::start_time = start_time;
    TimeInterval::end_time = end_time;
}

tm TimeInterval::get_start_time() const {return TimeInterval::start_time;}
tm TimeInterval::get_end_time() const {return TimeInterval::end_time;}

ostream& operator<< (ostream &os, const TimeInterval &time_interval) {
    tm start_time = time_interval.get_start_time();
    tm end_time = time_interval.get_end_time();
    return os << start_time.tm_hour << ":" << setfill('0') << setw(2) << start_time.tm_min << " - "  << end_time.tm_hour << + ":" << setfill('0') << setw(2) << end_time.tm_min;
}
