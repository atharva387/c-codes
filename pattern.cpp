#include<iostream>
using namespace std;

void printPattern(int n)
{
    for (int i =1;i<=n; i++)
    {
        for(int k=0;k<n-i;k++){
            cout<<" ";
        }
      for (int j=1;j<=i;j++)
      {
          cout<<j<<" ";
      }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int k=0;k<n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main ()
{
    
    printPattern(12);
    cout<<endl<<endl;
    printPattern(3);
    cout<<endl<<endl;
    return 0;
}