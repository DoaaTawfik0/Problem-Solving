#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    string My_Str;
    cin >> My_Str;
 
    if((My_Str.find("1111111") != -1) || (My_Str.find("0000000") != -1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
 
    return 0;
}