#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int N , M , Iterator , Counter = 0 , Array[20000];
    cin >> N >> M;

    for(Iterator = 0 ; Iterator < (2*M*N) ; Iterator++)
    {
        cin >> Array[Iterator];
    }
    for(Iterator = 0 ; Iterator < ((2*M*N)-1) ; Iterator+=2)
    {
       if((Array[Iterator]==1) || (Array[Iterator+1]==1))
       {
          Counter++;
       }
       else
       {
           /*do nothing*/
       }
    }

    cout << Counter;


    return 0;
}




