#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    int N, Array[100000], First_Iterator, Last_Iterator , Palindrome_Flag = 0;
 
    cin >> N;
 
    for(First_Iterator = 0 ; First_Iterator < N ; First_Iterator++)
    {
        cin >> Array[First_Iterator];
 
    }
    for(First_Iterator = 0 , Last_Iterator = N-1 ; First_Iterator < Last_Iterator ; First_Iterator++ , Last_Iterator--)
    {
        if(Array[First_Iterator] != Array[Last_Iterator])
        {
          Palindrome_Flag = 1;
          break;
        }
    }
    if(Palindrome_Flag == 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
 
    return 0;
}