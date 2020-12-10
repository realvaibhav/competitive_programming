#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n , value=0 ;
   cin >> n ;
   vector<int> vec ;
   for (int i=0 ; i < n ; i++) 
   {
      cin >> value ;
      vec.push_back(value) ;  
   } 
     sort(vec.begin(),vec.end()) ;
       for (int i=0 ; i < n ; i++) 
   {
       cout << vec.at(i) << " " ;
   }

   cout << "\n" ;

    return 0;
}
