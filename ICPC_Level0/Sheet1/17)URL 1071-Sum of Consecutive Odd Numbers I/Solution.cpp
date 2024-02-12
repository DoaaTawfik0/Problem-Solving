#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int Number1 , Number2 , Iterator , Sum = 0;

    cin >> Number1 >> Number2;
    for(Iterator = Number1-1 ; Iterator > Number2 ; Iterator--)
    {
        if(Iterator %2 != 0)
           Sum +=Iterator;
    }
    cout << Sum << endl;


    return 0;
}