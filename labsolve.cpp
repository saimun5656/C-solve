// A point on the circumference of a circle whose center is (0,0) is (4,5). Write down a C++ program to compute perimeter and area of the circle.

#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculatePerimeter() {
        return 2 * M_PI * radius;
    }

    double calculateArea() {
        return M_PI * pow(radius, 2);
    }
};

int main() {
    // Coordinates of the center
    double centerX = 0;
    double centerY = 0;

    // Coordinates of the point on the circumference
    double pointX = 4;
    double pointY = 5;

    // Calculate the radius using the distance formula
    double radius = sqrt(pow(pointX - centerX, 2) + pow(pointY - centerY, 2));

    // Creating a circle object with the calculated radius
    Circle myCircle(radius);

    // Calculating perimeter and area
    double perimeter = myCircle.calculatePerimeter();
    double area = myCircle.calculateArea();

    // Displaying the results
    std::cout << "Radius of the circle: " << radius << std::endl;
    std::cout << "Perimeter of the circle: " << perimeter << std::endl;
    std::cout << "Area of the circle: " << area << std::endl;

    return 0;
}
//---------------------------------------------------------------------------------
// Write down a C++ program to print the sum of following harmonic series:
// 1+ 1/ 2 + 1/3 + .. + 1/n

#include <iostream>

using namespace std;

class HarmonicSeries {
public:
    double calculateSum(int n) {
        double sum = 0.0;
        for (int i = 1; i <= n; ++i) {
            sum += 1.0 / i;
        }
        return sum;
    }
};

int main() {
    int n;

    // Get user input for 'n'
    cout << "Enter the value of n: ";
    cin >> n;

    // Check if the input is valid
    if (n <= 0) {
        cout << "Please enter a positive integer for 'n'." << endl;
        return 1; // Exit with an error code
    }

    // Calculate and print the sum of the harmonic series
    HarmonicSeries harmonicSeries;
    double sum = harmonicSeries.calculateSum(n);

    cout << "Sum of the harmonic series up to 1/" << n << " is: " << sum << endl;

    return 0; // Exit successfully
}

//--------------------------------------------------------------------------------
// to read a four-digit integer and print the sum of its digits.  


#include <iostream>

using namespace std;

class DigitSumCalculator {
public:
    int calculateDigitSum(int number) {
        int sum = 0;
        while (number > 0) {
            sum += number % 10; // Extract the last digit
            number /= 10;       // Remove the last digit
        }
        return sum;
    }
};

int main() {
    int fourDigitNumber;

    // Get user input for a four-digit integer
    cout << "Enter a four-digit integer: ";
    cin >> fourDigitNumber;

    // Check if the input is valid
    if (fourDigitNumber < 1000 || fourDigitNumber > 9999) {
        cout << "Please enter a valid four-digit integer." << endl;
        return 1; // Exit with an error code
    }

    // Calculate and print the sum of its digits
    DigitSumCalculator digitSumCalculator;
    int sum = digitSumCalculator.calculateDigitSum(fourDigitNumber);

    cout << "Sum of the digits of " << fourDigitNumber << " is: " << sum << endl;

    return 0; // Exit successfully
}

//--------------------------------------------------------------------------------------
// The cost of one type of mobile service is 100tk plus 2tk for each call made. Write down a C++ program to read calls made and print the bill of each customer.

#include <iostream>

using namespace std;

class MobileServiceBill {
public:
    double calculateBill(int numberOfCalls) {
        // Cost of the service (fixed) + Cost per call * Number of calls
        return 100.0 + (2.0 * numberOfCalls);
    }
};

int main() {
    int numberOfCalls;

    // Get user input for the number of calls made
    cout << "Enter the number of calls made: ";
    cin >> numberOfCalls;

    // Check if the input is valid
    if (numberOfCalls < 0) {
        cout << "Please enter a non-negative integer for the number of calls." << endl;
        return 1; // Exit with an error code
    }

    // Calculate and print the bill for the customer
    MobileServiceBill mobileServiceBill;
    double bill = mobileServiceBill.calculateBill(numberOfCalls);

    cout << "The bill for " << numberOfCalls << " calls is: " << bill << " tk" << endl;

    return 0; // Exit successfully
}

//---------------------------------------------------------------------------------
// Write down a C++ program using while loop to reverse a given number. 
// For example:
// Given number: 12345
// Output: 54321

#include <iostream>

using namespace std;

class NumberReverser {
public:
    int reverseNumber(int number) {
        int reversedNumber = 0;

        while (number > 0) {
            int lastDigit = number % 10;
            reversedNumber = (reversedNumber * 10) + lastDigit;
            number /= 10;
        }

        return reversedNumber;
    }
};

