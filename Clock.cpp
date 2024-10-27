/*
Ali Jackson
September 20th 2024
Module 3 Project 1
*/

#include "Clock.h"

// Constructor to initialize the clock
Clock::Clock(int h, int m, int s) {
    setTime(h, m, s);
}

// Set time with validation
void Clock::setTime(int h, int m, int s) {
    hours = (h >= 0 && h < 24) ? h : 0;
    minutes = (m >= 0 && m < 60) ? m : 0;
    seconds = (s >= 0 && s < 60) ? s : 0;
}

// Add hour
void Clock::addHour() {
    hours = (hours + 1) % 24;
}

// Add minute
void Clock::addMinute() {
    minutes++;
    if (minutes >= 60) {
        minutes = 0;
        addHour();
    }
}

// Add second
void Clock::addSecond() {
    seconds++;
    if (seconds >= 60) {
        seconds = 0;
        addMinute();
    }
}

//12-hour format
void Clock::display12HourFormat() const {
    int displayHour = (hours % 12 == 0) ? 12 : hours % 12;
    std::cout << std::setw(2) << std::setfill('0') << displayHour << ":"
              << std::setw(2) << std::setfill('0') << minutes << ":"
              << std::setw(2) << std::setfill('0') << seconds
              << (hours >= 12 ? " PM" : " AM") << "  ";
}

//24-hour format...
void Clock::display24HourFormat() const {
    std::cout << std::setw(2) << std::setfill('0') << hours << ":"
              << std::setw(2) << std::setfill('0') << minutes << ":"
              << std::setw(2) << std::setfill('0') << seconds << "  ";
}
