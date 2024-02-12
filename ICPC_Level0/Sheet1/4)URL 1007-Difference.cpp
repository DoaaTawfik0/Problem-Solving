#include <iostream>
#include <iomanip>
 
using namespace std;

int main()
{
    int A , B , C , D , Difference;

    cin >> A >> B >> C >> D;

    Difference = ((A*B)-(C*D));
    cout << "DIFERENCA = " << Difference << endl;
    return 0;
}