// Blind-75

/*------------------------------------------ Array -----------------------------------------------------*/


// Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ump;
        vector<int> result;

        for(int i = 0; i < nums.size(); i++){
            int required = target-nums[i];
            if(ump.find(required) != ump.end()){
                result.push_back(i);
                result.push_back(ump[required]);
                break;
            }else{
                ump[nums[i]] = i;
            }
        }
        return result;
    }
};

