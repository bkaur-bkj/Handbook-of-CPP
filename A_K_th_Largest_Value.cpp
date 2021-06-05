#include <iostream>
#include<bits/stdc++.h>
#define ll long long 

#define file_io  freopen("input.txt","r+",stdin) ;freopen("output.txt" , "w+" , stdout);
                   
using namespace std;
int main()
{ //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    int t;
    t=1;
    while(t--)
    { ll n,i,j,w,h,count1=0,sum=0,total,k,T,breaks=0,q;
     string s;
     cin>>n>>q;
     ll a[n];
     for(i=0;i<n;i++)
     {
       cin>>a[i];
       if(a[i]==1)
        count1++;
     }
     for(i=0;i<q;i++)
     {
         cin>>T;
         if(T==1)
         {
           //a=1-a;
           cin>>k;
           if(a[k-1]==0)
           {
               count1++;
           }
           else
           {
               count1--;
           }

         }
         else
         {
        //print k th number;
           cin>>k;
           if(k<=count1)
           {
               cout<<1<<endl;
           }
           else
           {
               cout<<0<<endl;
           }
         }
     }
     
      
    }
}