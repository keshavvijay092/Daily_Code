class Solution {
public:
   
        int leastInterval(vector<char>& tasks, int n) {
    // Map to store frequency of each task
    unordered_map<char, int> freq;
    for (char task : tasks) {
        freq[task]++;
    }
    
    // Max heap to pick tasks with the highest frequency first
    priority_queue<int> maxHeap;
    for (auto& pair : freq) {
        maxHeap.push(pair.second);
    }
    
    int intervals = 0;
    
    while (!maxHeap.empty()) {
        // Temporary vector to store tasks for this interval
        vector<int> temp;
        
        for (int i = 0; i < n + 1; i++) {
            if (!maxHeap.empty()) {
                temp.push_back(maxHeap.top() - 1);
                maxHeap.pop();
            }
        }
        
        for (int task : temp) {
            if (task > 0) {
                maxHeap.push(task);
            }
        }
        
        // If heap is empty, this is the last cycle
        intervals += maxHeap.empty() ? temp.size() : n + 1;
    }
    
    return intervals;

    }
};