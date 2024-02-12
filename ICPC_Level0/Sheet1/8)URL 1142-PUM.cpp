#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int Number , Iterator , Value = 1;

    cin >> Number;
    for(Iterator = 1 ; Iterator <=Number ; Iterator++)
    {
       cout << Value++ << " " << Value++ << " " << Value++ << " " << "PUM" << endl;
       Value++;
    }

    return 0;
}
