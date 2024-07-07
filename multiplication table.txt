#include<iostream>
using namespace std;
int main()
{
    int n, range,result=1;
    cout<<"enter number";
    cin>>n;
    cout<<"enter ranage";
    cin>>range;
    cout<<n<<endl;
    for(int i=1;i<=range;i++)
    {
        result=n*i;
        cout<<result<<endl;
        continue;
    }
    
    return 0;
}