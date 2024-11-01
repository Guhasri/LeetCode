class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        unordered_set<int> passingcities;
        unordered_map<int, vector<int>> graph;
        for(int i = 0; i < connections.size(); i++) {
            graph[connections[i][0]].push_back(connections[i][1]);
        }

        unordered_map<int, vector<int>> cities_passed;
        for(int i = 0; i < connections.size(); i++) {
            cities_passed[connections[i][1]].push_back(connections[i][0]);
        }

        queue<int> q;
        q.push(0);
        while(!q.empty()) {
            int temp = q.front();
            q.pop();
            passingcities.insert(temp);
            int i = 0;
            while(i < cities_passed[temp].size()) {
                if(passingcities.find(cities_passed[temp][i]) == passingcities.end()) {
                    q.push(cities_passed[temp][i]);
                }
                i++;
            }
        }
        if(passingcities.size() == n) return 0;

        queue<int> map;
        for(int num : passingcities) {
            map.push(num);
        }
        int count = 0;
        while(!map.empty()) {
            int temp = map.front();
            map.pop();
            int i = 0;
            for(int num : cities_passed[temp]) {
                if(passingcities.find(num) == passingcities.end()) {
                    passingcities.insert(num);
                    cout << "added " << num << " due to  " << temp << endl;
                    map.push(num);
                }
            }
            while(i < graph[temp].size()) {
                if(passingcities.find(graph[temp][i]) == passingcities.end()) {
                    passingcities.insert(graph[temp][i]);
                    count++;
                    cout << "edge changed for " << temp << "  " << graph[temp][i] << endl;
                    map.push(graph[temp][i]);
                    cout << "passing cities " << graph[temp][i] << endl;
                }
                i++;
            }
        }
        return count;
    }
};