int main() {
    int givenNumber;

    // Get user input for the number to be reversed
    cout << "Enter a number: ";
    cin >> givenNumber;

    // Calculate and print the reversed number
    NumberReverser numberReverser;
    int reversedNumber = numberReverser.reverseNumber(givenNumber);

    cout << "Reversed number: " << reversedNumber << endl;

    return 0; // Exit successfully
}

//-------------------------------------------------------------------------------
//Write down a C++ program that requests the user to input values of the amount to be invested, interest rate and period of investment. After that period, it calculates the total balance in bank with interest.

#include <iostream>
#include <cmath>

using namespace std;

class InvestmentCalculator {
public:
    double calculateTotalBalance(double principal, double rate, int years) {
        // Formula for compound interest: A = P * (1 + r/n)^(nt)
        // Where A is the total balance, P is the principal amount, r is the annual interest rate,
        // n is the number of times interest is compounded per year, and t is the number of years.

        const int compoundingFrequency = 1; // Interest compounded annually

        double totalBalance = principal * pow(1 + (rate / 100 / compoundingFrequency), compoundingFrequency * years);
        return totalBalance;
    }
};

int main() {
    double principal, rate;
    int years;

    // Get user input for the amount to be invested, interest rate, and period of investment
    cout << "Enter the amount to be invested: ";
    cin >> principal;

    cout << "Enter the annual interest rate (in percentage): ";
    cin >> rate;

    cout << "Enter the period of investment in years: ";
    cin >> years;

    // Check if the inputs are valid
    if (principal < 0 || rate < 0 || years < 0) {
        cout << "Please enter valid non-negative values." << endl;
        return 1; // Exit with an error code
    }

    // Calculate and print the total balance after the specified period with interest
    InvestmentCalculator investmentCalculator;
    double totalBalance = investmentCalculator.calculateTotalBalance(principal, rate, years);

    cout << "Total balance after " << years << " years: " << totalBalance << " tk" << endl;

    return 0; // Exit successfully
}

//-------------------------------------------------------------------------
//Write down a C++ program to calculate the average of a set of N numbers

#include <iostream>

using namespace std;

class AverageCalculator {
public:
    double calculateAverage(int n) {
        if (n <= 0) {
            cout << "Please enter a positive value for N." << endl;
            return 0.0; // Return 0 if N is not positive
        }

        double sum = 0.0;
        double number;

        cout << "Enter " << n << " numbers, separated by spaces:" << endl;

        for (int i = 0; i < n; ++i) {
            cin >> number;
            sum += number;
        }

        return sum / n;
    }
};

int main() {
    int N;

    // Get user input for the number of elements
    cout << "Enter the number of elements (N): ";
    cin >> N;

    // Calculate and print the average of N numbers
    AverageCalculator averageCalculator;
    double average = averageCalculator.calculateAverage(N);

    if (N > 0) {
        cout << "Average of " << N << " numbers: " << average << endl;
    }

    return 0; // Exit successfully
}

 //------------------------------------------------------------------------------------
 //write down a C++program to convert temperature (from fahrenheit to celsius) 

 #include <iostream>

using namespace std;

class TemperatureConverter {
public:
    double convertToFahrenheit(double celsius) {
        // Formula: F = (C * 9/5) + 32
        return (celsius * 9 / 5) + 32;
    }

    double convertToCelsius(double fahrenheit) {
        // Formula: C = (F - 32) * 5/9
        return (fahrenheit - 32) * 5 / 9;
    }
};

int main() {
    TemperatureConverter temperatureConverter;

    double fahrenheit, celsius;

    // Get user input for temperature in Fahrenheit
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Convert Fahrenheit to Celsius and print the result
    celsius = temperatureConverter.convertToCelsius(fahrenheit);
    cout << fahrenheit << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius." << endl;

    return 0; // Exit successfully
}

//----------------------------------------------------------------------------------------
// mWrite down a C ++ program to convert days to months and days.

#include <iostream>

using namespace std;

class DaysConverter {
public:
    void convertDays(int totalDays) {
        if (totalDays < 0) {
            cout << "Please enter a non-negative value for total days." << endl;
            return;
        }

        const int daysInMonth = 30; // Assuming a month has 30 days

        int months = totalDays / daysInMonth;
        int remainingDays = totalDays % daysInMonth;

        cout << totalDays << " days is equivalent to " << months << " months and " << remainingDays << " days." << endl;
    }
};

int main() {
    DaysConverter daysConverter;

    int totalDays;

    // Get user input for the total number of days
    cout << "Enter the total number of days: ";
    cin >> totalDays;

    // Convert days to months and remaining days, then print the result
    daysConverter.convertDays(totalDays);

    return 0; // Exit successfully
}

//-------------------------------------------------------------------------------
//write down a C++ program to calculate the solution of quadratic equation. 

#include <iostream>
#include <cmath>

using namespace std;

