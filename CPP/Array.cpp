// static size: size needed at compile time
// "items" must be of the same type
// No warning for out of range (simply access/modify the data in that memory block)
// Not really an object, merely placed in contiguous memory blocks
#include <iostream>
using namespace std;

void printArray(int arr[], int size);

int main(int argc, char const *argv[])
{
    // different ways to initialize
    // initialize fixed-size array with no values
    int arrA[5];
    cout << "Uninitialized array has random values:" << endl;
    printArray(arrA, 5);
    // initialize with values
    int arrB[3] = {1, 2, 3};
    cout << "Initialized with values:" << endl;
    printArray(arrB, 3);
    // implicit size by providing values
    int arrC[] = {4, 5, 6};
    cout << "Implicitly fixed size:" << endl;
    printArray(arrC, 3);
    // **below will not compile**
    // int arrD[];
    // int arrE[3] = {'a', 2, 1.5}; // though 'a' = 97 int, 1.5 cannot be converted to int implicitly

    // accessing outside range (some random data at that memory location)
    cout << "arrB[3] = " << arrB[3] << endl;

    // address of each element
    cout << "address of " << arrB[0] << ": " << &arrB[0] << endl;
    cout << "address of " << arrB[1] << ": " << &arrB[1] << endl;
    cout << "address of " << arrB[2] << ": " << &arrB[2] << endl;

    // so you can iterate over contiguous memory blocks using pointer
    for (int *ptr = &arrB[0]; ptr != &arrB[3]; ptr++)
    {
        cout << ptr << ": " << *ptr << endl;
    }

    return 0;
}

void printArray(int arr[], int size)
{
    cout << "[";
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
