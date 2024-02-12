#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double X1 , X2 , Y1 , Y2 , Distance;

    cin >> X1 >> Y1 >> X2 >> Y2;

    Distance = sqrt(pow((X2-X1) , 2)+pow((Y2-Y1) , 2));

    cout << fixed << setprecision(4) << Distance << endl;

    return 0;
}