    #include<bits/stdc++.h>
    using namespace std ;
    typedef long long int ll ;
    #define MAX 1000000000
    #define endl "\n" 
    // for(int i=0 ; i<n ; i++)
    // for(auto x : vec )
    // vector<int> vec 
    // set<int> s 

    void solution()
    { 
    int a , b , c , d  ;
    cin >> a >> b >> c >> d  ;
    int temp=d ;
    int count=0 ;
    if(d>=a+b+c)
    {
        cout << 1 << endl ;
    }
    else
    {
        d=d-c ;
        count++ ;
        if(d>=a)
        {
            cout << 2 << endl  ;
        }
        else
        {
            if(temp>=a+b)
            {
                cout << 2 << endl  ;
            }
            else
            {
                cout << 3 << endl  ;
            }
        }
    }
    
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