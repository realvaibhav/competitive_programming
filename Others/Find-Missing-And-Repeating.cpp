#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    
public:

    int *findTwoElement(int *arr, int n) 
    {
        int ans=0 , res=0 ;
        int *sol=new int[2] ;
        
      sort(arr,arr+n) ;
      for(int i=0 ; i<n-1 ; i++) 
      {
        if(arr[i]==arr[i+1])  // for repeating element
        {
            ans=arr[i] ;
            break ;
        }
      }
      for(int i=0 ; i<n ; i++)
      {
        if (arr[abs((arr[i]) - 1)] > 0)  // for missing element 
        {
            arr[abs((arr[i]) - 1)] = -arr[abs((arr[i]) - 1)]; 
        }
      }
      for(int i=0 ; i<n ; i++)
      {
          if(arr[i]>0)
          {
            res=i+1 ;
            break ;
          }
      }
      
      sol[0]=ans ; // repeating element 
      sol[1]=res ; // missing element 
      
      return sol ;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }

    
    return 0;

}  // } Driver Code Ends