#include <string>
#include <iostream>

using namespace std;

static void printGivenName(void);
static void calcAndPrintSumOfTwoNumbers(void);
static void calcAndPrintDivisionOfTwoNumbers(void);

int main()
{
    printGivenName();
    calcAndPrintSumOfTwoNumbers();
    calcAndPrintDivisionOfTwoNumbers();

    return 0;
}

static void printGivenName(void)
{
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Your name is: " << name << "\n";
}

static void calcAndPrintSumOfTwoNumbers(void)
{
    int number1 = 0;
    int number2 = 0;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    cout << "Sum of numbers is: " << (number1 + number2) << "\n";
}

static void calcAndPrintDivisionOfTwoNumbers(void)
{
    double number1 = 0;
    double number2 = 0;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    cout << "Sum of numbers is: " << (number1 / number2);
}

