#ifndef _time_h_
#define _time_h_
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;
class Time {
public:
    int getYear() const;
    int getMonth() const;
    int getDay() const;
    int getWeekDay() const;
    int getHour() const;
    int getMinute() const;
    int getSecond() const;
    Time& updateTime(tm* ltm);
    void setTime(int year, int month, int day, int hour, int minute, int second);//sets time by given values
    void setTimeLocal();//sets time by current system time
    void printTime()const;
private:
    int year;
    int month;
    int day;
    int dayOfTheWeek;
    int hour;
    int minute;
    int second;
};

#endif