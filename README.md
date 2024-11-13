# Cpp-DualClockDisplay 🕰️

The **Cpp-DualClockDisplay** program offers a versatile and user-friendly solution for displaying the current time in both **12-hour** and **24-hour** formats. This tool is ideal for users who need flexibility in timekeeping, allowing them to switch between the two formats with ease. The program features a simple yet powerful interface, providing a clear display of time with the ability to adjust hours, minutes, and seconds.

## Project Summary

The **Cpp-DualClockDisplay** program solves the problem of providing clear and accessible time displays, giving users the flexibility to choose between 12-hour and 24-hour time formats. This C++-based application features intuitive controls for adjusting the time and provides an accurate representation of both formats. The program is built with industry best practices in mind, prioritizing user experience and efficient functionality.

## Features

- **12-hour and 24-hour Formats**: Display the current time in both formats, making it easy for users to choose according to their preference.
- **Time Adjustments**: Users can manually adjust hours, minutes, and seconds to simulate different times or correct errors.
- **User-friendly Interface**: Simple and clear time display with easy-to-use controls.
- **Efficient Code Structure**: Organized and modular design for better readability and maintainability.

## Strengths

- **Code Readability**: The program is structured into logical functions, making the flow easy to follow. This ensures that the code is easily understandable, which is crucial for future updates, maintenance, or collaboration.
- **Modular Design**: Each function has a clear, specific responsibility, improving both the organization and clarity of the code.

## Areas for Enhancement

- **Error Handling and Input Validation**: While the program functions well, there is room for improvement by adding robust error handling and input validation. This would prevent users from entering invalid time values and ensure the program's security and reliability.
- **User Experience Improvements**: Future versions could include enhanced features such as time zone adjustments or the ability to set alarms.

## Challenges and Solutions

The most challenging aspect of this project was implementing the functionality to toggle between the 12-hour and 24-hour formats. This involved understanding and working with time formatting and conversion techniques. I overcame these challenges by leveraging C++ documentation, online tutorials, and debugging tools in my IDE. These resources helped me pinpoint issues and optimize the feature, making it a seamless part of the program.

## Transferable Skills

This project reinforced several important skills, including:

- **Proficiency in C++**: Enhanced understanding of C++ syntax and logic.
- **Modular Programming**: Practiced structuring code into logical, reusable components.
- **User-Centered Design**: Focused on creating an intuitive and accessible interface for users.
  
These skills are highly transferable and applicable to a wide range of future projects that require clean, readable code and a focus on usability.

## Code Maintainability

I focused on maintaining clean and organized code by dividing the program into well-defined, modular functions. This approach ensures that the program is easy to update and expand, such as adding features like multiple time zones or additional time-related functionalities in the future.

## How to Use

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/Coolhand-tech/Cpp-DualClockDisplay.git
   ```

2. **Navigate to the Project Folder**:
   ```bash
   cd Cpp-DualClockDisplay
   ```

3. **Compile the Code**:
   - On **Linux/macOS**:
     ```bash
     g++ -o dual_clock_display Clock.cpp main.cpp
     ```
   - On **Windows** (using an IDE like Visual Studio):
     - Open the project in Visual Studio and build the solution.

4. **Run the Application**:
   ```bash
   ./dual_clock_display
   ```

5. **Adjust Time and Format**: Use the provided controls to switch between the 12-hour and 24-hour formats, and adjust hours, minutes, and seconds as needed.

## Requirements

- **C++ Compiler** (e.g., g++, Visual Studio, etc.)
- **C++17 or later** (for advanced features)

## License

This project is open-source and available under the [MIT License](LICENSE).
