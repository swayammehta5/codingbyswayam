class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        vector<int>indices(n);
        for(int i=0;i<n;i++){
            int num=nums[i];
            int sum=0;
            while(num!=0){
                sum+=num%10;
                num=num/10;
            }
            mp[i]=sum;
            indices[i]=i;
        }
        sort(indices.begin(),indices.end(),[&](int a,int b){
            if(mp[a]==mp[b]){
                return nums[a]<nums[b];
            }
            return mp[a]<mp[b];
        });
        vector<int>pos(n);
        for(int i=0;i<n;i++){
            pos[indices[i]]=i;
        }
        int swaps=0;
        for(int i=0;i<n;i++){
            while(pos[i]!=i){
                int j=pos[i];
                swap(pos[i],pos[j]);
                swaps++;
            }
        }
        return swaps;
    }
};
//nums = {37, 100, 25, 1}