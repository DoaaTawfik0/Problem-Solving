#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int Number , Even_Counter = 0 , Odd_Counter = 0;
    int Positive_Counter = 0 , Negative_Counter = 0 ,Iterator;

    for(Iterator = 1 ; Iterator < 6 ; Iterator++)
    {
        cin >> Number;

        if(Number > 0)
           Positive_Counter++;
        if(Number < 0)
           Negative_Counter++;
        if(Number%2 == 0)
           Even_Counter++;
        else
           Odd_Counter++;
    }

    cout << Even_Counter << " valor(es) par(es)" << endl <<  Odd_Counter << " valor(es) impar(es)" << endl;
    cout << Positive_Counter << " valor(es) positivo(s)" << endl << Negative_Counter << " valor(es) negativo(s)" << endl;



    return 0;
}