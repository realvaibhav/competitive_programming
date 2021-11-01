#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000000
#define endl "\n" 
// for(int i=0 ; i<n ; i++)
// for(auto x : vec )
// vector<int> vec 
// set<int> s 

void solution()
{ 
   ll n ;
   cin >> n ;
   if(n==1||n==2)
   {
       cout << 1 << endl  ;
   }
   else
   {
       ll ans1=0 ;
       ll temp=log2(n)  ;
       ll ans2=0   ;
       if(floor(log2(n))==ceil(log2(n)))
       {
           ll num1=pow(2,temp)  ;
           ll num2=pow(2,temp - 1)  ;
           ans1=num1-num2 ;
       }
       else
       {
           ll num=pow(2,temp) ;
           ans1=n-num + 1  ;
           ll var=pow(2,temp - 1)  ;
           ans2=num-var ;
       }

       cout << max(ans1,ans2) << endl  ;
        
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