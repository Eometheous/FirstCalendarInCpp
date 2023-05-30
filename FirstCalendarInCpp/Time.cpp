//
//  Time.cpp
//  FirstCalendarInCpp
//
//  Created by Jonathan Thomas on 5/29/23.
//

#include "Time.hpp"
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>

using namespace std;

Time::Time() {
    hour = 0;
    minute = 0;
    second = 0;
}

Time::Time(int h) {
    hour = h;
    minute = 0;
    second = 0;
}

Time::Time(int h, int m) {
    hour = h;
    minute = m;
    second = 0;
}

Time::Time(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}

void Time::setTime(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}

string Time::toUniversalString() const {
    ostringstream output;
    output << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
    return output.str();
}

string Time::toStandardString() const {
    ostringstream output;
    output << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw(2) << minute << setw(2) << ":" << second;
    return output.str();
}
