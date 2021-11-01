 #include<bits/stdc++.h>
using namespace std  ;

int main()
{
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i] ;
    }

    int min_num=arr[0]  ;
    int max_num=arr[0]  ;

    int temp1=0 ;
    int temp2=0 ;

    if(n%2==0)
    {
        for(int i=0 ; i<n ; i=i+2)
        {
            temp1=min(arr[i],arr[i+1])    ;
            temp2=max(arr[i],arr[i+1])    ; 
            
            min_num=min(min_num,temp1)    ;
            max_num=max(max_num,temp2)    ;    
        }
    }
    else
    {
        for(int i=1 ; i<n ; i=i+2)
        {
            temp1=min(arr[i],arr[i+1])    ;
            temp2=max(arr[i],arr[i+1])    ;

            min_num=min(min_num,temp1)    ;
            max_num=max(max_num,temp2)    ;
        }
    }

    cout << "The minimum element is: " << min_num << endl ;
    cout << "The maximum element is: " << max_num << endl ;


    return 0  ;
}