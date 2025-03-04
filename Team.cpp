#include<iostream>
using namespace std;
int main()
{
    int cnt=0,a,b,c,n;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>a>>b>>c;
        int sum = a+b+c;
    if(sum>=2){
        cnt++;
    }

    }

    cout<<cnt;
    return 0;
}
