#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int Iterator, N, Anton_Counter = 0, Danik_Counter = 0;
    char Array[100000];

    cin >> N;

    for(Iterator = 0 ; Iterator < N ; Iterator++)
    {
        cin >> Array[Iterator];
        if(Array[Iterator] == 'D')
        {
            Danik_Counter++;
        }
        else if(Array[Iterator] == 'A')
        {
            Anton_Counter++;
        }
        else
        {
            /* Nothing to do*/
        }
    }

    if(Anton_Counter > Danik_Counter)
    {
        cout << "Anton" << endl;
    }
    else if(Anton_Counter < Danik_Counter)
    {
         cout << "Danik" << endl;
    }
    else
    {
         cout << "Friendship" << endl;
    }


    return 0;
}



