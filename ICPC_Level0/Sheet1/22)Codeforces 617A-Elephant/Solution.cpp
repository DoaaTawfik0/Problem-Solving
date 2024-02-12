
 
#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main()
{
    int X_Position , Steps = 0;
 
    cin >> X_Position;
 
    while(X_Position != 0)
    {
        if(X_Position >= 5)
        {
          X_Position -=5;
          Steps++;
        }
        else if(X_Position >= 4)
        {
          X_Position -=4;
          Steps++;
        }
        else if(X_Position >= 3)
        {
          X_Position -=3;
          Steps++;
        }
        else if(X_Position >= 2)
        {
          X_Position -=2;
          Steps++;
        }
        else if(X_Position >= 1)
        {
          X_Position -=1;
          Steps++;
        }
    }
    cout << Steps;
 
 
    return 0;
}