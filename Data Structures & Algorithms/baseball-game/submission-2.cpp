class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> vec;
        for(int i=0;i<operations.size();i++){
            string ops = operations[i];
            if(ops == "+"){
                vec.push_back(vec[vec.size()-1]+vec[vec.size()-2]);
            }else if(ops == "C"){
                vec.pop_back();
            }else if(ops == "D"){
                vec.push_back(2*vec[vec.size()-1]);
            }else{
                vec.push_back(stoi(ops));
            }
        }
        int sum=0;
        for(int i=0;i<vec.size();i++){
            sum+=vec[i];
        }
        return sum;
    }
};