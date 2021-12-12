#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1 , s2   ;
    cin >> s1 >> s2  ;
    int n=s1.size()  ;
    for(int i=0 ; i<n ; i++)
    {
         if(s1[i]>='A' && s1[i]<='Z')
         {
             s1[i]=s1[i]+32 ;
         }
         if(s2[i]>='A' && s2[i]<='Z')
         {
             s2[i]=s2[i]+32 ;
         }
    }
    for(int i=0 ; i<n ; i++)
    {
        if(s1[i]>s2[i])
        {
            cout << "1" << endl ;
            return 0 ;
        }
        if(s2[i]>s1[i])
        {
            cout << "-1" << endl ;
            return 0 ;
        }

    }

    cout << "0" << endl ;
     

    return 0 ;
}