class FindSumPairs {
public:
    vector<int> nums1, nums2;
    unordered_map<int, int> freq;

    FindSumPairs(vector<int>& n1, vector<int>& n2) {
        nums1 = n1;
        nums2 = n2;
        for (int i = 0; i < nums2.size(); i++) {
            freq[nums2[i]]++;
        }
    }

    void add(int index, int val) {
        int oldVal = nums2[index];
        freq[oldVal]--;
        if (freq[oldVal] == 0) {
            freq.erase(oldVal);
        }
        nums2[index] += val;
        freq[nums2[index]]++;
    }

    int count(int tot) {
        int result = 0;
        for (int i = 0; i < nums1.size(); i++) {
            int target = tot - nums1[i];
            if (freq.find(target) != freq.end()) {
                result += freq[target];
            }
        }
        return result;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */