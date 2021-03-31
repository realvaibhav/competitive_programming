#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   int stud , subj ;
   cin >> stud >> subj ;
   int arr[stud] ;
   set <int> s ;
   for (int i = 0; i < stud; i++)
   {
       cin >> arr[i] ;
       s.insert(arr[i]) ;
   }
   if ((s.size())<subj)
   {
       cout << "Yes" << endl ;
   }
   else
   {
       cout << "No" << endl ;
   }
   
   
   
   

   
   return 0;
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    int t ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
       solution() ;
    }

    return 0;
}