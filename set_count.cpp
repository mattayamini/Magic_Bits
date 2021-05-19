#include<bits/Stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int c=0;
    while(num!=0)
    {
        if(num&1==1)
        {
            c++;
        }
        num=num>>1;
    }
    cout<<c;
    return 0;
}
