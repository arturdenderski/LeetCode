class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> operands;
        int a, b;

        for(const string& token : tokens)
        {
            if(token == "+")
            {
                a = operands.top();
                operands.pop();
                b = operands.top();
                operands.pop();
                operands.push(a + b);
            }
            else if(token == "-")
            {
                a = operands.top();
                operands.pop();
                b = operands.top();
                operands.pop();
                operands.push(b - a);
            }
            else if(token == "*")
            {
                a = operands.top();
                operands.pop();
                b = operands.top();
                operands.pop();
                operands.push(a * b);
            }
            else if(token == "/")
            {
                a = operands.top();
                operands.pop();
                b = operands.top();
                operands.pop();
                operands.push(b / a);
            }
            else
            {
                operands.push(stoi(token));
            }
        }

        return operands.top();
    }
};