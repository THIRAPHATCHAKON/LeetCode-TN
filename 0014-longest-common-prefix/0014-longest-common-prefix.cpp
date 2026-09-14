class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";

        for (int i = 0 ; i < strs[0].length() ; i++){
            char current = strs[0][i];
            bool same = true;
            for(int j = 1 ; j < strs.size() ; j++){
                if (current != strs[j][i]) {same = false;
                };
        }
        if(same){
            result += current;
        }else{
            break;
        }
    }
    return result;
    };
};