#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int N, Array[3000], Iterator, Temp_Value;

    cin >> N;

    for(Iterator = 0 ; Iterator < N ; Iterator++)
    {
        cin >> Array[Iterator];
    }

    Temp_Value = 1;

    for(Iterator = 0 ; Iterator < N ; Iterator++)
    {
        if(Temp_Value == Array[Iterator])
        {
           Temp_Value++;
           Iterator = -1;
        }
    }
    cout << Temp_Value;

    return 0;
}
