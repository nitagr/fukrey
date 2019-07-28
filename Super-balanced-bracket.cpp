#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c1=0,c2=0;
        int l=s.length();
        i=0;
        j=l-1;
        while(i<j){
            if(s[i]=='(')
            c1++;
            if(s[j]==')')
            c2++;
            i++;
            j--;
        }
        int min=(c1<c2)?c1:c2;
        int ans=min*2;
        cout<<ans<<"\n";
    }
}
