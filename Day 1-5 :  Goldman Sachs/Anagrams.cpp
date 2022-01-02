
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
   
    map<string,vector<string>>mpp;
    for(int i = 0; i<string_list.size(); i++){
        string s = string_list[i];
        sort(s.begin(),s.end());
        mpp[s].push_back(string_list[i]);
    }
    
    vector<vector<string>> answers(mpp.size());
    int index = 0;
    for(auto x : mpp){
        auto v = x.second;
        
        for(int i =0 ; i<v.size(); i++){
            answers[index].push_back(v[i]);
        }
        index++;
    }
    return answers;
    }
};
