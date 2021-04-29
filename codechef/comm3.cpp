    #include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000000
#define endl "\n" 

int check(double r , double x1 , double y1 , double x2 , double y2) 
{
    double dis=0 ;
    dis=sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)) ;
    if (dis<=r)
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
    
    

}



int solution()
{
   
   double r , x1 , y1 , x2 ,y2 , x3 , y3 , count=0   ;
   int ans=0 ;
   cin >> r ;
   cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;

   ans=check( r , x1 , y1 , x2 ,y2 ) ;
   if (ans==1)
   {
       count++ ;
   }
   ans=check( r , x2 , y2 , x3 ,y3 ) ;
   if (ans==1)
   {
       count++ ;
   }
   ans=check( r , x1 , y1 , x3 ,y3 ) ;
   if (ans==1)
   {
       count++ ;
   }
   
   if (count>=2)
   {
       cout << "yes" << endl ;
   }
   else
   {
       cout << "no" << endl ;
   }
   
  
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