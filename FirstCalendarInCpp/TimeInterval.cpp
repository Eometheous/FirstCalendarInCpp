//
//  TimeInterval.cpp
//  FirstCalendarInCpp
//
//  Created by Jonathan Thomas on 5/29/23.
//

#include "TimeInterval.hpp"
#include <time.h>
#include <string>

TimeInterval::TimeInterval(const Time &startTime, const Time &endTime) {
    TimeInterval::startTime = startTime;
    TimeInterval::endTime = endTime;
}

string TimeInterval::toString() {
    return startTime.toUniversalString() + " - " + endTime.toUniversalString() + "\n";
}
