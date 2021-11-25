#include <iostream>
using namespace std;

template <class T1, class T2>
float funcAverage(T1 p, T2 q)
{
    float avg = (p + q) / 2.0;
    return avg;
}

int main()
{
    float average;
    average = funcAverage(7.8, 8.2);
    cout << "Average is : " << average << endl;
    return 0;
}