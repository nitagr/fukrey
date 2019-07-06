#include<bits/stdc++.h>
using namespace std;
int counting(string s,string t){
    int l1=s.length(),i,j,c=0;
    int l2=t.length();
    for(i=0;i<=l1-l2;i++){
        
        for(j=0;j<l2;j++)
        {
            if(s[i+j]!=t[j])
            break;
        }
        if(j==l2){
        c++;
        j=0;
        }
    }
    return c;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s,s1,s2;
        cin>>s;
        int c1=0,c2=0;
        s1="SUVO";
        s2="SUVOJIT";
        c1=counting(s,s1);
        c2=counting( s,s2);
        
        cout<<"SUVO = "<<abs(c1-c2)<<","<<" "<<"SUVOJIT = "<<c2<<"\n";
}
}
