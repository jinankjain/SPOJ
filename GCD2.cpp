#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
int rem(string s,int a){
    int p = 0;
    for(int i=0;i<s.length();i++){
        p = ((s[i]-'0')+p*10)%a;
    }
    return p;
}
int main(){
    int t,a;
    cin>>t;
    string b;
    while(t--){
        cin>>a>>b;
        if(a==0) cout<<b<<endl;
        else{
            int z = rem(b,a);
            cout<<gcd(a,z)<<endl;
        }
    }
    return 0;
}
