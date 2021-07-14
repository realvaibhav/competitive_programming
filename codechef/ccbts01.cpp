#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t ;
	cin >> t ;
	while(t--)
	{
	    string s ;
	    cin >> s ;
	    sort(s.begin(),s.end()) ;
	    if(s[0]=='C' && s[1]=='M' && s[2]=='P' )
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
