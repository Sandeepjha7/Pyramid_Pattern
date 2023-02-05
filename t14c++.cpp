//Q(1.)
/*        1
         121
        12321
       1234321
*/
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int i=1;
  while (i<=n)
  {
    int k=1;
    while(k<=n-i)
    {
      cout<<" ";
      k++;
    }
    int j=1;
    int count=1;
    while(j<=i)
    {
      cout<<count;
      count++;
      j++;
    }
    int start=i-1;
    while (start)
    {
        cout<<start;
        start--;
    }
    cout<<endl;
    i++;
  }
}   