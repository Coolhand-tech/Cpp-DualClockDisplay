/*
Ali Jackson
September 20th 2024
Module 3 Project 1
*/

#ifndef CLOCK_H
#define CLOCK_H

#include <iostream>
#include <iomanip>

class Clock {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // initialize clockk
    Clock(int h = 0, int m = 0, int s = 0);
    
    // Set time
    void setTime(int h, int m, int s);
    
    // Methods to add time
    void addHour();
    void addMinute();
    void addSecond();
    
    // two different formats
    void display12HourFormat() const;
    void display24HourFormat() const;
};

#endif
