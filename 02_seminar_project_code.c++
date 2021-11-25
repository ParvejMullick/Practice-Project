#include <iostream>
using namespace std;

float funcAverage(int p, float q)
{
    float avg = (p + q) / 2.0;
    return avg;
}

int main()
{
    float average;
    average = funcAverage(8, 9.2);
    cout << "Average value is : " << average << endl;
    return 0;
}