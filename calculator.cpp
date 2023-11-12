#include <iostream>

using namespace std;

// addition function
double Add(double x, double y) {
    return(x + y);
}

// subtraction function
double Subtract(double x, double y) {
    return(x - y);
}

// multiplication function
double Multiply(double x, double y) {
    return(x * y);
}

//division function
double Divide(double x, double y) {
    return(x / y);
}

// function that creates the menu for the app
void showChoice() {
    int choice;
    double val1;
    double val2;
    
    cout << "MENU" << endl;
    cout << "1: Add" << endl;
    cout << "2: Subtract" << endl;
    cout << "3: Multiply" << endl;
    cout << "4: Divide" << endl;
    cout << "5: Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice==1) {
        cout << "Enter two numbers: ";
        cin >> val1 >> val2;
        cout << "Sum: " << Add(val1, val2);
    } else if (choice==2) {
        cout << "Enter two numbers: ";
        cin >> val1 >> val2;
        cout << "Difference: " << Subtract(val1, val2);
    } else if (choice==3) {
        cout << "Enter two numbers: ";
        cin >> val1 >> val2;
        cout << "Product: " << Multiply(val1, val2);
    } else if (choice==4) {
        cout << "Enter two numbers: ";
        cin >> val1 >> val2;
        cout << "Quotient: " << Divide(val1, val2);
    } else {
        return;
    }
    
    
}

int main()
{
    showChoice();

    return 0;
}

