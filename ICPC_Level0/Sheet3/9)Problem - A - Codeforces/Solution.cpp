#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int Weight = 0, Remainder, X_Value, Y_Value;

    cin >> Weight;


    X_Value = Weight/2;
    if((Weight %2 == 0) && (X_Value %2 != 0))
    {
        X_Value++;
        Y_Value = Weight-X_Value;

    }
    {

        if(Weight %2 != 0)
        {
            Remainder = Weight %2 ;
            X_Value += Remainder;
        }
        else
        {
            /*do nothing*/
        }

        Y_Value = Weight-X_Value;

    }

    if((X_Value % 2 == 0) && (Y_Value % 2 == 0) && (Y_Value != 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

     
    return 0;
}



