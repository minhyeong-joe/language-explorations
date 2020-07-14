/**
 * C++ passes arguments by both value and reference, 
 * and the programmer has the freedom to make a choice based on the requirement.
 */

#include <iostream>
using namespace std;

void passByValue(int num);
void passByReference(int &num);
// const reference is used to ensure the function does not modify caller's value
// this takes advantages of:
// 1. save memory (by using reference instead of making another copy)
// 2. explicitly set argument as const to prevent accidental modification (side effects)
void passByConstReference(const int &num);

// For Arrays:
// Two different ways - passing as unsized array OR passing as pointer
// but there's NO DIFFERENCE in behaviors.
void passUnsizedArray(int arr[], int size);
void passArrayPointer(int *arr, int size);

int main(int argc, char const *argv[])
{
    int n = 1;
    cout << "Initial Value: " << n << endl;
    passByValue(n);
    cout << "After Pass By Value: " << n << endl;
    passByReference(n);
    cout << "After Pass By Reference: " << n << endl;
    passByConstReference(n);
    cout << "After Pass By Const Reference: " << n << endl;

    cout << endl;

    int arr[] = {1, 2, 3};
    int size = 3;
    cout << "Initial Array: [";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    passUnsizedArray(arr, size);
    cout << "After Pass By Value: [";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    passArrayPointer(arr, size);
    cout << "After Pass By Value: [";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}

void passByValue(int num)
{
    num += 1;
    cout << "Inside Pass By Value: " << num << endl;
}
void passByReference(int &num)
{
    num += 1;
    cout << "Inside Pass By Reference: " << num << endl;
}
void passByConstReference(const int &num)
{
    // the compiler will throw error if this function tries to modify const int& num
    // num += 1;
    cout << "Inside Pass By Const Reference: " << num << endl;
}

void passUnsizedArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] += 1;
    }
    cout << "Inside Pass By Value: [";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}
void passArrayPointer(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] += 1;
    }
    cout << "Inside Pass By Reference: [";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}
