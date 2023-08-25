class TimeMap {
   public:
   unordered_map <string, vector<pair<int, string>>> m;

   void set(string key, string value, int timestamp) {
      m[key].push_back({timestamp, value});
   }

   string get(string key, int timestamp) {
      string ret = "";
      vector <pair <int, string>>& v = m[key];

      int low = 0;
      int high = v.size() - 1;

      while(low <= high){
         if(v[mid].first <= timestamp)
         {
            ret = v[mid].second;
            low = mid + 1;
         }
         else
         {
            high = mid - 1;
         }
      }
      return ret;
   }
};