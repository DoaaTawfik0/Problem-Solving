#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int K , W , Iterator , Sum = 0;
    unsigned int N;

    cin >> K >> W >> N;

    while(N != 0)
    {
        Sum += (K*N);
        N--;
    }

    if((W-Sum) < 0)
    {
        cout << Sum-W << endl;
    }
    else
    {
        Sum = 0;
        cout << Sum << endl;
    }



    return 0;
}



