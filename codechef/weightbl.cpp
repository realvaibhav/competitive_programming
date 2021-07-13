#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{

   int wey1 , wey2 , check1 , check2 , month ;
   cin >> wey1 >> wey2 >> check1 >> check2 >> month ; 
   int res=wey2-wey1 ;
   check1*=month ;
   check2*=month ;

   if (res>=check1 && res<=check2)
   {
       cout << 1 << endl ;
   }
   else
   {
       cout << 0 << endl ;
   }
   
  
   return 0;
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    int t ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
       solution() ;
    }

    return 0;
}