#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int i;
    
    for(i=n-2;i>=1;i--){
        int t=__gcd(n,i);
        
        if(t==1){
        cout<<i;
        break;
        }
        }
}
