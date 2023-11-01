class Solution {
public:
    string defangIPaddr(string address) {
        int length = address.size();
        string ans;
        for(int i = 0; i < length; i++){
            if(address[i] == '.'){
                ans += "[.]";
            }
            else {
                ans.push_back(address[i]);
            }
        }
        return ans;
    }
};