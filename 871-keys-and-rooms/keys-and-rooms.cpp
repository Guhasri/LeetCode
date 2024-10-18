class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int length = rooms.size();
        vector<int> visited(length, 0);
        stack<int> s;

        visited[0] = 1;
        s.push(0);

        while (!s.empty()) {
            int currentRoom = s.top();
            s.pop();            
            for (int key : rooms[currentRoom]) {
                if (!visited[key]) {
                    visited[key] = 1;
                    s.push(key);
                }
            }
        }
        for (int i = 0; i < length; i++) {
            if (!visited[i]) {
                return false;
            }
        }
        return true; 
    }
};
