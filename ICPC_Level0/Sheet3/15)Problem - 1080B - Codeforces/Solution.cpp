#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

long long cumulative_sum(long long n)
{
    if (n % 2 == 0)
    {
        return n/2;
    } else
    {
        return -(n/2+1);
    }
}

int main()
{
    long long Q , Iterator , Array[2000] , SUM = 0;

    cin >> Q;

    for(Iterator = 0 ; Iterator < (2*Q) ; Iterator++)
    {
       cin >> Array[Iterator];
    }
    for(Iterator = 1 ; Iterator < (2*Q) ; Iterator+=2)
    {
        SUM = 0;
        SUM = cumulative_sum(Array[Iterator])-cumulative_sum(Array[Iterator-1]-1);
        cout << SUM << endl;
    }

    return 0;
}




