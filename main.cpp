#include <iostream>
#include <string>
using namespace std;

int  fun(int n)
{
  static int a =0;
  if(n>0)
  {
    
    a++;
    return fun(n-1)+a;

  }
  return 0;

}
int main() {
  cout<<fun(5);
}
