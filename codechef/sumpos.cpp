#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;


int solution()
{
   int arr[3] ;
   for (int i = 0; i <3 ; i++)
   {
      cin >> arr[i] ;
   }
sort(arr,arr+3) ;
if(arr[0]+arr[1]==arr[2])
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
    for (int i = 1; i <= t; i++)
    {
       solution() ;
    }

    return 0;
}