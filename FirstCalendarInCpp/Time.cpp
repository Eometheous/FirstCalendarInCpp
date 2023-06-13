//
//  Time.cpp
//  FirstCalendarInCpp
//
//  Created by Jonathan Thomas on 6/12/23.
//

#include <iomanip>
#include <stdexcept>
#include "Time.hpp"

Time::Time(int hour, int minute, int second) {
    if (hour < 0 or hour >= 24 or minute < 0 or minute >= 60 or second < 0 or second >= 60) throw invalid_argument("hour, minute, and/or second was out of range");
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

int Time::get_hour() {return hour;}
int Time::get_minute() {return minute;}
int Time::get_second() {return second;}

void Time::set_hour(const int new_hour) {
    if (new_hour < 0 or new_hour >= 24) throw invalid_argument("hour must be between 0 and 23");
    hour = new_hour;
}
void Time::set_minute(const int new_minute) {
    if (new_minute < 0 or new_minute >= 60) throw invalid_argument("minute must be between 0 and 59");
    minute = new_minute;
}
void Time::set_second(const int new_second) {
    if (new_second < 0 or new_second >= 60) throw invalid_argument("second must be between 0 and 59");
    second = new_second;
}

bool operator> (const Time &time1, const Time &time2) {
    if (time1.hour > time2.hour) return true;
    else if (time1.minute > time2.minute) return true;
    else if (time1.second > time2.second) return true;
    else return false;
}

bool operator< (const Time &time1, const Time &time2) {
    return !(time1 > time2);
}

istream& operator>> (istream &is, Time &time) {
    char colen = ':';
    int hour, minute, second;
    is >> hour >> colen >> minute >> colen >> second;
    time.set_hour(hour);
    time.set_minute(minute);
    time.set_second(second);
    return is;
}

ostream& operator<< (ostream &os, const Time &time) {
    return os << setfill('0') << setw(2) << time.hour << ":" << setfill('0') << setw(2) << time.minute << ":" << setfill('0') << setw(2) << time.second;
}
