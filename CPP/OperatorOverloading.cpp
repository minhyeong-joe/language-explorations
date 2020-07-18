#include <iostream>
#include <stdexcept>
using namespace std;

class Coordinate
{
private:
    double x;
    double y;

public:
    Coordinate() {}
    Coordinate(const double &x, const double &y)
    {
        this->x = x;
        this->y = y;
    }
    // cout << overloading
    friend ostream &operator<<(ostream &os, const Coordinate &p)
    {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
    // cin >> overloading
    friend istream &operator>>(istream &is, Coordinate &p)
    {
        is >> p.x >> p.y;
        return is;
    }
    // Unary operator overloading
    void operator-()
    {
        this->x = -this->x;
        this->y = -this->y;
    }
    double operator[](int index)
    {
        switch (index)
        {
        case 0:
            return this->x;
            break;
        case 1:
            return this->y;
            break;
        default:
            throw out_of_range("Index Out of Range");
        }
    }
    // Binary operator overloading (left-hand side is treated as this, parameter takes in rhs)
    Coordinate operator+(const Coordinate &rhs)
    {
        return Coordinate(this->x + rhs.x, this->y + rhs.y);
    }
    Coordinate operator-(const Coordinate &rhs)
    {
        return Coordinate(this->x - rhs.x, this->y - rhs.y);
    }
    Coordinate operator*(const Coordinate &rhs)
    {
        return Coordinate(this->x * rhs.x, this->y * rhs.y);
    }
    Coordinate operator/(const Coordinate &rhs)
    {
        return Coordinate(this->x / rhs.x, this->y / rhs.y);
    }
};

int main(int argc, char const *argv[])
{
    Coordinate pointA(3, 5);
    Coordinate pointB;
    Coordinate pointC;
    // overloaded output operator<<
    cout << "PointA: " << pointA << endl;
    // unary operator- test
    -pointA;
    cout << "-PointA: " << pointA << endl;
    cout << "PointA[0] = " << pointA[0] << endl;
    // cin operator>>
    cout << "Enter two numbers separated by a whitespace: ";
    cin >> pointB;
    cout << "Your Point: " << pointB << endl;

    // binary operator
    pointC = pointA + pointB;
    cout << pointA << " + " << pointB << " = " << pointC << endl;
    pointC = pointA - pointB;
    cout << pointA << " - " << pointB << " = " << pointC << endl;
    pointC = pointA * pointB;
    cout << pointA << " * " << pointB << " = " << pointC << endl;
    pointC = pointA / pointB;
    cout << pointA << " / " << pointB << " = " << pointC << endl;

    return 0;
}
