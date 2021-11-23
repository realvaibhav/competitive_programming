#include <iostream>
using namespace std;
typedef long long ll ;
#define endl "\n" 

int main() 
{
	ll t ;
	cin >>  t ;
	while(t--)
	{
	    ll n ;
	    cin >> n ;
	    ll arr[n] ;
	    ll sum=0 , one=0 , two=0 , zero=0  ;
	    for(ll i=0 ; i<n ; i++)
	    {
	        cin >> arr[i] ;
	        sum+=arr[i] ;
	        
	        if(arr[i]%3==1)
	        {
	            one++ ;
	        }
	        else if(arr[i]%3==2)
	        {
	            two++ ;
	        }
	        else
	        {
	            zero++ ;
	        }
	    }
	    ll temp=abs(one-two)  ;
	    if(sum%3!=0)
	    {
	        cout << "-1" << endl ;
	    }
	    else
	    {
	        cout << min(one,two) + 2*(temp/3) << endl ;
	    }
	}
}
