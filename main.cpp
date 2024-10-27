/*
Ali Jackson 
September 20th 2024
Module 3 project 1
*/

#include <iostream>
#include "Clock.h"

// menu output!!!
void displayMenu() {
    std::cout << "\nMenu:\n";
    std::cout << "1. Add Hour\n";
    std::cout << "2. Add Minute\n";
    std::cout << "3. Add Second\n";
    std::cout << "4. Exit\n";
}

int main() {
    int h, m, s;
    
    // take input
    std::cout << "Enter initial time (hh mm ss): ";
    std::cin >> h >> m >> s;
    
    // choose initial time
    Clock clock(h, m, s);

    int choice;

    
    while (true) {
        std::cout << "\nCurrent Time:\n";
        clock.display12HourFormat();
        clock.display24HourFormat();
        displayMenu();
        
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                clock.addHour();
                break;
            case 2:
                clock.addMinute();
                break;
            case 3:
                clock.addSecond();
                break;
            case 4:
                std::cout << "Exiting program...\n";
                return 0; // Exit
            default:
                std::cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
