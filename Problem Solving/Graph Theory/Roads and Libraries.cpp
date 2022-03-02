const int MN = 1e5+2;

vector<int> adj[MN];
bool visited[MN];

void dfs(int i) {
    visited[i] = true;
    for(auto x : adj[i]) {
        if(!visited[x])
            dfs(x);
    }
}

// Complete the roadsAndLibraries function below.
long roadsAndLibraries(int n, int c_lib, int c_road, vector<vector<int>> cities) {
    
    memset(adj, 0, sizeof(adj));
    memset(visited, false, sizeof(visited));
    
    if (c_lib < c_road) return long(n)*long(c_lib);
    
    for(int i=0; i<n+1; ++i) {
        visited[i] = false;
    }
    
    long groups = 0;

    for (int i = 0; i < cities.size(); i++) {
        adj[cities[i][0]].push_back(cities[i][1]);
        adj[cities[i][1]].push_back(cities[i][0]);
    }
    
    for (int i = 1; i < n+1; i++) {
        if(!visited[i]) {
            dfs(i);
            groups++;
        }
    }

    long ans = min((n-groups)*c_road + groups*c_lib, long(c_lib)*long(n));
    return ans;
}
