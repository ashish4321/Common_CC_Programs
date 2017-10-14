#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
vector <PII> graph[12345];
int parent[12345];
int dist[12345];
int visited[12345];

void dijkstra(int source,int destination, int n) {
    int i;
    for (i = 0; i < 12345; i++) {
        dist[i] = INT_MAX;
        parent[i] = -1;
    }
    priority_queue <PII, vector<PII>, greater<PII> > p;
    p.push(make_pair(0, source));
    dist[source] = 0;
    while (!p.empty()) {
        PII curr = p.top();
        p.pop();
        int currw = curr.first, currv = curr.second;
        /*if (currv == destination) {
            break;
        }*/
        if (visited[currv]) {
            continue;
        }
        visited[currv] = 1;
        for (i = 0; i < graph[currv].size(); i++) {
            if (!visited[graph[currv][i].second] && (graph[currv][i].first + currw < dist[graph[currv][i].second])) {
                dist[graph[currv][i].second] = graph[currv][i].first + currw;
                parent[graph[currv][i].second] = currv;
                p.push(make_pair(dist[graph[currv][i].second],graph[currv][i].second));
            }
        }
    }
}

int main () {
    int nodes, edges, v1, v2, weight, i, source, destination;
    cin >> nodes >> edges;
    for (i = 0; i < edges ; i++) {
        cin >> v1 >> v2 >> weight;
        graph[v1].push_back(make_pair(weight,v2));
        graph[v2].push_back(make_pair(weight,v1));
    }
    cin >> source >> destination;
    dijkstra(source, destination, nodes);
    //cout << dist[destination] << "\n";
    /*cout << "Source is: " << source << ". The shortest distance to every other vertex from here is: \n";
    for (i = 1; i <= nodes; i++) {
        cout << "Vertex: " << i << ", Distance: ";
        dist[i] != INT_MAX ? cout << dist[i] << "\n" : cout << "-1\n";
    }*/
    return 0;
}















