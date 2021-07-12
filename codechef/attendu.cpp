#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
int solution()
{
   int n,count=0,d=0 ;
   cin >> n ;
   string s ;
   cin >> s ;

   for (int i = 0; i <n; i++)
   {
     if (s[i]=='1')
     {
        count++ ;
     } 
   }
   d=120-n ;
   if (d+count>=90)
   {
      cout << "YES" << "\n" ;
   }
   else
   {
      cout << "NO" << "\n" ;
   }
   
   return 0;
}

int main()
{
    int t ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
        solution();
    }

    return 0;
}