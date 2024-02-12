
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int Product_Code , Units_Number , Iterator = 2;
    double Unit_Price , Total_Price = 0;

    while(Iterator > 0)
    {
       cin >> Product_Code >> Units_Number >> Unit_Price;
       Total_Price += Units_Number*Unit_Price;
       Iterator--;
    }
    cout << fixed << setprecision(2) <<"VALOR A PAGAR: R$ " << Total_Price << endl;

    return 0;
}