#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        int n;
        cin>>n;
        if(n==-1) {
            cout<<"Bye";
            break;
        }
        if(n%5==0) cout<<n/5;
        else cout<<"-1";
    }
return 0;
}
