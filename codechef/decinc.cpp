#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n ;
    if(n%4==0)
    {
        n++ ;
        cout << n << "\n" ;
    }
    else
    {
        n-- ;
         cout << n << "\n" ;
    }
	return 0;
}
