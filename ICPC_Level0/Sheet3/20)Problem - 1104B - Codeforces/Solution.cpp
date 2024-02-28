#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int Iterator, Counter = 0;
    string S;
    stack <char> My_Stack;
    cin >> S;

    for(Iterator = 0 ; Iterator < S.size() ; Iterator++)
    {
        if((!My_Stack.empty()) && (S[Iterator]== My_Stack.top()))
        {
            My_Stack.pop();
            Counter++;
        }
        else
        {
            My_Stack.push(S[Iterator]);
        }

    }
    if(Counter %2 != 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }



    return 0;
}
