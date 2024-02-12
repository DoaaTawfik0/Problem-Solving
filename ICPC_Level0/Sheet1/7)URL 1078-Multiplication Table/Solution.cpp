#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int Number , Iterator;

    cin >> Number;
    for(Iterator = 1 ; Iterator <=10 ; Iterator++)
    {
        cout << Iterator << " x " << Number << " = " << (Iterator*Number) << endl;
    }

    return 0;
}
