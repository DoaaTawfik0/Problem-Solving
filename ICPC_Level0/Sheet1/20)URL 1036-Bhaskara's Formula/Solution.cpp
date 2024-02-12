#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double A , B , C , Root_Value , Root1 , Root2;

    cin >> A >> B >> C;

    Root_Value = ((B*B)-(4*A*C));

    if((A == 0) || (Root_Value < 0))
    {
        cout << "Impossivel calcular" <<endl;
    }
    else
    {
        Root1 = ((-B+sqrt(Root_Value))/(2*A));
        Root2 = ((-B-sqrt(Root_Value))/(2*A));
        cout << fixed << setprecision(5) << "R1 = " << Root1 << endl;
        cout << fixed << setprecision(5) << "R2 = " << Root2 << endl;
    }

    return 0;
}
