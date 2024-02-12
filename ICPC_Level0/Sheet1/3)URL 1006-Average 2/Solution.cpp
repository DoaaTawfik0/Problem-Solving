#include <iostream>
#include <iomanip>

using namespace std;
 
int main() 
{
    int weight1 = 2 , weight2 = 3 , weight3 = 5;
	
    int Total_Weight = weight1+weight2+weight3;
	
    double A , B , C , Weighted_Grade;
	
    cin >>A>>B>>C;
    Weighted_Grade = ((A*weight1)+(B*weight2)+(C*weight3))/Total_Weight;

    cout<<fixed<<setprecision(1)<<"MEDIA = "<<Weighted_Grade<<endl;

    return 0;
}