#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define endl "\n" 


void solution()
{ 
   string s ;
   char d ;
   cin >> s >> d  ;
   ll n=s.length()  ;
   ll count=0 ; 

   for(ll i=0 ; i<n ; i++)
   {
      if(s[i]==d)
      {
         count++ ;
      }
   }
   ll temp=0 ;  
   ll x=0 ;
   for(ll i=n-1 ; i>=0 ; i--)
   {
      temp+=pow(10,x)*(s[i]-48);
      x++  ;
   }

   // cout << temp << endl ;

   if(count==0)
   {
      cout << 0 << endl ;
   }
   else
   {
      if(d=='0')
      {
         // converting into minimum string without 'd' 
         bool flag=true ;
         for(ll i=0 ; i<n ; i++)
         {
            if(flag==true)
            {
               if(s[i]==d)
               {
                  s[i]='1'  ;
                  flag=false ;
               }
            }
            else
            {
               s[i]='1'  ;
            }
         }

         n=s.length() ;

         // now, find the answer 
         ll num=0 ;  
         ll p=0 ;
         for(ll i=n-1 ; i>=0 ; i--)
         {
            num+=pow(10,p)*(s[i]-48);
            p++ ;
         }
         ll ans=num-temp ;
         cout << ans << endl ;
      }
      else if(d=='9')
      {
            ll pos=0 ;
            for(ll i=0 ; i<n ; i++)
            {
               if(s[i]==d)
               {
                  pos=i ;
                  break ;
               }
            }
            for(ll i=pos-1 ; i>=0 ; i--)
            {
               if(s[i]=='8')
               {
                  s[i]+=1  ;
                  s[i+1]='0' ;
               }
               else
               {
                  break ;
               }
            }
         // converting into minimum string without 'd' 
         ll num=0  ;
         int p=0   ;
         if(s[0]==d)
         {
            num=pow(10,n)  ;
            ll ans=num-temp  ;
            cout << ans << endl ;
         }
         else
         {
           
            bool flag=true ;
            for(ll i=0 ; i<n ; i++)
            {
               if(flag==true)
               {
                  if(s[i]==d)
                  {
                     s[i]='0'  ;
                     s[i-1]+=1 ;
                     flag=false ;
                  }
               }
               else
               {
                  s[i]='0'  ;
               }
            }
            for(ll i=n-1 ; i>=0 ; i--)
            {
               num+=pow(10,p)*(s[i]-48);
               p++ ;
            }
            ll ans=num-temp ;
            cout << ans << endl ;

         }
      }
      else
      {
          // converting into minimum string without 'd' 
         bool flag=true ;
         for(ll i=0 ; i<n ; i++)
         {
            if(flag==true)
            {
               if(s[i]==d)
               {
                  s[i]+=1 ;
                  flag=false ;
               }
            }
            else
            {
               s[i]='0'  ;
            }
         }
         ll num=0 ;  
         ll p=0 ;
         for(ll i=n-1 ; i>=0 ; i--)
         {
            num+=pow(10,p)*(s[i]-48);
            p++ ;
         }
         ll ans=num-temp ;
         cout << ans << endl ;
      }
   }

   
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   ll t ;
   cin >> t ;
   for (ll i = 0; i < t; i++)
   {
      solution() ;
   }


   return 0  ;
}