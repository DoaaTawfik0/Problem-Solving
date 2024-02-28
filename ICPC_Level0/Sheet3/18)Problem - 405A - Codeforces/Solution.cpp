#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;



int main()
{
   int N , Array[100] , Iterator;

   cin >> N;
   for(Iterator = 0 ; Iterator < N ; Iterator++)
   {
       cin >> Array[Iterator];
   }
   sort(Array , Array+N);
   for(Iterator = 0 ; Iterator < N ; Iterator++)
   {
       cout << Array[Iterator] << " " ;
   }


   return 0;
}




