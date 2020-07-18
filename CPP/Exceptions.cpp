#include <iostream>
#include <stdexcept> // to use standard exception objects
#include <exception> // to inherit from exception
using namespace std;

class MyException: public exception {
public:
    virtual const char* what() const throw() {
        return "My Exception Occurred";
    }
};

void printEven(const int& num) {
    if (num % 2 != 0) {
        throw MyException();
    }
    cout << num << endl;
}

double divide(const double& dividend, const double& divisor) {
    if (divisor == 0) {
        throw runtime_error("Divide By Zero Exception.");
    }
    return dividend/divisor;
}

int main(int argc, char const *argv[])
{
    // throw any type
    try {
        throw 10;
    } catch (const int& e) {
        cout << e << endl;
    }
    try {
        throw "Error";
    } catch (const char* e) {
        cout << e << endl;
    }
    // custom exception
    try {
        printEven(3);
    } catch (MyException& e) {
        cout << e.what() << endl;
    } 
    // using standard exception <stdexcept>
    try {
        divide(3, 0);
    } catch (runtime_error& e) {
        cout << e.what() << endl;
    }
    return 0;
}
