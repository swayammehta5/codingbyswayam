class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int k=n;
        int j=1;
        for(int i=0;i<k;i+=j){
            int cnt=0;
            while(i+cnt<k && nums[i]==nums[i+cnt]){
                cnt++;
            }
            if(cnt>2){
                int remove=cnt-2;
                //shift elements left
                for(int t=i+2;t+remove<k;t++){
                    nums[t]=nums[t+remove];
                }
                k=k-remove;
                cnt=2;
            }
            j=cnt;
        }
        return k;
    }
};