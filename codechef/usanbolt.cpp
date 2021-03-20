#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{

   double boltspeed , boltdistance , gap , tigeracc , tigerdistance , tigerspeed ;
   cin >>  boltdistance >> gap >> tigeracc  >> boltspeed ;
   tigerdistance=boltdistance+gap ;
   double ttime=sqrt((2*tigerdistance)/tigeracc);
   double btime=boltdistance/boltspeed ;

   if (btime<ttime)
   {
       cout << "Bolt" << endl ;
   }
   else
   {
       cout << "Tiger" << endl ;
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