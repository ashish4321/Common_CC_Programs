#include <bits/stdc++.h>
using namespace std;
vector <int> graph[10000];
int visited[10000];
stack <int> s;
int edges, nodes;

void topologicalSortHelper (int v) {
    visited[v] = 1;
    int j;
    for (j = 0; j < graph[v].size(); j++) {
        if (!visited[graph[v][j]]) {
            topologicalSortHelper(graph[v][j]);
        }
    }
    s.push(v);
}

void topologicalSort () {
    int i;
    for (i = 1; i <= nodes; i++) {
        if (!visited[i]) {
            topologicalSortHelper(i);
        }
    }
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n";
}

int main () {
    int i, x, y;
    cin >> nodes;
    cin >> edges;
    for (i = 1; i <= edges; i++) {
        cin >> x >> y;
        graph[x].push_back(y);
    }
    topologicalSort();
    return 0;
}
