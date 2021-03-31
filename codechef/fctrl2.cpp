// method 1 and a successful method for finding factorial of large numbers in c++(using boost library)
// another method can be solution through storing the number in array


// #include<bits/stdc++.h>
// #include<boost/multiprecision/cpp_int.hpp>
// using namespace std ;
// using namespace boost::multiprecision ;

// int main()
// {
//    cpp_int t ; cin >> t ;
//    while (t--)
//    {
//       cpp_int n ;
//       cin >> n ;
//       cpp_int res=1 ;
//       cpp_int ans=1 ;
//       while (res<=n)
//       {
//          ans*=res ;
//          res++ ;
//       }
      
//       cout << ans << endl ;

//    }
   

//    return 0;
// }






// #include<bits/stdc++.h>
// using namespace std ;
// typedef unsigned long long int ll ;
// int solution()
// { 
//    const unsigned long long int m=1000000007 ;
//     ll n,f=1; 
//     cin >> n ;
    
//     for ( ll i = 1 ; i <= n ; i++ )
//     {
//        f=(f*i) % m ;
//     }
    
//     cout << f << "\n" ;

//     return 0;
// }

// int main()
// {
//     ll t;
//     cin >> t ;
//     for ( ll i = 0 ; i < t ; i++ )
//     {
//        solution() ;
//     }
    
//     return 0; 

// }






// #include<bits/stdc++.h>
// using namespace std ;
// typedef long long int ll  ;

// int fact(int n) 
// {
//     ll ans=1 ;
//     if(n==0||n==1)
//     {
//         return (1) ;
//     }
//     else
//     {
//        ans = n * fact(n-1) ;
//     }
//        return ans ;
// }

// int main()
// {
//     ll t ;
//     cin >> t ;

//     while (t>0)
//     {
//        ll n,res=1 ;
//        cin >> n; 
//        res=fact(n) ;
//        cout << res << "\n" ;

//        t-- ;
//     }

//     return 0;
// }

