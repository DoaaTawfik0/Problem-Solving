#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
      string My_Str , New_Str;
      int T , Iterator ;

      cin >> T;
      cin >> My_Str;

      for(Iterator = 1 ; Iterator <= T ; Iterator++)
      {
          if(T%Iterator == 0)
          {
            reverse(My_Str.begin() , My_Str.end()-(T-Iterator));

          }

      }
       cout << My_Str << endl;
    return 0;
}




