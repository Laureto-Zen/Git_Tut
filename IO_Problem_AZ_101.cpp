/*
X   Y.Z
ans (Z+X).(Y+X)
*/
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,y,z;
    string m;
    cin>>n>>m;
    int rand;

    int i=m.find('.');
    string m_z= m.substr(i+1);
    string m_y=m.substr(0,i);
    y=stoi(m_y);
    z=stoi(m_z);
    y+=n;
    z+=n;

    string ans = to_string(z);
    ans+= ".";
    ans+=to_string(y);

    cout<<ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int _t; cin>>_t; while(_t--)
    solve();
}