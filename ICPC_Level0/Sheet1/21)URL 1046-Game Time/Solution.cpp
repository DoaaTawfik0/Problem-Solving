#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int Start , End , Duration;
    cin >> Start >> End;

    if(Start > End)
    {
        Duration = 24-Start+End;
    }
    else if(Start < End)
    {
        Duration = End-Start;
    }
    else
    {
        Duration = 24;
    }

    cout << "O JOGO DUROU " << Duration << " HORA(S)" << endl;
    return 0;
}