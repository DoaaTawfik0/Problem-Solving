#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    string My_Str ;
    int Counter = 0, Start, End;
 
    cin >> My_Str;
 
    if(My_Str.size()==1)
    {
        cout << "YES";
    }
    else
    {
 
        for(Start = 0, End = (My_Str.size())-1; Start <= End ; Start++, End--)
        {
 
            if(My_Str.at(Start) != My_Str.at(End))
            {
                Counter++;
 
            }
 
        }
        if(Counter == 1)
            cout << "YES";
        else if((Counter == 0) && (My_Str.size() % 2 != 0))
            cout << "YES";
        else
            cout << "NO";
 
    }
    return 0;
}