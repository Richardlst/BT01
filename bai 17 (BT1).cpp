#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%400==0) cout<<"true";
    else if (n%4==0 && n%100 !=0) cout<<"true";
    else cout<<"false";
return 0;
}
