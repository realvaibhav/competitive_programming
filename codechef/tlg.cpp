#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    int num1 , num2 , res1=0 , res2=0 , ans=0 , d=0 , sum1=0 , sum2=0 ;
    for (int  i = 0; i < n; i++)
    {

        cin >> num1 >> num2 ;
        sum1+=num1 ;
        sum2+=num2 ;
        if (sum1>sum2)
        {
            res1=sum1-sum2 ;
            if (res1>ans)
            {
               ans=res1 ;
               d=1 ;
            }
            
        }
        else    
        {
            res2=sum2-sum1 ;
            if (res2>ans)
            {
               ans=res2 ;
               d=2 ;
            }
        }
        
    }
 
    cout << d << " " << ans << endl ;

    return 0;
}