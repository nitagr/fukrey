#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,k,max,temp;
    cin>>n>>m>>k;
    int c=0;
    max=m;
    temp=k;
    while(n>=0){
        n=n-max; 
        c++;
        if(temp==0){
        max=m;
        temp=k;
        }
        else{
        temp--;
        max--;
        }
    }
    
    cout<<c;
}
