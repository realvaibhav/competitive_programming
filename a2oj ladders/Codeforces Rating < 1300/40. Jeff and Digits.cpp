    #include <bits/stdc++.h>
    using namespace std;
    typedef long long int ll ;

    int main()
    {
        int n  ;
        cin >> n ;
        int arr[n] ;
        int zero=0 , five=0 ;
        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i] ;
            if(arr[i]==0)
            {
                zero++ ;
            }
            else
            {
                five++ ;
            }
        }
        if(zero==0)
        {
            cout << -1 << endl  ;
        }
        else
        {
            int temp=five/9  ;
            if(temp>=1)           // a number is divisible by 9 
            {                     // only when sum of its digits  
                temp*=9  ;        // is divisible by 9  

                for(int i=0 ; i<temp ; i++)  
                {
                    cout << 5 ;
                }
                for(int i=0 ; i<zero ; i++)
                {
                    cout << 0 ;
                }
                cout << endl  ;
                
            }
            else
            {
                cout << 0 << endl ;  
            }
        }

        

        return 0  ;
    }
