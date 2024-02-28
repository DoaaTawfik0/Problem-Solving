#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
   int N , Iterator ;
   string That_String = "that " , It_String = "it " , My_Str = "";
   
   cin >> N;
   
   for(Iterator = 1 ; Iterator <= N ; Iterator++)
   {
       if(Iterator % 2 == 0)
       {
          My_Str += "I love ";
       }
       else if(Iterator % 2 != 0)
       {
          My_Str += "I hate ";
       }
       else
       {
           /*Do Nothing*/
       }
       if(Iterator != N)
       {
           My_Str += That_String;
       }
       else
       {
           My_Str += It_String;
       }
   }

   cout << My_Str << endl;


    return 0;
}



