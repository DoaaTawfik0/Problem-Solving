#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    int N , Iterator;
    string Array[100] , Abbreviation , Temp_Str;
 
    cin >> N;
 
    for(Iterator = 0 ; Iterator < N ; Iterator++)
    {
        cin >> Array[Iterator];
    }
    for(Iterator = 0 ; Iterator < N ; Iterator++)
    {
 
        if(Array[Iterator].size() > 10)
        {
           Abbreviation = "";
           Temp_Str = Array[Iterator][0];
           Abbreviation += Temp_Str;
           Temp_Str = to_string(Array[Iterator].size()-2);
           Abbreviation += Temp_Str;
           Temp_Str = Array[Iterator][Array[Iterator].size()-1];
           Abbreviation += Temp_Str;
           cout << Abbreviation<<endl;
        }
        else
        {
             cout << Array[Iterator] << endl;
        }
 
    }
    return 0;
}