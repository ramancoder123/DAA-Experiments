class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
         map<int, int> freqMap;
        
        for (int element : arr) {
            freqMap[element]++;
        }
        
        vector<vector<int>> result;
        
        for (auto const& pair : freqMap) {
            
            result.push_back({pair.first, pair.second});
        }

        return result;
    }
};