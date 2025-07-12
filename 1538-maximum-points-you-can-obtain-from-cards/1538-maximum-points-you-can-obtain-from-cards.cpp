class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;
        int rsum=0;
        int rindex=cardPoints.size();
        int maxsum=0;
        for(int i=0;i<k;++i)
        {
            lsum+=cardPoints[i];
        }
        maxsum=lsum;
        for(int i=1;i<=k;++i)
        {
            lsum-=cardPoints[k-i];
            rsum+=cardPoints[rindex-i];

            maxsum=max(maxsum,lsum+rsum);
        }
        return maxsum;
    }
};