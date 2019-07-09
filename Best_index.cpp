#include<bits/stdc++.h>
using namespace std;
long int ar[100005],pr[100005],ans;

int count(int x,int n){ //getting the index upto which i,i+2,i+3...is valid
// for each valid i.
int c=0,j=2;
while(x<=n){
x=x+j;
j++;
}
c=x-j+1;
return c;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n,i;
long int max=INT_MIN;
cin>>n;
for(i=1;i<=n;i++)
cin>>ar[i];

pr[1]= ar[1];
pr[0]=0;
for(i=2;i<=n;i++)
pr[i]=pr[i-1]+ar[i]; //prefix sum

for(i=1;i<=n;i++){
int idx=count(i,n);
ans=pr[idx]-pr[i-1];
if(ans>max)
max=ans;
}

cout<<max;
}
