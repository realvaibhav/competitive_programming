#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n , k , count=0  , t ; 
	scanf("%d%d",&n,&k);
	for (int i=1 ; i<=n ; i++)
	{
	scanf("%d",&t) ;
		if (t%k==0)
		{
             count++ ;
		}
	}
	  printf("%d\n",count);
}
