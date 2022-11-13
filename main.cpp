#include <iostream>
using namespace std;
int fun(int n,  int k)
{
  if(k>=n)
  {
    return k;
  }
  else if(k<n)
  {
    k++;
    fun(n-k,k);
  }
}
int main() {
  int t,n;
  cin>>t;
  while (t>0)
  {
    cin>>n;
    static int k=0;
    cout<<fun(n,k)<<endl; 
    t--;
  }
  
}
