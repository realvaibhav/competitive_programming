#include <iostream>
#include <iomanip> 
using namespace std;

int main() 
{
    int a ;
    float b ;
    scanf("%d",&a) ;
    scanf("%f",&b) ;
    if(b>=(a+.50))
    {
        if(a%5==0)
        {
            printf("%.2f\n",b - a - .50);
        }
        else
        {
            printf("%.2f\n",b);
        }
   
    }
    else
        {
            printf("%.2f\n",b);
        }
    
    
	return 0;
}
