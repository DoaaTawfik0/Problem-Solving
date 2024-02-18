#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int Iterator;
    string My_Str , New_Str = "" , Dot_Char = ".";
    char Char_Val;

    cin >> My_Str;

    for(Iterator = 0 ;Iterator < My_Str.size() ;Iterator++)
    {
        Char_Val = My_Str[Iterator];
        if(Char_Val=='A' || Char_Val=='O' || Char_Val=='Y' || Char_Val=='E' || Char_Val=='U' || Char_Val=='I'
           || Char_Val=='a' || Char_Val=='o' || Char_Val=='y' || Char_Val=='e' || Char_Val=='u' || Char_Val=='i')
        {
          /*Do Nothing*/
        }
        else
        {
          New_Str += Dot_Char;

          if(isupper(Char_Val))
          {
             Char_Val += 32;
          }
          New_Str += Char_Val;
        }

    }

    cout << New_Str;



    return 0;
}
