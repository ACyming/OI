#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

bool bfs(int start, int K) {
	queue<int> q;
	q.push(start);
	visited[start] = true;
	int count = 1;
	
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		
		for (int i = 1; i < graph[node].size(); i++) {
			int neighbor = graph[node][i];
			if (!visited[neighbor]) {
				visited[neighbor] = true;
				q.push(neighbor);
				count++;
			}
		}
	}
	
	return count == K;
}

int main() {
	int K, N, M;
	cin >> K >> N >> M;
	
	graph.resize(N + 1);
	visited.resize(N + 1, false);
	
	for (int i = 0; i < K; i++) {
		int troop;
		cin >> troop;
		graph[troop].push_back(troop);
	}
	
	for (int i = 0; i < M; i++) {
		int X, Y;
		cin >> X >> Y;
		graph[X].push_back(Y);
	}
	
	int count = 0;
	for (int i = 1; i <= N; i++) {
		fill(visited.begin(), visited.end(), false);
		if (bfs(i, K)) {
			count++;
		}
	}
	
	cout << count << endl;
	return 0;
}
