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

// Best Time to buy and sell stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buy=prices[0];
        for(int i=1;i<prices.size();i++){
            profit=max(profit,prices[i]-buy);
            buy=min(buy,prices[i]);
        }
        return profit;
    }
};

// Contains Duplicates

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int i = 0; i < nums.size(); i++){
            if(s.find(nums[i]) == s.end()){
                s.insert(nums[i]);
            }else{
                return true;
            }
        }
        return false;
    }
};

