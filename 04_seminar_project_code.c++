#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main()
{
    int Automated_Number;
    float UserNum;
    auto count = 1;

    srand(time(NULL));
    Automated_Number = rand() % 10;
    cout << "\n                           ************ WELCOME To Integer Guessing Game!!! *************                    \n"
         << endl;

    cout << "------ Computer will randomly generate a number between (0-10) . You need to guess it in least number of attempts -------\n";

    while (1)
    {
        cout << "\nEnter your guess : ";
        cin >> UserNum;

        if (Automated_Number == UserNum)
        {
            cout << "*****************************************************************\n\n";
            cout << "CONGRATS !!! You are right , the automated number was " << Automated_Number << ".\n";
            cout << "You guessed it in " << count << " attempts.\n\n";
            cout << "*****************************************************************\n";
        }
        else if (Automated_Number > UserNum)
        {
            cout << "Automated number is greater than " << UserNum << ", try again !\n\n";
        }
        else
        {
            cout << "Automated number is smaller than " << UserNum << ", try again !\n\n";
        }
        count++;
    }
    return 0;
}