class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0;
        int n=bills.size();
        for(int i=0;i<n;i++)
        {
            int bill=bills[i];
            if(bill==5)
            {
                five++;
            }
            else if(bill==10)
            {
                if(five==0) return false;
                five--;
                ten++;
            }
            else if(bill==20)
            {
                if(ten>0 && five>0){
                    ten--;
                    five--;
                }else if(five>=3)
                {
                    five=five-3;
                }else{
                    return false;
                }
            }

        }
        return true;
    }
};