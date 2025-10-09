class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.length();
        vector<int>s(n+1);
        vector<int>p(n+1);
        s[n]=0;
        p[0]=0;
        for(int i=0;i<n;i++)
        {
            int count=0;
            if(customers[i]=='N')
            {
                count++;
            }
            p[i+1]=p[i]+count;
        }
        for(int i=n-1;i>=0;i--)
        {
            int count=0;
            if(customers[i]=='Y')
            {
                count++;
            }
            s[i]=s[i+1]+count;
        }
        int minPenalty=INT_MAX;
        int besthour=0;
        for(int i=0;i<=n;i++)
        {
            int penalty=p[i]+s[i];
            if(penalty<minPenalty){
                minPenalty=penalty;
                besthour=i;
            }
        }

        return besthour;
    }
};