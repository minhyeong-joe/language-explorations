
#include <iostream>
#include <string>
using namespace std;

// generic type class
template<class T>
class Node {
private:
    T data;
public:
    Node(const T& data) {
        this->data = data;
    }
    T getData() const {
        return this->data;
    }
    void setData(const T& data) {
        this->data = data;
    }
};

// generic type function
template<typename T>
T findSmaller(const T& a, const T& b) {
    if (a <= b) {
        return a;
    }
    return b;
}

int main(int argc, char const *argv[])
{
    // using user-defined generic datatype
    Node<int> intNode(3);
    cout << intNode.getData() << endl;
    Node<string> strNode("Hello");
    cout << strNode.getData() << endl;

    // generic type function
    int a = 3;
    int b = 4;
    cout << findSmaller(a, b) << endl;
    // generic type function given datatypes that do not have "<=" will not compile
    // Node<int> intNode2(4);
    // findSmaller(intNode, intNode2);
    
    return 0;
}
