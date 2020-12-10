#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll ;

 int main()
  {

     ll n , query , i , j , size , index1 , value ,index2 ;
     cin >> n ;
     cin >> query ;
     vector  <vector <ll> > variable ;  // vector of vector of name variable and don't declare this statement within the for loop


     for( i=0 ; i < n ; i++)
       {
            
           cin >> size ;
           vector <ll> change ; // vector of name change
     for ( j=0 ; j < size ; j++) 
     {

        cin >> value ;
        change.push_back(value) ; // pushing back each elements

     }  

        variable.push_back(change) ; // pushing back whole vector

        }
    

    for( i=0 ; i< query ; i++)
     {
        cin >> index1 >> index2 ; // index1 means index if i and index2 means index of j 
        cout << variable[index1][index2] << endl  ;  // accessing vector in array syntax and it will works like 2d array 
     }


     return 0 ;

  }
