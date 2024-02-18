#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int Iterator, X_Value = 0;
    string My_Str, New_Str, Temp_Str = "";
    char Temp_char;

    cin >> My_Str;

    for(Iterator = 0 ; Iterator < My_Str.size() ; Iterator++)
    {
        if((My_Str[Iterator] >= '1') && ((My_Str[Iterator] <= '3')))
        {
            Temp_char = My_Str[Iterator];
            Temp_Str += Temp_char;
        }
    }
    Iterator = 0;
    sort(Temp_Str.begin(), Temp_Str.end());
    X_Value = Temp_Str.size();

    while(X_Value)
    {
        cout << Temp_Str[Iterator];
        if(X_Value != 1)
           cout << "+";
        X_Value--;
        Iterator++;
    }

    return 0;
}



