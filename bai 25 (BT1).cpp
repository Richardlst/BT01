#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6];
    for(int i=0 ; i<5; i++) cin>>a[i];
    for(int i=0; i<5; i++)
    {
        for(int j=4; j>i; j--)
        {
            if(a[j]>a[j-1]) swap(a[j], a[j-1]);
        }
    }
    cout<<a[2];
    return 0;
}
