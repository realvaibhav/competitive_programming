#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int oleft , aruns , bruns ;
   cin >> aruns >> oleft >> bruns ;
   int ans=0 , res=0 ;

   if (bruns>aruns)
   {
      cout << "YES" << endl ;
   }
   else
   {
       res=(20-oleft) ;
       ans=res*36 ;
       bruns+=ans;
       if (bruns>aruns)
       {
          cout << "YES" << endl ;
       }
       else
       {
           cout << "NO" << endl ;
       }
       


   }
   
   

    return 0;
}