#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int N, Iterator, Counter = 0;
    string My_Str;

    cin >> N;
    cin >> My_Str;

    if(N == 1)
    {
        cout << Counter;
    }
    else
    {
        for(Iterator = 0 ; Iterator < N ; Iterator++)
        {
            if(My_Str[Iterator] == My_Str[Iterator+1])
                Counter++;
        }

        cout << Counter;

    }


    return 0;
}



