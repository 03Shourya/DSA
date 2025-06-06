class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>roman={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int sum=0;
        int prevalue=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            int currvalue = roman[s[i]];
            if(currvalue<prevalue)sum-=currvalue;
            else sum+=currvalue;




            prevalue=currvalue;
        }
        return sum;
    }
};