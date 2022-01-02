//sliding window

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
         int start = 0;
        long prod = 1;
        int count =0; 
        for(int end =0; end< a.size(); end++){
            prod *= a[end];
    
           while(prod >= k && start < a.size()){
               prod = prod/a[start];
                start++;
              }
           if(prod < k)
            count += end - start +1;
      }
    return count;
    }
};
