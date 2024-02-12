#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double Number;
   cin >> Number;

   if((Number >= 0) && (Number <=25))
   {
      cout << "Intervalo [0,25]" << endl;
   }
   else if((Number > 25) && (Number <= 50))
   {
      cout << "Intervalo (25,50]" << endl;
   }
   else if((Number > 50) && (Number <= 75))
   {
      cout << "Intervalo (50,75]" << endl;
   }
   else if((Number > 75) && (Number <= 100))
   {
      cout << "Intervalo (75,100]" << endl;
   }
   else
   {
      cout << "Fora de intervalo" << endl;
   }

    return 0;
}