#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,r,c,x,y;
    cin>>n>>r>>c>>x>>y;
    string dir;
    cin>>dir;

    //code
    vector<int> row, col;

    for(int i=0;i<n;++i){
        row.push_back(x);
        col.push_back(y);
        for(int count=0;count<1;++count){
            if(dir[i]=='N') --x;
            else if(dir[i]=='S')++x;
            else if(dir[i]=='E')++y;
            else --y;
            for(int j=0;j<row.size();++j){
                if(row[j]==x and col[j]==y){
                    --count;
                    break;
                }
            }
        }
    }

    cout<<x<<' '<<y<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int _t; cin>>_t; while(_t--)
    solve();
}