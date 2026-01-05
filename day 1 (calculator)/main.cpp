#include <iostream>
#include <chrono>
#include <thread>
#include <cmath>

using namespace std;

int operation = 0;
float numA = 0;
float numB = 0;
float result = 0;

void addition()
{
    result = numA + numB;
    cout << numA << " plus " << numB << " is equal to " << result << endl;
    cout << "The result is " << result << endl;
}

void substraction()
{
    result = numA - numB;
    cout << numA << " minus " << numB << " is equal to " << result << endl;
    cout << "The result is " << result << endl;
}

void multiplication()
{
    result = numA * numB;
    cout << numA << " by " << numB << " is equal to " << result << endl;
    cout << "The result is " << result << endl;
}

void division()
{
    result = numA / numB;
    cout << numA << " divided by " << numB << " is equal to " << result << endl;
    cout << "The result is " << result << endl;
}

void power()
{
    result = pow(numA, numB);
    cout << numA << " to the power of " << numB << " is " << result << endl;
}

void calculate()
{
    if (operation == 1)
    {
        addition();
    }

    else if (operation == 2)
    {
        substraction();
    }

    else if (operation == 3)
    {
        multiplication();
    }

    else if (operation == 4)
    {
        division();
    }

    else if (operation == 5)
    {
        power();
    }
}

int main()
{
    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono;      // nanoseconds, system_clock, seconds

    cout << endl;
    cout << "Welcome to the calculator." << endl;
    cout << "1. Addition" << endl;
    cout << "2. Substraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Powers" << endl;
    cout << "Select your choice: ";
    cin >> operation;
    cout << endl;
    cout << "Input the first number: " << endl;
    cin >> numA;
    cout << "Input the second number: " << endl;
    cin >> numB;
    cout << endl;
    cout << "Calculating..." << endl;
    cout << endl;
    sleep_for(6s);
    calculate();
    return 0;
}
