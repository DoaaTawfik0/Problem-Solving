#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    unsigned int N, Iterator, Array[100000], Counter = 1, Final_Counter = 1;

    cin >> N;

    for(Iterator = 0 ; Iterator < N ; Iterator++)
    {
        cin >> Array[Iterator];
    }

    for(Iterator = 1 ; Iterator < N ; Iterator++)
    {

        if(Array[Iterator] > Array[Iterator-1])
        {
            Counter++;
        }
        else
        {
            Counter = 1;
        }
        if(Counter > Final_Counter)
        {
            Final_Counter = Counter;

        }
        else
        {
            /*Do nothing*/
        }

    }
    cout << Final_Counter << endl;

    return 0;
}




