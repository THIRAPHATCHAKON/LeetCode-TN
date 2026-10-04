class Solution {
public:
    int strStr(string haystack, string needle) {
        bool need = false;
        int index = 0;
        int first_index = 0;
        for(int i = 0; i < haystack.length(); i++){
            index = i;
            first_index = i;
            for(int j = 0; j < needle.length(); j++){
                if(haystack[index] == needle[j]){
                    need = true;
                    index++;
                }else{
                    need = false;
                    break;
                }
            }
            if(need) return first_index;
        }
        return -1;
    }
};