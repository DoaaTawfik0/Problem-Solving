#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int A, B, C, Counter = 0, X_Value = 7;
    cin >> A >> B >> C;

    while((A != 0) || (B != 0) || (C != 0))
    {
        if((A >= 1) && (B >= 2) && (C >= 4))
        {
            A -= 1;
            B -= 2;
            C -= 4;
            Counter++;
        }
        else
        {
            break;
        }
    }
    cout << (Counter*X_Value) << endl;
    
    return 0;
}
