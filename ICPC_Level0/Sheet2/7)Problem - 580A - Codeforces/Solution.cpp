#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    int n , Iterator , Temp_Counter = 1 , Counter = 1 , Temp_Value , Array[100000];
 
    cin >> n;
 
    for(Iterator = 0 ; Iterator < n ; Iterator++)
    {
        cin >> Array[Iterator];
    }
 
    Temp_Value = Array[0];
 
    for(Iterator = 1 ; Iterator < n ; Iterator++)
    {
        if(Array[Iterator] >= Temp_Value)
        {
            Temp_Value = Array[Iterator];
            Counter++;
        }
        else if(Iterator != n-1)
        {
            Temp_Value = Array[Iterator];
            Counter = 1;
        }
        if(Counter > Temp_Counter)
            Temp_Counter = Counter;
    }
    cout << Temp_Counter << endl;
 
    return 0;
}