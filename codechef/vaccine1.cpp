#include <bits/stdc++.h>
using namespace std;

int main()
{

    int day1=0 , vac1=0 , day2=0 , vac2=0 , total=0 ; 
    cin >> day1 >> vac1 >> day2 >> vac2 >> total    ;
    int count=1 , min=1 ;
    while (total>0)
    {
        if (count==day1||count==day2)
        {
            if (count==day1)
            {
               total=total - vac1 ;
               day1++ ;
               if (count==day2)
               {
                  total=total - vac2 ;
                  day2++ ;
               }
               count++ ;
            }
            else
            {
                total=total - vac2 ;
                day2++ ;
                 if (count==day1)
                {
                  total=total - vac1 ;
                  day1++ ;
                }
                count++ ;
            } 
            
            
        }
        else
        {
            count++ ;
        }
        
    } 
    
    
cout << count-1 << "\n" ;
    
    
    return 0;
}


