#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    long long N_Size , M_Size , A_Size , AN_Stones = 0 , AM_Stones = 0;
    long long X_Num;

    cin >> N_Size >> M_Size >> A_Size;

   // cout << M_Size;
    if(N_Size % A_Size != 0)
    {
        AN_Stones = N_Size / A_Size;
        AN_Stones++;
    }
    else
    {
        AN_Stones = N_Size / A_Size;
    }

    if(M_Size % A_Size != 0)
    {
        AM_Stones = M_Size / A_Size;
        AM_Stones++;
    }
    else
    {
        AM_Stones = M_Size / A_Size;
    }
     X_Num = AM_Stones*AN_Stones;
    cout << X_Num;




    return 0;
}



