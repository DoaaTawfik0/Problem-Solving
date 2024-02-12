#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int Number , Iterator ;
    cin >> Number;

    for(Iterator = 1 ; Iterator <= Number ; Iterator++)
    {
        if(Iterator %2 == 0)
            cout << Iterator << "^" << 2 << " = " << (Iterator*Iterator) << endl;
    }

    return 0;
}