   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 

   ll calculate(ll a1 , ll a2 , ll a3 , ll b1 , ll b2 ,ll b3 , ll c1 , ll c2 , ll c3 )
   {
       ll ans=0 , count=0  ;
       if(a2-a1==a3-a2)
       {
           count++ ;
       }
       if(b2-b1==b3-b2)
       {
           count++ ;
       }
       if(c2-c1==c3-c2)
       {
           count++ ;
       }
       if(b1-a1==c1-b1)
       {
           count++ ;
       }
       if(b2-a2==c2-b2)
       {
           count++ ;
       }
       if(b3-a3==c3-b3)
       {
           count++ ;
       }
       if(b2-a1==c3-b2)
       {
           count++ ;
       }
       if(b2-c1==a3-b2)
       {
           count++ ;
       }

       ans=count  ;
       return ans ;
   }


   ll solution(int i)
   { 
       ll a1 , a2 , a3 ;
       ll b1 , b2 , b3 ;
       ll c1 , c2 , c3 ;
       ll res=0 , ans=0  ;
       vector<ll> vec  ;
       
       cin >> a1 >> a2 >> a3  ;
       cin >> b1 >> b3         ;
       cin >> c1 >> c2 >> c3   ;
       
       b2=(a2+c2)/2 ;
       res=calculate(a1 , a2 , a3 , b1 , b2 , b3 , c1 , c2 , c3 )  ;
       vec.push_back(res) ;
       b2=(b1+b3)/2 ;
       res=calculate(a1 , a2 , a3 , b1 , b2 , b3 , c1 , c2 , c3 )  ;
       vec.push_back(res) ;
       b2=(a1+c3)/2 ;
       res=calculate(a1 , a2 , a3 , b1 , b2 , b3 , c1 , c2 , c3 )  ;
       vec.push_back(res) ;
       b2=(a3+c1)/2 ;
       res=calculate(a1 , a2 , a3 , b1 , b2 , b3 , c1 , c2 , c3 )  ;
       vec.push_back(res) ;

       sort(vec.begin() , vec.end()) ;

       ans=vec[vec.size()-1] ;   

       cout << "Case #" << i+1 << ": " << ans << endl ;

       return 0  ;
   }


   int main()
   {
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      ll t ;
      cin >> t ;
      for (ll i = 0; i < t; i++)
      {
         solution(i) ;
      }

      return 0  ;
   }