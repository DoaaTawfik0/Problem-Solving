#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int N , Iterator;
    string My_Str = "" , New_Str;

    cin >> N;

    for(Iterator = 0 ; Iterator < N ; Iterator++)
    {
        New_Str = to_string(Iterator+1);
        My_Str += New_Str;
    }
    cout << My_Str.at(N-1);
    return 0;
}

