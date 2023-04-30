//  Alex Rudy
//  April 30
//  Templates 15B

#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
T half(T value)
{
    T num;
    num = value / 2;
    return num;
}

int half(int value)
{
    int num = value / 2;
    return round(static_cast<double>(num + 0.5));
}

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 9;
    
    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
}
