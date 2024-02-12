#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int Employee_Num , Worked_Hours;
    float Amount_Per_Hour , Salary;

    cin >> Employee_Num >> Worked_Hours >> Amount_Per_Hour;

    Salary = Worked_Hours*Amount_Per_Hour;

    cout << "NUMBER = " << Employee_Num << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << Salary << endl;

    return 0;
}