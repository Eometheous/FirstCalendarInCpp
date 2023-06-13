//
//  Time.hpp
//  FirstCalendarInCpp
//
//  Created by Jonathan Thomas on 6/12/23.
//

#ifndef Time_hpp
#define Time_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Time {
    int hour, minute, second;
public:
    Time(int hour = 0, int minute = 0, int second = 0);
    
    int get_hour();
    int get_minute();
    int get_second();
    void set_hour(const int new_hour);
    void set_minute(const int new_minute);
    void set_second(const int new_second);
    
    friend bool operator> (const Time&, const Time&);
    friend bool operator< (const Time&, const Time&);
    friend istream& operator>> (istream&, Time&);
    friend ostream& operator<< (ostream&, const Time&);
};
#endif /* Time_hpp */
