#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main()
{
    string s  ;
    cin >> s  ;
    int count=0 ;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]!='1' && s[i]!='4')
        {
            count++ ;
        }
    }

    if(count==0)
    {
        if(s[0]=='1')  
        {
        for(int i=1 ; i< (s.size() -1)  ; i++)
        {
            if(s[i]=='1')
            {
                if(s[i+1]=='1' || s[i+1]=='4')
                {
                    continue ;
                }
                else
                {
                    cout << "NO" << endl  ;
                    return 0 ;
                }
            }
            else if(s[i]=='4')
            {
                if( s[i-1]=='1' && (s[i+1]=='1' || s[i+1]=='4') )
                {
                    continue ;
                }
                else if( s[i-1]=='4' && (s[i+1]=='1') )
                {
                    continue ;
                }
                else
                {
                    cout << "NO" << endl  ;
                    return 0 ;
                }
            }
            else
            {
                cout << "NO" << endl  ;  // if the digit is not 1 or 4 
                return 0 ;
            }
        }

            cout << "YES" << endl ; //  means , the number is a magic number

        }     
        else // s[0]=='1' must be  a necessary condition
        {
            cout << "NO" << endl  ;
        }
    }
    else
    {
        cout << "NO" << endl  ;
    }
    
 
    return 0  ;
}
