class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> output;
        vector<int> path;
        dfs(graph, 0, path, output);
        return output;
    }

    void dfs(vector<vector<int>>& graph, int node, vector<int> path, vector<vector<int>>& output)
    {
        path.push_back(node);
        
        if(node == graph.size() - 1)
        {
            output.push_back(path);
        }

        for(int next : graph[node])
        {
            dfs(graph, next, path, output);
        }
    }
};