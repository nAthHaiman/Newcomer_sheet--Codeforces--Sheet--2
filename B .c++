

#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0){
    cout<<i<<endl;
        }
    }
    if(i%2!=0){
        cout<<"-1";
    }
        return 0;
    }
