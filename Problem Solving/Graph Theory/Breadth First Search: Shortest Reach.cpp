#include <bits/stdc++.h>

using namespace std;

int n,m,q,s;
vector<int> adj[1001];
int parent[1001];
bool visited[1001];

void bfs(int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(auto x : adj[u]) {
            if(!visited[x]) {
                parent[x] = u;
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

int countPath(int s, int t) {
    if(!visited[t])
        return -1;
    
    int u = parent[t], ans = 1;
    while(u != s) {
        t = u;
        u = parent[t];
        ans++;
    }
    
    return ans * 6;
}

void solve() {
    memset(adj, 0, sizeof(adj));
    memset(visited, false, sizeof(visited));
    memset(parent, 0, sizeof(parent));
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin >> s;
    bfs(s);
    for(int i = 1; i <= n; i++) {
        if(i == s) continue;
        else {
            cout << countPath(s, i) << " ";
        }
    }
    cout << endl;
}

int main() {
    
    cin >> q;
    while(q--)
        solve();
    
    return 0;
}
