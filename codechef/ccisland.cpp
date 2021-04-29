#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000000
#define endl "\n" 


int solution()
{
   
  int food , water , tfood , twater , days ;
  cin >> tfood >> twater >> food >> water >> days ;
  if (((food*days)<=tfood)&&((water*days)<=twater) )
  {
      cout << "YES" << endl ;
  }
  else
  {
      cout << "NO" << endl ;
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