class Solution {
public:
    vector<int> minimumTime(int n, vector<vector<int>>& edges, vector<int>& disappear) {
        unordered_map<int, vector<pair<int, int>>> graph;
        for (auto& edge : edges) {
            graph[edge[0]].push_back({edge[1], edge[2]});
            graph[edge[1]].push_back({edge[0], edge[2]});
        }

        // Initialize answer array with -1 (unreachable by default)
        vector<int> answer(n, -1);

        // Priority queue to store nodes with their current minimum time to reach
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        // Start from node 0 with time 0
        pq.push({0, 0});

        // Dijkstra's algorithm
        while (!pq.empty()) {
            auto [time, node] = pq.top();
            pq.pop();

            // If the node has already been visited or disappeared, continue
            if (answer[node] != -1) continue;

            // Update answer for current node
            answer[node] = time;

            // Traverse neighbors of the current node
            for (auto& neighbor : graph[node]) {
                int nextNode = neighbor.first;
                int nextTime = time + neighbor.second;

                // If the neighbor has already been visited or disappeared, continue
                if (answer[nextNode] != -1) continue;

                // If the neighbor is not disappeared yet, add it to the priority queue
                if (nextTime < disappear[nextNode]) {
                    pq.push({nextTime, nextNode});
                }
            }
        }

        return answer;
    }
};
