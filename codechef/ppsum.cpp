#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int sum(int n)
{
   if (n==1)
   {
      return 1;
   }
   else
   {
      return n+sum(n-1) ;
   }
   
   
}

int solution()
{
   
   int d,n ;
   cin >> d >> n ;
   int res=n , ans=0 , count=0 ;
   for (int i = 1; i <=d; i++)
   {
       count=sum(res) ;
       res=count ;
   }
   
   cout << count << endl ;

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