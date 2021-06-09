#include<bits/stdc++.h>
using namespace std ;

int solution()
{

    int n,c,c1,h,d=0,sum=0,sum1=0,pay=0,pay1=0,count=0,count1=0,ans=0,ans1=0 ; 
    cin >> n >> c >> c1 >> h ;
    string str;
    cin >> str ;
    int i=0 ;
    for(i = 0; i<str.size(); i++)
    {
        if(str[i] == '0')
        {
            count++;
        
        }
        else
        {
            count1++ ;
        }
    }

       pay=count*c ;
       pay1=count1*c1 ;
       d=pay+pay1 ;
       if (c==c1)
       {
           cout << n*c << "\n" ;
       }
       else if (c > c1)
       {
           sum=count*h ;
           pay1=n*c1 ;
           ans=sum+pay1 ;
           if (d>ans)
           {
               cout << ans << "\n" ;
           }
           else
           {
               cout << d << "\n" ;
           }   
        }
        else
        {
            sum1=count1*h ;
            pay=n*c ;
            ans1=sum1+pay ;
            if (d>ans1)
            {
                 cout << ans1 << "\n" ;
            }
            else
            {
                 cout << d << "\n" ;
            }   
        }
    return 0;
}

int main()
{
    int t;
    cin >> t ;
    for (int i = 0 ; i < t ; i++ )
    {
       solution() ;
    }
    
    return 0; 

}