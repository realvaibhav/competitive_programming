#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;
#define endl "\n"


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s1,s2,s3 ;
    cin >> s1 >> s2 >> s3 ;
    // s1=ab , s2=bc , s3=ac 
    // as b=sqrt((ab*bc)/ac)
    // as c=sqrt((ac*bc)/ab)
    // as a=sqrt((ab*ac)/bc)

    int side1=sqrt((s1*s2)/s3) ;
    int side2=sqrt((s3*s2)/s1) ;
    int side3=sqrt((s1*s3)/s2) ; 

    int ans=4*(side1+side2+side3) ; // we have 4 such set of (side1+side2+side3)
    cout << ans << endl ;

    return 0 ;
}