   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   { 
      int a1 , a2 ,a3 ;
      cin >> a1 >> a2 >> a3 ;
      int b1 , b2 ,b3 ;
      cin >> b1 >> b2 >> b3 ;
      int count1=0 , count2=0 ;
      if(a1>b1)
      {
          count1++ ;
      }
      else
      {
          count2++  ;
      }
      if(a2>b2)
      {
          count1++ ;
      }
      else
      {
          count2++  ;
      }
      if(a3>b3)
      {
          count1++ ;
      }
      else
      {
          count2++  ;
      }



      if(count1>count2)
      {
          cout << "A" << endl ;
      }
      else
      {
          cout << "B" << endl ;
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