vector<int> findMaxTen(vector<int> nums) {
    priority_queue<int, vector<int>, greater<int>> pq;

    for(auto i: nums) {
        if(pq.size() < 10) pq.push(i);
        else {
            if(i < pq.top()) {
                pq.pop();
                pq.push(i);
            }
        }
    }
    vector<int> ans;
    while(!pq.empty()) {
        ans.push(pq.top());
        pq.pop();
    }
    return ans;
}
