#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int T , N , Iterator_Out , Iterator_In;
    string My_Str , New_Str , X_Arr[1000];

    cin >> T;

    for(Iterator_Out = 0 ; Iterator_Out < T ; Iterator_Out++)
    {
        cin >> N;
        cin >> My_Str;
        New_Str = "";
        for(Iterator_In = 0 ; Iterator_In < ((2*N)-1) ; Iterator_In+= 2)
        {
           New_Str += My_Str[Iterator_In];
        }
        X_Arr[Iterator_Out] = New_Str;

    }

    for(Iterator_Out = 0 ; Iterator_Out < T ; Iterator_Out++)
    {
        cout << X_Arr[Iterator_Out] << endl;
    }
    return 0;
}




