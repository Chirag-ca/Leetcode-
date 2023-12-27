class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int>news;
        vector<bool>ans;
        int high; int n = candies.size();
        int fast = extraCandies;
        for(int i = 0; i < candies.size(); i++){
            news.push_back(candies[i]);
        }
        sort(news.begin(),news.end());
        high = news[n-1];
        for(int i = 0; i < candies.size(); i++){
            if((candies[i] + extraCandies) >= high){ans.push_back(1);}
            else (ans.push_back(0));
        }            
        return ans;
    }
};