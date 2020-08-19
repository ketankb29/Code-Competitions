class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int indeg[N+1],outDeg[N+1];
        memset(indeg,0,sizeof(indeg));
        memset(outDeg,0,sizeof(outDeg));
        for(int i=0;i<trust.size();i++){
            int a=trust[i][0],b=trust[i][1];
            indeg[b]++;
            outDeg[a]++;
        }
        int cnt=0,ans;
        for(int i=1;i<=N;i++){
            if(indeg[i]==N-1 and outDeg[i]==0){
                ans=i;
                cnt++;
            }
        }
        if(cnt>1 or cnt==0)return -1;
        else return ans;
    }
};