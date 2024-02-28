#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int N, Iterator,X_Iterator , Y_Iterator ;
    string My_Str, New_Str = "" , X_Str = "" , Y_Str = "" ;
    cin >> N;
    cin >> My_Str;
    for(Iterator = 0 ; Iterator < N ; Iterator++)
    {
        if(Iterator%2 == 0)
        {
             X_Str += My_Str[Iterator];
        }
        else
        {
             Y_Str += My_Str[Iterator];
        }
    }

    if(N%2 != 0)
    {
        for(Y_Iterator = Y_Str.size()-1; Y_Iterator >= 0 ; Y_Iterator--)
        {
            New_Str += Y_Str[Y_Iterator];
        }
        for(X_Iterator = 0 ; X_Iterator < X_Str.size() ; X_Iterator++)
        {
            New_Str += X_Str[X_Iterator];
        }
    }
    else
    {
        for(X_Iterator = X_Str.size()-1; X_Iterator >= 0 ; X_Iterator--)
        {
            New_Str += X_Str[X_Iterator];
        }
        for(Y_Iterator = 0 ; Y_Iterator < Y_Str.size() ; Y_Iterator++)
        {
            New_Str += Y_Str[Y_Iterator];
        }

    }


    cout << New_Str;



    return 0;
}




