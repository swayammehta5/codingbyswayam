class Solution {
public:
    bool isHappy(int n) {
      int num=n;
      unordered_set<int>st;
      while(num!=1){
        if(st.count(num)) return false;
        st.insert(num);
        int sum=0;
        while(num!=0){
            int digit=num%10;
            sum += digit*digit;
            num=num/10;
        }
        num=sum;
      }  
      return true;
    }
};