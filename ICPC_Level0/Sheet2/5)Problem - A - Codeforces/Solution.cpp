#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main()
{
    int Array[5][5] , Iterator_i  , Iterator_j , I_POS , J_POS , Counter = 0;
 
    for(Iterator_i = 0 ; Iterator_i < 5 ; Iterator_i++)
    {
       for(Iterator_j = 0 ; Iterator_j < 5 ; Iterator_j++)
       {
          cin >> Array[Iterator_i][Iterator_j];
          if(Array[Iterator_i][Iterator_j] == 1)
          {
              I_POS = Iterator_i;
              J_POS = Iterator_j;
          }
       }
    }
 
    while((I_POS != 2) || (J_POS !=2))
    {
        if(I_POS < 2)
        {
            I_POS++;
            Counter++;
        }
        else if(I_POS > 2)
        {
            I_POS--;
            Counter++;
        }
        if(J_POS < 2)
        {
            J_POS++;
            Counter++;
        }
        else if(J_POS > 2)
        {
             J_POS--;
            Counter++;
        }
    }
 
    cout << Counter;
 
    return 0;
}