class Solution {
    bool isSelfDividingInteger(int n){
        int num = n;
        while(num>0){
            int rem = num%10;
            num = num/10;
            if(rem ==0 || n%rem)
                return false;
        }
        return true;
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i=left; i<=right; i++)
        {
            if(isSelfDividingInteger(i) == true){
                result.push_back(i);
            } 
        }
        return result;
    }
};
