#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n,k,Iterator,X_Participation = 0,Arr[50] , Cut_Off;

    cin >> n >> k;

    for(Iterator = 0 ; Iterator < n ; Iterator++)
    {
        cin >> Arr[Iterator];
    }

    Cut_Off = Arr[k-1];
    for(Iterator = 0 ; Iterator < n ; Iterator++)
    {
        if(Arr[Iterator] >= Cut_Off && Arr[Iterator]>0)
            X_Participation++;
    }
     cout << X_Participation;

    return 0;
}
