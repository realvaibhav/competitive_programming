#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 

int main()
{
    int count=0, flag=0 ;
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl ;
        fflush(stdout) ;
        string s ;
        getline(cin,s) ;
        if (s=="no")
        {
            count++ ;
        }
        if (s=="cool"||s=="not bad"||s=="don't touch me!"||s=="great"||s=="don't think so")
        {
            flag=1 ;
            break ;
        }
        if (s=="terrible"||s=="worse"||s=="go die in a hole"||s=="are you serious"||s=="no way")
        {
            flag=0 ;
            break ;
        }
        if (count>3)
        {
            flag=1 ;
            break;
        }
         
        
    }
    if (flag==1)
    {
        cout << "normal" << endl ;
    }
    else
    {
        cout << "grumpy" << endl ;
    }
    
    

    
    return 0;
}