#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 10000000
#define endl "\n" 


bool num[MAX]; 
  
void method() 
{ 
  
    
    memset(num, true, sizeof(num)); 
  
    for (ll j = 2; j * j <= MAX; j++) { 
  
         
        if (num[j] == true) { 
  
            
            for (ll i = j * j; i <= MAX; i += j) 
                num[i] = false; 
        } 
    } 
} 
 
int check(ll start, ll f) 
{ 
  
    ll ans = -1; 
    
    for (ll i = start + 1; i < MAX; i++) { 
  
       
        if (num[i] == true) 
            f--; 
  

        if (f == 0) { 
            ans = i; 
            break; 
        } 
    } 
  
    return ans;
}    

int solution()
{
   
   ll left , right ;
   cin >> left >> right ;
   ll start = (left>=right?left:right) ;
   ll ans=0 ;
   start++ ;
   
   ans=check(start,3) ;
   cout << ans << endl ;

   return 0;
}


int main()
{
    method() ;
    ll t ;
    cin >> t ;
    for (ll i = 0; i < t; i++)
    {
       solution() ;
    }

    return 0;
}