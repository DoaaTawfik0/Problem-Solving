#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int N, Array[1000], Iterator, Min_Index  = 0 , Max_Index = 0;
    int MIN_Element, MAX_Element;

    cin >> N;
    cin >> Array[0];

    MIN_Element = Array[0];
    MAX_Element = Array[0];

    for(Iterator = 1 ; Iterator < N ; Iterator++)
    {
        cin >> Array[Iterator];

        if(Array[Iterator] > MAX_Element)
        {
            MAX_Element = Array[Iterator];
            Max_Index = Iterator;
        }
        if(Array[Iterator] < MIN_Element)
        {
            MIN_Element = Array[Iterator];
            Min_Index = Iterator;
        }
    }
    //Swapping between Variables
    Array[Max_Index] ^= Array[Min_Index];
    Array[Min_Index] ^= Array[Max_Index];
    Array[Max_Index] ^= Array[Min_Index];

    for(Iterator = 0 ; Iterator < N ; Iterator++)
    {
        cout << Array[Iterator] << " ";
    }

    return 0;
}
