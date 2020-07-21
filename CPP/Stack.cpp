#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> myStack;
    myStack.push(2);
    myStack.push(4);
    cout << myStack.top() << endl;
    myStack.push(3);
    while (myStack.size() > 0) {
        cout << myStack.top() << endl;
        myStack.pop();
    }
    cout << myStack.top() << endl;  // seg fault because there's nothing in the stack
    
    return 0;
}
