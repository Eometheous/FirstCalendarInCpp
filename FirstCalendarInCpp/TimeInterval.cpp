//
//  TimeInterval.cpp
//  FirstCalendarInCpp
//
//  Created by Jonathan Thomas on 5/29/23.
//

#include <iomanip>
#include "TimeInterval.hpp"

TimeInterval::TimeInterval() {}
TimeInterval::TimeInterval(const Time &start, const Time &end) {
    if (start > end) throw invalid_argument("start time cannot be after end time");
    this->start = start;
    this->end = end;
}

Time TimeInterval::get_start() {return start;}
Time TimeInterval::get_end() {return end;}
void TimeInterval::set_start(const Time &new_start) {start = new_start;}
void TimeInterval::set_end(const Time &new_end) {end = new_end;}

istream& operator>> (istream &is, TimeInterval &time_interval) {
    char dash = '-';
    Time start, end;
    is >> start >> dash >> end;
    time_interval.set_start(start);
    time_interval.set_end(end);
    return is;
}

ostream& operator<< (ostream &os, const TimeInterval &time_interval) {
    return os << time_interval.start << " - " << time_interval.end;
}
