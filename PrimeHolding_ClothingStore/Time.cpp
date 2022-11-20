#define _CRT_SECURE_NO_WARNINGS
#include "Time.h"
int Time::getYear() const
{
    return year;
}

int Time::getMonth() const
{
    return month;
}

int Time::getDay() const
{
    return day;
}

int Time::getWeekDay() const
{
   return dayOfTheWeek;
}

int Time::getHour() const
{
    return hour;
}

int Time::getMinute() const
{
    return minute;
}

int Time::getSecond() const
{
    return second;
}


Time& Time::updateTime(tm* ltm)
{
    year = 1900 + ltm->tm_year;
    month = 1 + ltm->tm_mon;
    day = ltm->tm_mday;
    dayOfTheWeek = ltm->tm_wday;
    hour = ltm->tm_hour;
    minute = ltm->tm_min;
    second = ltm->tm_sec;
    return *this;
}
void Time::setTimeLocal() {
    time_t now = time(0);
    tm* ltm = localtime(&now);
    updateTime(ltm);
}
void Time::printTime() const
{
    cout << "Date: " << year << '-'
        << setw(2) << setfill('0') << month << '-'
        << setw(2) << setfill('0') << day << ' '
        << setw(2) << setfill('0') << hour << ':'
        << setw(2) << setfill('0') << minute << ':'
        << setw(2) << setfill('0') << second << endl;
}
void Time::setTime(int year, int month, int day, int hour, int minute, int second)
{
    std::tm time_in = { second, minute, hour, // second, minute, hour
      day, month-1, year-1900 }; // 1-based day, 0-based month, year since 1900
    time_t time_temp = mktime(&time_in);
    tm* ltm = localtime(&time_temp);
    updateTime(ltm);
    
}
