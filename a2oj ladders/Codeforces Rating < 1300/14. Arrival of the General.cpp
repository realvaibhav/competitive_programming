#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n  , ans=0 , res=0 ;
    cin >> n ;
    int arr[n] , temp[n] , arr2[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i]  ;
        temp[i]=arr[i] ;
        arr2[i]=arr[i] ;
    }
    sort(temp,temp+n) ;
    int mn=temp[0] ; 
    int mx=temp[n-1] ;
    int pos1=0 , pos2=0 , flag=0  ;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==mx && flag!=1)
        {
            pos1=i ;
            flag=1 ;
        }

        if(arr[i]==mn)
        {
            pos2=i ;
        }
    }
    
    int x1=pos1 , x2=pos2  ;
    int count1=0 , count2=0 , count3=0 , count4=0;
    if(pos2<pos1)
    {
        pos2++ ;
    }
    if(x2<x1)
    {
        x1--  ;
    }

    while(true)
    {
        if(arr[0]!=mx)
        {
            swap(arr[pos1],arr[pos1-1]) ;
            pos1-- ;
            count1++  ; 
        }
        else
        {
            break ;
        }
    }
    
    
    while(true)
    {
        if(arr[n-1]!=mn)
        {
            swap(arr[pos2],arr[pos2+1]) ;
            pos2++ ;
            count2++  ; 
        }
        else
        {
            break ;
        }
    }
    
    ans=count1+count2   ; 

    // cout << ans << endl ;

    while(true)
    {
        if(arr2[n-1]!=mn)
        {
            swap(arr2[x2],arr2[x2+1]) ;
            x2++ ;
            count3++  ; 
        }
        else
        {
            break ;
        }
    }
    
    while(true)
    {
        if(arr2[0]!=mx)
        {
            swap(arr2[x1],arr2[x1-1]) ;
            x1-- ;
            count4++  ; 
        }
        else
        {
            break ;
        }
    }
    
    res=count3+count4  ; 
    
    // cout << ans << endl ;

    cout << min(ans,res) << endl  ;   // main line 

     

    return 0 ;
}
