class Solution
{
public:
    int totalFruit(vector<int>& fruits)
    {
        int left=0,right=0;
        int maxlen=0;
        unordered_map<int,int>basket;
        for(right=0;right<fruits.size();right++)
        {
            basket[fruits[right]]++;
            while(basket.size()>2)
            {
                basket[fruits[left]]--;
                if(basket[fruits[left]]==0)
                {
                    basket.erase(fruits[left]);
                    
                }
                left++;
            }
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};