#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double A , B , C ;
    const double PI = 3.14159;

    cin >> A >> B >> C;

    cout << fixed << setprecision(3) << "TRIANGULO: " << (.5*A*C) << endl;
    cout << fixed << setprecision(3) << "CIRCULO: "  << (PI*C*C) << endl;
    cout << fixed << setprecision(3) << "TRAPEZIO: " << (.5*(A+B)*C) << endl;
    cout << fixed << setprecision(3) << "QUADRADO: " << (B*B) << endl;
    cout << fixed << setprecision(3) << "RETANGULO: " << (A*B) << endl;

    return 0;
}