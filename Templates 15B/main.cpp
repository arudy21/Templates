//  Alex Rudy
//  April 30
//  Templates 15B

#include <iostream>
#include <string>
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
    int num = static_cast<int>(value / 2);
    return num;
}
