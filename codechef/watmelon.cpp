#include<bits/stdc++.h>
 using namespace std; 
 typedef long long int ll ;

 int calling()
 { 

  
      int n , sum=0 ;
      cin >> n  ; // size of array or number of elements in array
      int arr[n] ; // declaring array with variable size
      for(int i=0 ; i<n ; i++)
      {
          cin >> arr[i] ;
          sum=sum+arr[i] ;
      }
      if(sum>=0)
      {
          cout<< "YES\n" ;
      }
      else
      {
          cout << "NO\n" ;
      }
      
     return 0; 

 }



 int main()
 {
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
    cout.tie(NULL);

      ll t  ;
      cin >> t ;   // total test case
      for (ll i = 0; i < t; i++)
      {
          calling(); 
      }

      return 0 ; 

 }