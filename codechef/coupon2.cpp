#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   int a1,a2,a3,b1,b2,b3 ;
   int c, d ;
   cin >> d >> c ;
   cin >> a1 >> a2 >> a3 ;
   cin >> b1 >> b2 >> b3 ;

   int num1=0 ;
   num1= a1+a2+a3 ;
   int num2=0 ;
   num2=b1+b2+b3 ;
   int cost1=0 , cost2=0 ;
   if (num1>=150)
   {
       cost1=num1+c ;
       if (num2>=150)
       {
          cost2=num2 ;
       }
       else
       {
          cost2=num2+d ;
       }
       
   }
   else
   {
       cost1=num1+d ;
       
       if (num2>=150)
       {
          cost2=num2+c ;
       }
       else
       {
          cost2=num2+d ;
       }
   }

   num1+=d ;
   num2+=d ;


   if ((cost1+cost2)<(num1+num2))
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