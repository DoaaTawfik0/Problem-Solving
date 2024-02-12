#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int Numbers , Iterator;

    cin >> Numbers;

    int Array[Numbers];
    for(Iterator = 0 ; Iterator < Numbers ; Iterator++)
    {
        cin >> Array[Iterator];
    }
    for(Iterator = 0 ; Iterator < Numbers ; Iterator++)
    {
        if(Array[Iterator]%2 == 0)
        {
            if(Array[Iterator] > 0)
            {
                cout << "EVEN POSITIVE" << endl;
            }
            else if(Array[Iterator] < 0)
            {
                cout << "EVEN NEGATIVE" << endl;
            }
            else
            {
                cout << "NULL" << endl;
            }
        }
         else
        {
            if(Array[Iterator] > 0)
            {
                cout << "ODD POSITIVE" << endl;
            }
            else if(Array[Iterator] < 0)
            {
                cout << "ODD NEGATIVE" << endl;
            }
            else
            {
                cout << "NULL" << endl;
            }
        }
    }

    return 0;
}