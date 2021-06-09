#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
   int n,k ;
   cin >> n >> k ;
   int d=0 , nx=0 , p=0 , count=0 ;
   int arr[n] ;
   for (int i = 0; i < n; i++)
   {
      arr[i]=i+1 ;
   }
   if (n%2==0)
   {
      d=n/2 ;
   }
   else
   {
      d=(n/2)+1 ;
   }
   
  
   if (k==0)
   {
      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " " ;
      }
      cout << endl ;
   }
   else
   {
      
      if (k>=d)
      {
      cout << "-1" << endl ;
      }
      else
      {
         for (int i = 1; i < n-1; i=i+2)
           {
               if (count<k)
               {
                  nx=arr[i] ;
                  p=arr[i+1] ;
                  arr[i]=nx+1 ;
                  arr[i+1]=p-1 ;    
                  count++ ;
               }
               else
               {
                  break ;
               }
               
           }
           for (int i = 0; i < n; i++)
           {
                cout << arr[i] << " " ;
           }
                cout << endl ;
       
       
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