#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000000
#define endl "\n" 


int solution()    
{
   
   int n ,  x  ,  sum=0 , res=0 , flag=0 ;
   cin >> n >> x ;
   int arr[n] ;
   for (int i = 0; i < n; i++)
   {
        cin >> arr[i] ;
        sum+=arr[i] ;
   }
   if (sum==x)
   {
       cout << "NO" << endl ;
   }
   else
   {
       cout << "YES" << endl ;
       for (int i = 0; i < n ; i++)
       {
           res+=arr[i] ;
           if (res==x)
           {
               swap(arr[i],arr[i+1]) ;
           }
           cout << arr[i] << " " ;
           
       }
       cout << endl ;
   }
   
   
   
   return 0  ;
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