class QuadraticEquationSolver {
public:
    void solveQuadraticEquation(double a, double b, double c) {
        // Calculate the discriminant
        double discriminant = b * b - 4 * a * c;

        // Check the nature of roots based on the discriminant
        if (discriminant > 0) {
            // Two real and distinct roots
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);

            cout << "Roots are real and distinct." << endl;
            cout << "Root 1: " << root1 << endl;
            cout << "Root 2: " << root2 << endl;
        } else if (discriminant == 0) {
            // Two real and equal roots
            double root = -b / (2 * a);

            cout << "Roots are real and equal." << endl;
            cout << "Root: " << root << endl;
        } else {
            // Complex roots
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(abs(discriminant)) / (2 * a);

            cout << "Roots are complex." << endl;
            cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
            cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
        }
    }
};

int main() {
    QuadraticEquationSolver quadraticSolver;

    double a, b, c;

    // Get user input for coefficients of the quadratic equation
    cout << "Enter the coefficient a: ";
    cin >> a;

    cout << "Enter the coefficient b: ";
    cin >> b;

    cout << "Enter the coefficient c: ";
    cin >> c;

    // Solve the quadratic equation and print the result
    quadraticSolver.solveQuadraticEquation(a, b, c);

    return 0; // Exit successfully
}

// -------------------------------------------------------------------------------------------
// Write down a c++ programm to test a character type(alphabetic or digit or uppercase or lowercase)

#include <iostream>
#include <cctype> // For isalpha, isdigit, isupper, islower functions

using namespace std;

class CharacterTester {
public:
    void testCharacter(char ch) {
        if (isalpha(ch)) {
            cout << "The character is alphabetic." << endl;

            if (isupper(ch)) {
                cout << "The character is uppercase." << endl;
            } else if (islower(ch)) {
                cout << "The character is lowercase." << endl;
            }
        } else if (isdigit(ch)) {
            cout << "The character is a digit." << endl;
        } else {
            cout << "The character is neither alphabetic nor a digit." << endl;
        }
    }
};

int main() {
    CharacterTester characterTester;

    char inputCharacter;

    // Get user input for a character
    cout << "Enter a character: ";
    cin >> inputCharacter;

    // Test the character and print the result
    characterTester.testCharacter(inputCharacter);

    return 0; // Exit successfully
}

//--------------------------------------------------------------------------
//Write down a C++ program to test the correctness of input data.

#include <iostream>

using namespace std;

class InputTester {
public:
    bool isInteger(const string& str) {
        for (char ch : str) {
            if (!isdigit(ch)) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    InputTester inputTester;

    string userInput;

    // Get user input
    cout << "Enter an integer: ";
    getline(cin, userInput);

    // Test the correctness of the input data and print the result
    if (inputTester.isInteger(userInput)) {
        cout << "Input is a valid integer." << endl;
        int integerValue = stoi(userInput); // Convert string to integer
        cout << "Integer value: " << integerValue << endl;
    } else {
        cout << "Invalid input. Please enter a valid integer." << endl;
    }

    return 0; // Exit successfully
}

//----------------------------------------------------------------------------------------------
//Write down a C++ program to print a character and a strings

#include <iostream>
#include <string>

using namespace std;

class Printer {
public:
    void printCharacter(char myChar) {
        cout << "Character: " << myChar << endl;
    }

    void printString(const string& myString) {
        cout << "String: " << myString << endl;
    }
};

int main() {
    Printer printer;

    // Print a character
    char myChar = 'A';
    printer.printCharacter(myChar);

    // Print a string
    string myString = "Hello, World!";
    printer.printString(myString);

    return 0; // Exit successfully
}

 //----------------------------------------------------------------------------------------------
 // Write down a C++ program to count the number of boys whose height>65inch and weight>68kg

 #include <iostream>
#include <vector>

using namespace std;

class Boy {
public:
    string name;
    double height;
    double weight;

    Boy(const string& n, double h, double w) : name(n), height(h), weight(w) {}

    bool isTallAndHeavy() const {
        return (height > 65.0 && weight > 68.0);
    }
};

class BoysGroup {
private:
    vector<Boy> boys;

public:
    void addBoy(const Boy& boy) {
        boys.push_back(boy);
    }

    int countTallAndHeavyBoys() const {
        int count = 0;
        for (const Boy& boy : boys) {
            if (boy.isTallAndHeavy()) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    BoysGroup boysGroup;

    // Adding boys to the group
    boysGroup.addBoy(Boy("John", 70.0, 75.0));
    boysGroup.addBoy(Boy("Mike", 64.0, 70.0));
    boysGroup.addBoy(Boy("Alex", 68.0, 72.0));
    boysGroup.addBoy(Boy("Chris", 66.0, 69.0));

    // Counting tall and heavy boys
    int tallAndHeavyCount = boysGroup.countTallAndHeavyBoys();

    cout << "Number of boys with height > 65 inches and weight > 68 kg: " << tallAndHeavyCount << endl;

    return 0; // Exit successfully
}



