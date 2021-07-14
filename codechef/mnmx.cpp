#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
   ll n ;
   cin >> n ;
   ll x ;
   vector <ll> vec ;
   for (ll i = 0; i < n; i++)
   {
        cin >> x ;
        vec.push_back(x) ;
   }

   sort(vec.begin(),vec.end()) ;
   ll cost= (n-1) * vec[0] ;

//    int len=vec.size()  ;
//    for (int i = 0; i < n; i++)
//    {
//        len=vec.size() ;
//        if (len>1)
//        {
//            vec.pop_back() ;
//            cost+=vec[0];
//        }
       
//    }

   cout <<  cost << endl ;


   return 0 ;
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