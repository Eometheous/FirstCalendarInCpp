//
//  Event.cpp
//  FirstCalendarInCpp
//
//  Created by Jonathan Thomas on 6/8/23.
//

#include "Event.hpp"

Event::Event(const string name, const chrono::year_month_day &date, const TimeInterval &time_interval) {
    this->name = name;
    this->date = date;
    this->time_interval = time_interval;
}

string Event::get_name() {return name;}
chrono::year_month_day Event::get_start_date() {return date;}
TimeInterval Event::get_time_interval() {return time_interval;}
