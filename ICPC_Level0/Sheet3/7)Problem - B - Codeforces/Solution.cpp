#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    unsigned int T, Iterator, X_Iterator, Array[10000], Even_Counter, Odd_Counter, X_Array[200000], Sum;
    cin >> T;
    for(Iterator = 0 ; Iterator < T ; Iterator++)
    {
        cin >> Array[Iterator]; 
    }
    for(Iterator = 0 ; Iterator < T ; Iterator++)
    {
        Sum = 0;
        Odd_Counter = 1;
        Even_Counter = 2;
        for(X_Iterator = 0 ; X_Iterator < (Array[Iterator]/2) ; X_Iterator++)
        {
            X_Array[X_Iterator] = Even_Counter;
            Sum += Even_Counter;
            Even_Counter += 2;
        }
        for(X_Iterator = (Array[Iterator]/2) ; X_Iterator < Array[Iterator] ; X_Iterator++)
        {
            if(X_Iterator == (Array[Iterator]-1))
            {
                X_Array[X_Iterator] = Sum;
            }
            else
            {
                X_Array[X_Iterator] = Odd_Counter;
                Sum -= Odd_Counter;
                Odd_Counter += 2;
            }

        }
        X_Iterator--;
        if(X_Array[X_Iterator] %2 == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for(X_Iterator = 0 ; X_Iterator < Array[Iterator] ; X_Iterator++)
            {
                cout << X_Array[X_Iterator] << " " ;
            }
            cout << endl;
        }
    }


    return 0;
}




