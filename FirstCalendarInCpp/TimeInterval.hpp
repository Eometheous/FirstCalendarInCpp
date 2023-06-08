//
//  TimeInterval.hpp
//  FirstCalendarInCpp
//
//  Created by Jonathan Thomas on 5/29/23.
//

#ifndef TimeInterval_hpp
#define TimeInterval_hpp

#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <ctime>

using namespace std;

class TimeInterval {
    tm start_time, end_time;
    
public:
    TimeInterval(const tm&, const tm&);
    
    tm get_start_time() const;
    tm get_end_time() const;
    
    friend istream& operator>> (istream&, TimeInterval&);
    friend ostream& operator<< (ostream&, const TimeInterval&);
};

#endif /* TimeInterval_hpp */
