#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solution()
{ 
   double s , a , b , c  ;
   cin >>  s >> a >> b >> c  ;
   double temp= s * c ;
   temp/=100  ;

    s+=temp  ;

   if(s>=a && s<=b)
   {
        cout << "Yes" << endl  ;
   }
   else
   {
       cout << "No" << endl  ;
   }
   
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


   return 0  ;
}