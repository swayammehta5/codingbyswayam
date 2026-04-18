class Solution {
public:
    int splitNum(int num) {
        int n1=num;
        // sort(n.begin(),n.end());
        vector<int>first;
        vector<int>second;
        vector<int>nums;
        int n=0;
        while(n1!=0){
            int digit=n1%10;
            nums.push_back(digit);
            n1=n1/10;
            n++;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i%2==0){
                first.push_back(nums[i]);
            }else{
                second.push_back(nums[i]);
            }
        }
        sort(first.begin(),first.end());
        sort(second.begin(),second.end());
        int flen=first.size();
        int slen=second.size();
        int fsum=0;
        int ssum=0;
        for(int i=0;i<flen;i++){
            fsum=fsum*10 +first[i];
        }
        for(int i=0;i<slen;i++){
            ssum=ssum*10 +second[i];
        }
        int ans=fsum+ssum;
        return ans;
    }
};