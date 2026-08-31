class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int, char>> pq;
        unordered_map<char, int> maps;
        string ans = "";
        for (char c : s) {
            maps[c]++;
        }
        for (auto& it : maps) {
            pq.push({it.second, it.first});
        }
        while (!pq.empty()) {
            auto [freq, ch] = pq.top();
            pq.pop();
            ans.append(freq, ch);
        }
        return ans;
    }
};