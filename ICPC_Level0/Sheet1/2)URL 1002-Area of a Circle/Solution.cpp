#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double PI=3.14159;
    double Radius,Result;
	
    cin>>Radius;
    Result=Radius*Radius*PI;
	
    cout<<fixed<<setprecision(4)<<"A="<<Result<<endl;
	
    return 0;
}