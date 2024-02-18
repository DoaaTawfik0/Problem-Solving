#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int Iterator, T, Internal_Iterator, Temp_Value, X_value;
    string Array[100], STR1, STR2, X_Str = "";
    char Temp_Char;

    cin >> T;

    for(Iterator = 0 ; Iterator < T ; Iterator++)
    {
        cin >> Array[Iterator];
    }

    for(Iterator = 0 ; Iterator < T ; Iterator++)
    {
        Temp_Char = Array[Iterator][0];//First char in string
        Temp_Value = Array[Iterator].size();

        for(Internal_Iterator = 0 ; Internal_Iterator < Temp_Value ; Internal_Iterator++)
        {

            if(Temp_Value %2 == 0)
            {
                /* if even String*/
                X_value = Temp_Value/2;
                STR1 = Array[Iterator].substr(0, X_value);
                STR2 = Array[Iterator].substr(X_value);
            }
            else
            {
                 /* if odd String*/
                if(Temp_Char == Array[Iterator][Internal_Iterator])
                {
                    STR1 = Array[Iterator].substr(0, Internal_Iterator);
                    STR2 = Array[Iterator].substr(Internal_Iterator);

                }
            }
        }

        if(STR1 == STR2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;


    }

    return 0;
}



