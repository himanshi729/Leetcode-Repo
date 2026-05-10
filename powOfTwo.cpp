#include<iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;

        return ((n & (n-1))== 0);
    }
};
int main(){
    Solution s;
    int n;
    cin>>n;

    if(s.isPowerOfTwo(n))
    cout<<"Power Of Two"<<endl;

    else
    cout<<"Not Power of Two"<<endl;

    return 0;
}