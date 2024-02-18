#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
     int N , Iterator , Value = 0;
     string Arr[150] , Temp;
     cin >> N;
     
     for(Iterator = 0 ; Iterator < N ; Iterator++)
     {
         cin >> Arr[Iterator];
     }
 
     for(Iterator = 0 ; Iterator < N ; Iterator++)
     {
         Temp = Arr[Iterator];
         if(Temp.find("+") != -1)
         {
             Value++;
         }
         else
         {
             Value--;
         }
 
     }
 
     cout << Value << endl;
 
    return 0;
}