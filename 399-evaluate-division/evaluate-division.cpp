

class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& s, vector<double>& v, vector<vector<string>>& qu) {
        int n = s.size();
        unordered_map<string, vector<pair<string, double>>> adj;
        unordered_set<string> seen;
        for (int jp = 0; jp < n; ++jp) {
            string t = s[jp][0], u = s[jp][1];
            adj[t].push_back({u, v[jp]});
            adj[u].push_back({t, 1.0 / v[jp]});
            seen.insert(t);
            seen.insert(u);
        }

        vector<double> ans;
        for (auto& it : qu) {
            string st = it[0], en = it[1];
            
            if (seen.find(st) == seen.end() || seen.find(en) == seen.end()) {
                ans.push_back(-1);
                continue;
            }

            queue<pair<string, double>> q;
            unordered_set<string> vis;
            q.push({st, 1.0});
            vis.insert(st);
            bool found = false;
            double mainAns = -1;

            while (!q.empty()) {
                auto [node, val] = q.front();
                q.pop();

                if (node == en) {
                    mainAns = val;
                    found = true;
                    break;
                }

                for (auto& [neighbor, weight] : adj[node]) {
                    if (vis.find(neighbor) == vis.end()) {
                        vis.insert(neighbor);
                        q.push({neighbor, val * weight});
                    }
                }
            }

            ans.push_back(found ? mainAns : -1);
        }

        return ans;
    }
};