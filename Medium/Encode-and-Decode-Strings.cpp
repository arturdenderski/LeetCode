class Solution {
public:

    string encode(vector<string> &strs) {
        string s;
        for(string str : strs)
        {
            s += to_string(str.length()) + "~" + str;
        }
        return s;
    }

    vector<string> decode(string &str) {
        vector<string> s;
                
        size_t i = 0;

        while(i < str.length())
        {
            size_t found = str.find("~", i);
            if (found != string::npos)
            {
                int len = stoi(str.substr(i, found - i));
                s.push_back(str.substr(found + 1, len));
                i += to_string(len).length() + 1 + len;
            }
            else
            {
                break;
            }
        }

        return s;
    }
};