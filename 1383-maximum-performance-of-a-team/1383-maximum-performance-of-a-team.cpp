class Solution {
public:
	int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
		int d = pow(10, 9) + 7;
		priority_queue<vector<long long>> q;
		for(int i = 0; i < n; i ++) q.push({efficiency[i], speed[i]});
		multiset<long long> se;
		long long sum = 0, m = q.top()[0], cur = q.top()[1];
		long long sol = (q.top()[0] * q.top()[1]);
		q.pop();
		while(q.size() > 0) {
			m = q.top()[0];
			if(se.size() < k - 1) {
				sum += cur;
				se.insert(cur);
			} else if(se.size() > 0) {
				auto it = se.begin();
				if(cur > (*it)) {
					sum = sum - (*it) + cur;
					se.erase(it);
					se.insert(cur);
				}
			}
			cur = q.top()[1];
			sol = max(sol, (sum + cur) * m);
			q.pop();
		}
		sol %= d;
		return sol;
	}
};