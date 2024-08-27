#include <vector>
#include <queue>
#include <utility>
using namespace std;


class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<vector<pair<int, double>>> graph(n);
        for (int i = 0; i < edges.size(); ++i) {
            int u = edges[i][0], v = edges[i][1];
            double prob = succProb[i];
            graph[u].emplace_back(v, prob);
            graph[v].emplace_back(u, prob);
        }

        vector<double> maxProb(n, 0.0);
        maxProb[start_node] = 1.0;

        priority_queue<pair<double, int>> pq;
        pq.push({1.0, start_node});

        while (!pq.empty()) {
            auto [currProb, node] = pq.top();
            pq.pop();

            if (node == end_node) {
                return currProb;
            }

            for (auto& [neighbor, prob] : graph[node]) {
                double newProb = currProb * prob;
                if (newProb > maxProb[neighbor]) {
                    maxProb[neighbor] = newProb;
                    pq.push({newProb, neighbor});
                }
            }
        }

        return 0.0;
    }
};