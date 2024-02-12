#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int Correct_Password = 2002 , Password;

  while(1)
  {
      cin >> Password;
      if(Password == Correct_Password)
      {
        cout << "Acesso Permitido" << endl;
        break;
      }
      cout << "Senha Invalida" << endl;
  }

    return 0;
}