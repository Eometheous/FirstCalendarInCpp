//
//  Time.hpp
//  FirstCalendarInCpp
//
//  Created by Jonathan Thomas on 5/29/23.
//

#ifndef Time_hpp
#define Time_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Time {
    unsigned int hour{0};
    unsigned int minute{0};
    unsigned int second{0};
    
public:
    Time();
    Time(int);
    Time(int, int);
    Time(int, int, int);
    void setTime(int, int, int);
    string toUniversalString() const;
    string toStandardString() const;
};

#endif /* Time_hpp */
