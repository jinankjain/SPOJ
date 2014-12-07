#include<bits/stdc++.h>
using namespace std;
int n;
vector<int > v[1001];
bool visited[1001];
void dfs(int a){
    vector<int>::iterator it;
    cout<<a<<" ";
    visited[a] = true;
    for(it= v[a].begin();it!=v[a].end();it++){
        if(!visited[*it]){
            dfs(*it);
        }
    }
}
void bfs(int a){
    memset(visited,false,sizeof(visited));
    queue<int> Q;
    Q.push(a);
    visited[a] = true;
    while(!Q.empty()){
        int temp = Q.front();
        Q.pop();
        cout<<temp<<" ";
        vector<int>::iterator it;
        for(it = v[temp].begin();it!=v[temp].end();it++){
            if(!visited[*it])
			{
				visited[*it]=true;
				Q.push(*it);
			}
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    int t,a,b,q;
    cin>>t;
    int z = 1;
    while(t--){
        cout<<"graph "<<z<<endl;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            v[a].clear();
            while(b--){
                cin>>q;
                v[a].push_back(q);
            }
        }
        while(true){
            cin>>a>>b;
            if(a==0 && b==0) break;
            if(b){
                bfs(a);
                cout<<endl;
            }
            else {
                memset(visited,false,sizeof(visited));
                dfs(a);
                cout<<endl;
            }
        }
        z++;
    }
    return 0;
}
