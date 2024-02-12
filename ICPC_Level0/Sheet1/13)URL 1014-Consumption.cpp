
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int Total_Distance;
    double Fuel , Car_Consumption;

    cin >> Total_Distance >> Fuel;
    Car_Consumption = Total_Distance/Fuel;

    cout << fixed << setprecision(3) << Car_Consumption << " km/l" << endl;


    return 0;
}