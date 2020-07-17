#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    // array of char
    char arrStr[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << arrStr << endl;
    // modify a char
    arrStr[1] = 'E';
    cout << arrStr << endl;
    // char ptr
    const char* ptrStr = "Hello";
    cout << ptrStr << endl;
    // string is mutable
    string str = "Hello World";
    string* ptr = &str;
    cout << "String: " << str << endl;
    cout << "Ptr to String (Addres: " << ptr << "): " << *ptr << endl;
    str += "!";
    cout << "Modified String: " << str << endl;
    cout << "Ptr to String (Addres: " << ptr << "): " << *ptr << endl;
    // string methods
    str.append("!!");
    cout << str << endl;
    cout << &str << endl;
    cout <<  str.find("lo") << endl;
    // string comparison
    string A = "Compare";
    string B = "Compare";
    // same string, but two different address location
    cout << &A << " " << &B << endl;
    // comparison can be done with simple "=="
    if (A==B) {
        cout << "two strings are equal" << endl;
    }
    cout << A.compare(B) << endl;

    return 0;
}
