#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;
  while (t--)
  {
    int n,sum;
    cin>>n>>sum;
    string s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]<=sum)
        {
            sum-=a[i];
            s.push_back('1');
        }
        else s.push_back('0');
        
    }
    cout<<s<<endl;
  }
  


    return 0;
}