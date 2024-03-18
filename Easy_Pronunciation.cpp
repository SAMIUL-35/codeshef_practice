#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;
  while (t--)
  {
   int n;
   cin>>n;
   string s;
   cin>>s;
   int cnt=0;
   int max_cnt=0;
   for (int i = 0; i < n; i++)
   {
   if(s[i] != 'a' && s[i] !='e' && s[i] !='o'  && s[i] != 'i' && s[i]!='u'  )
   {
    cnt++;
    max_cnt=max(cnt,max_cnt);
   }
   else 
   {
    cnt=0;
   }
   }
   if(max_cnt<=4) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
  }
  


    return 0;
}