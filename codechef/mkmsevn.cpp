#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   int n , sum=0 , d=0 , ans=0 , res=0 , count=0 ;
   cin >> n ;
   int arr[n] ;
   for (int i = 0; i < n; i++)
   {
       cin >> arr[i] ;
       sum+=arr[i] ;
       if (arr[i]==2)
       {
           d++ ;
       }
       
   }
   if (sum%2==0)
   {
       cout << "0" << endl ;
   }
   else
   {
       if (d==0)
       {
           cout << "-1" << endl ;
       }
       else
       {
           cout << "1" << endl ;
       }
       
       
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