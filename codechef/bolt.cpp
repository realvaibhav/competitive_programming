#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
   double factr1 , factr2 , factr3 , babugun ;
   cin >> factr1 >> factr2 >> factr3 >> babugun ;
   double ans=0 ;
   double res=(factr1*factr2*factr3*babugun) ;
   res=100/res ;
   ans=(round(res*100))/100 ;


   if (ans<9.58)
   {
       cout << "YES" << endl ;
   }
   else
   {
       cout << "NO" << endl ;
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