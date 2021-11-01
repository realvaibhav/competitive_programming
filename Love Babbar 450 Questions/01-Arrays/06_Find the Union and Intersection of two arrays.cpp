#include<bits/stdc++.h>
using namespace std  ;

int main()
{
    int n1 ;
    cin >> n1 ;
    int arr1[n1] ;
    for(int i=0 ; i<n1 ; i++)
    {
        cin >> arr1[i] ;
    }
    int n2 ;
    cin >> n2 ;
    int arr2[n2] ;
    for(int i=0 ; i<n2 ; i++)
    {
        cin >> arr2[i] ;
    }
    
    //   Union of two arrays 

    unordered_set<int> s ;
    for(int i=0 ; i<n1 ; i++)
    {
        s.insert(arr1[i]) ;
    }
    for(int i=0 ; i<n2 ; i++)
    {
        s.insert(arr2[i]) ;
    }
    cout << "The Union of two arrays : " << endl ;
    for(auto x:s)
    {
        cout << x << " "  ;
    }
    cout  <<  endl  ;


    // Intersection of two arrays

    unordered_set<int> temp , vec  ; 
    for(int i=0 ; i<n1 ; i++)
    {
        temp.insert(arr1[i]) ;
    }
    for(int i=0 ; i<n2 ; i++)
    {
        int res=temp.count(arr2[i]) ;
        if(res!=0)
        {
            vec.insert(arr2[i]) ;
        }
    }
    cout << "The Intersection of two arrays : " << endl ;
    for(auto x:vec)
    {
        cout << x << " "  ;
    }
    cout  <<  endl  ;



    return 0 ;
}