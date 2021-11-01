    #include<bits/stdc++.h>
    using namespace std ;
    typedef long long int ll ;
    #define MAX 1000000000
    #define endl "\n" 


    int solution()
    { 
        int n ;
        cin >> n ;
        int arr[n] ;
        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i]  ;
        }
        int k ;
        cin >> k ;
        int res=arr[k-1] ;
        sort(arr,arr+n) ;
        int ans=0 ;
        for(int i=0 ; i<n ; i++)
        {
            if(arr[i]==res)
            {
                ans=i+1 ;
                break ;
            }
        }
        cout << ans << endl ;


        return 0  ;
    }


    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t ;
        cin >> t ;
        for (int i = 0; i < t; i++)
        {
            solution() ;
        }

        return 0  ;
    }