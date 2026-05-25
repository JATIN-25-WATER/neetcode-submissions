class Solution {
public:
    bool isValid(string s) {
        vector<char> v;
        for(int i=0;i<s.length();i++){
            char x = s[i];
            if(x == '[' || x == '{' || x == '('){
                v.push_back(x);
            }else if(x == ')'){
                if (v.empty()) return false;
                char y = v.back();
                v.pop_back(); 
                if(y != '(') return false;
            }else if(x == '}'){
                if (v.empty()) return false;
                char y = v.back();
                v.pop_back();
                if(y != '{') return false;
            }else if(x == ']'){
                if (v.empty()) return false;
                char y = v.back();
                v.pop_back();
                if(y != '[') return false;
            }
        }
        if(v.empty()) return true;
        else return false;
    }
};
