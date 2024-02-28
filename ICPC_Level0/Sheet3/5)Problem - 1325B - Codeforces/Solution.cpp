#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    unsigned int T, N, Iterator_IN, Iterator_OUT, Counter , Array[100000],Test_Array[100000];

    cin >> T;

    for(Iterator_OUT = 0 ; Iterator_OUT < T ; Iterator_OUT++)
    {
        cin >> N;
        Counter = 1;
        for(Iterator_IN = 0 ; Iterator_IN < N ; Iterator_IN++)
        {
            cin >> Array[Iterator_IN];
        }
        sort(Array, Array+N);
        for(Iterator_IN = 0 ; Iterator_IN < (N-1) ; Iterator_IN++)
        {
            if(Array[Iterator_IN]!=Array[Iterator_IN+1])
            {
                Counter++;
            }
            else
            {
                /*do nothing*/
            }
        }
        Test_Array[Iterator_OUT] = Counter;
    }
    for(Iterator_OUT = 0 ; Iterator_OUT < T ; Iterator_OUT++)
    {
        cout << Test_Array[Iterator_OUT] << endl;
    }


    return 0;
}




