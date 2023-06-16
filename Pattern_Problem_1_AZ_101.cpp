#include <bits/stdc++.h>
using namespace std;

void print_cell(int i, int j){
    if(i%3==0 || j%3==0) cout<<"*";
    else cout<<".";
}

void print_row(int i, int n){
    for(int j=0;j<n;++j){
        print_cell(i,j);
    }
}

void solve(){
    int x,y,n;
    cin>>x>>y;
    n=3*y+1;
    for(int i=0;i<=3*x;++i){
        print_row(i,3*y+1);
        cout<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int rand;

    int _t; cin>>_t; while(_t--)
    solve();
}