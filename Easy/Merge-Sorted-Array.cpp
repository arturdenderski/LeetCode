class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) { 
        if(0 == m)
        {
            nums1 = nums2;
        }
        
        int n1_index = 0, n2_index = 0;

        while(n1_index < n + m  && n2_index < n)
        {
            if(nums2[n2_index] <= nums1[n1_index])
            {
                nums1.insert(nums1.begin() + n1_index, nums2[n2_index]);
                n1_index++;
                n2_index++;
            }
            else if(n1_index >= m + n2_index)
            {
                nums1.insert(nums1.begin() + n1_index, nums2[n2_index]);
                n1_index++;
                n2_index++;
            }
            else
            {
                n1_index++;
            }
        }
        
        nums1.resize(n+m);
    }
};