class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        if(position.size() == 0)
            return 0;

        vector<pair<int, int>> timeVector;
        for(int i = 0; i < position.size(); ++i)
            timeVector.push_back({position[i], speed[i]});

        sort(timeVector.begin(), timeVector.end());

        stack<float> time;
        for(int i = 0; i < position.size(); ++i)
            time.push((float) (target - timeVector[i].first) / (float) timeVector[i].second);
        
        int res = 1;
        float currTime = time.top();
        time.pop();

        while(!time.empty())
        {
            if(time.top() <= currTime)
            {
                time.pop();
            }
            else
            {
                currTime = time.top();
                res++;
            }
        }

        return res;
    }
};