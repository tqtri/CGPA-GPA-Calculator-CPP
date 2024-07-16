#include <iostream>
#include <limits>
#include <iomanip>
using std::cout, std::cin, std::endl;

// Check if input is integer type
int getValidInputInt()
{
    int input;
    while (true)
    {
        cin >> input;

        // Check if the input is valid
        if (cin.fail())
        {
            // Clear the failbit and ignore the remaining input
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid input. Please enter an integer value: ";
        }
        else
        {
            // Ignore the remaining input
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            return input;
        }
    }
}

// Check if input is double type
double getValidInputDouble()
{
    double input;
    while (true)
    {
        cin >> input;

        // Check if the input is valid
        if (cin.fail())
        {
            // Clear the error state
            cin.clear();
            // Ignore the rest of the invalid input
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid input. Please enter an integer value: ";
        }
        else
        {
            // Clear the input buffer in case of valid input followed by invalid characters
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return input;
        }
    }
}

// Function to calculate GPA
void calculateGPA()
{
    system("cls");

    int n = 0;
    cout << "---------------------------------------------------" << endl;

    while (n <= 0)
    {
        cout << "How many subjects do you want to calculate? ";
        n = getValidInputInt();
    }

    double creditTotal = 0;
    double marksTotal = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Please enter the credit for subject " << i + 1 << ": ";
        double credit = getValidInputDouble();
        creditTotal += credit;

        cout << "Please enter the mark for subject  " << i + 1 << ": ";
        double marks = getValidInputDouble();
        marksTotal += marks * credit;
    }

    if (creditTotal == 0)
    {
        cout << "Total credits cannot be 0." << endl;
    }
    else
    {
        cout << endl
             << "Your GPA is " << std::fixed << std::setprecision(2) << marksTotal / creditTotal << "." << endl;
    }
}

// Function to calculate CGPA
void calculateCGPA()
{
    system("cls");

    int n = 0;
    cout << "---------------------------------------------------" << endl;

    while (n <= 0)
    {
        cout << "How many semesters do you want to calculate? ";
        n = getValidInputInt();
    }

    double semTotal = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Please enter your GPA for semester " << i + 1 << ": ";
        semTotal += getValidInputDouble();
    }

    cout << "Your CGPA is " << std::fixed << std::setprecision(2) << semTotal / (double)n << "." << endl;
}

// Help function to show formulas to users
void help()
{
    system("cls");

    bool running = true;

    int choice;

    while (running)
    {
        cout << "---------------------------------------------------" << endl;
        cout << "What do you need help with?" << endl;
        cout << "1. Show formula for calculating GPA." << endl;
        cout << "2. Show formula for calculating CGPA" << endl;
        cout << "3. Back" << endl;

        cout << "Enter your choice: ";
        choice = getValidInputInt();

        switch (choice)
        {
        case 1:
            cout << "The formula for calculating GPA is:\nSum of weighted marks of X courses / X courses\nWeighted marks of course Y = Marks of course Y * Credits of course Y" << endl;
            break;
        case 2:
            cout << "The formula for calculating CGPA is:\nTotal GPA of X semesters / X semesters" << endl;
            break;
        case 3:
            running = false;
            break;
        default:
            cout << "You have not entered a valid choice." << endl;
            break;
        }
    }
}

int main()
{
    system("cls");

    int choice;

    bool running = true;

    while (running) // Program keeps running until user chooses to exit
    {
        cout << "---------------------------------------------------" << endl;
        cout << "               GPA & CGPA Calculator               " << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "MENU:" << endl;
        cout << "1. Calculate GPA (Grade Point Average)" << endl;
        cout << "2. Calculate CGPA (Cummulative Grade Point Average)" << endl;
        cout << "3. Help" << endl;
        cout << "4. Exit Application" << endl;
        cout << "---------------------------------------------------" << endl;

        cout << "Enter your choice: ";
        choice = getValidInputInt();

        switch (choice)
        {
        case 1:
            calculateGPA();
            break;
        case 2:
            calculateCGPA();
            break;
        case 3:
            help();
            break;
        case 4:
            running = false;
            break;
        default:
            cout << "You have entered a wrong choice. Please try again!" << endl;
            break;
        }
    }
}