#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double A, B, C, Temp ;

    cin >> A >> B >> C;

    if((B > A) && (B > C))
    {
        Temp = A;
        A = B;
        B = Temp;
    }
    else if((C > A) && (C > B))
    {
        Temp = A;
        A = C;
        C = Temp;
    }

    if(A >= (B+C))
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else
    {


        if((A*A) == ((B*B)+(C*C)))
        {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if((A*A) > ((B*B)+(C*C)))
        {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if((A*A) < ((B*B)+(C*C)))
        {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if((A==B) && (A==C))
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        else if((A == B) || (A == C) || (B == C))
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }

    }


    return 0;
}