#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n , array1[10000] , array2[10000] ;
    cin >> n ;
     for ( int i=0 ; i<n ; i++ )
     {
         cin >> array1[i] ;
     } 
     for ( int i=0 ; i<=n-1 ; i++ )
     {
        array2[i] = array1[n-i-1]  ;
        cout << array2[i] << " " ;
     }
        
    return 0;
}
