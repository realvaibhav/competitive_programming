#include<bits/stdc++.h>
using namespace std  ;

int main()
{
    string s ;
    cin >> s ;
    int lower=0 , upper=0 ;
    for(int i=0 ; i<s.size() ; i++)
    {
        int x=(int)s[i] ;
        if(x>=97 && x<=122)
        {
            lower++ ;
        }
        else
        {
            upper++ ;
        }
        
    }
    
    if( lower==0 || upper==0 )
    {
        cout << s << endl ;
        return 0 ;
    }


    if(lower>=upper)
    {
        for(int i=0 ; i<s.size() ; i++)
        {
             char c , h ;
             h=s[i] ;
             int x=(int)h ;
             if(x>=65 && x<=90)
             {
                 x+=32 ;
                 c=(char)x ;
                 s[i]=c ;
             }
            
        }
    }
    else 
    {
        for(int i=0 ; i<s.size() ; i++)
        {
             char c , h ;
             h=s[i] ;
             int x=(int)h ;
             if(x>=97 && x<=122)
             {
                x-=32 ;
                c=(char)x ;
                s[i]=c ;
             }
             
        }
    }

    cout << s << endl ;    


    return 0 ;
}