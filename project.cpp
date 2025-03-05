#include <iostream>
using namespace std;

enum Menu {
    PLUS = 101,
    MINUS = 102,
    DIVIDE = 103,
    MULT = 104,
    EXIT = 0
};

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double mult(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "error" << endl;
        return 0;
    }
    return a / b;
}

void menu() {
    int choice;
    double num1, num2, result;

    do {
        cout << "101 - plus +\n";
        cout << "102 - minus -\n";
        cout << "103 - divide /\n";
        cout << "104 - multiply *\n";
        cout << "0 - enter\n";
        cout << "your choice: ";
        cin >> choice;

        if (choice == EXIT) {
            cout << "the end\n";
            break;
        }

        cout << "enter first num: ";
        cin >> num1;
        cout << "enter second num: ";
        cin >> num2;

        switch (choice) {
            case PLUS:
                result = add(num1, num2);
                cout << "result: " << result << endl;
                break;
            case MINUS:
                result = subtract(num1, num2);
                cout << "result: " << result << endl;
                break;
            case DIVIDE:
                result = divide(num1, num2);
                cout << "result: " << result << endl;
                break;
            case MULT:
                result = mult(num1, num2);
                cout << "result: " << result << endl;
                break;
        }

    } while (true);
}

int main() {
    menu(); // запуск
    return 0;
}
    
