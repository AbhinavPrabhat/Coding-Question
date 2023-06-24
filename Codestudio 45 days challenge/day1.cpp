#include <iostream>
#include <vector>
#include <string>

std::string dayOfTheWeek(int day, int month, int year) {
    std::vector<std::string> dayOfTheWeek = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

    // Adjust the month and year values
    if (month < 3) {
        month += 12;
        year--;
    }

    int century = year / 100;
    int yearOfCentury = year % 100;

    int h = (day + (13 * (month + 1) / 5) + yearOfCentury + (yearOfCentury / 4) + (century / 4) - 2 * century) % 7;

    // Make sure the result is non-negative
    if (h < 0) {
        h += 7;
    }

    return dayOfTheWeek[(h + 6) % 7]; // Adjust for the starting day of the week (0-indexed)
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int day, month, year;
        std::cin >> day >> month >> year;

        std::string dayOfWeek = dayOfTheWeek(day, month, year);
        std::cout << dayOfWeek << std::endl;
    }

    return 0;
}


/*

ertainly! Here's an explanation of the corrected code:

We include the necessary header files: <iostream> for input/output, <vector> for storing the days of the week, and <string> for string operations.

The dayOfTheWeek function takes three parameters: day, month, and year.

We define a vector called daysOfWeek that contains the names of the days of the week.

The function begins by adjusting the month and year values to meet the requirements of Zeller's Congruence algorithm. If the month is January or February, we treat them as months 13 and 14 of the previous year, respectively. We also decrement the year accordingly.

We calculate the century value by dividing the year by 100, and the year of the century by taking the remainder of the division.

Next, we apply Zeller's Congruence algorithm to determine the day of the week. The formula used is:

h = (day + (13 * (month + 1) / 5) + yearOfCentury + (yearOfCentury / 4) + (century / 4) - 2 * century) % 7

This formula gives us a number from 0 to 6, where 0 represents Saturday, 1 represents Sunday, and so on.

To ensure that the result h is non-negative, we add 7 to it if it is negative.

Finally, we return the corresponding day of the week from the daysOfWeek vector based on the adjusted value h. We use (h + 6) % 7 as the index to match the starting day of the week (0-indexed).

In the main function, we first read the number of test cases t from the input.

We then loop t times to read each test case's day, month, and year from the input.

For each test case, we call the dayOfTheWeek function with the given inputs and store the result in the dayOfWeek variable.

Finally, we print the dayOfWeek followed by a newline character using std::cout.

The loop continues until all test cases are processed.

The program terminates after printing the output for all test cases.

This code uses Zeller's Congruence algorithm to calculate the day of the week for a given date. It adjusts the month and year values, applies the algorithm, and returns the corresponding day of the week. The code ensures that the output matches the expected day of the week for each test case.

*/