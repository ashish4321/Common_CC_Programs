#include <bits/stdc++.h>
using namespace std;
vector <int> graph[10000];
int visited[10000];
int level[10000];

void bfs (int v) {
    queue <int> q;
    q.push(v);
    level[v] = 0;
    visited[v] = 1;
    int adj, j;
    while (!q.empty()) {
        adj = q.front();
        q.pop();
        for (j = 0; j < graph[adj].size(); j++) {
            if (!visited[graph[adj][j]]) {
                level[graph[adj][j]] = level[adj] + 1;
                visited[graph[adj][j]] = 1;
                q.push(graph[adj][j]);
            }
        }
    }
}

int main () {
    int i, x, y, edges, nodes;
    cin >> nodes;
    cin >> edges;
    for (i = 1; i <= edges; i++) {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    bfs(1);
    for (i = 1; i <= nodes; i++) {
        cout << i << ": " << level[i] << "\n";
    }
    return 0;
}
