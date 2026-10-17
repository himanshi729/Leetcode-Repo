class Solution {
public:
    string reverseByType(string s) {
        int n = s.size();
        int i=0; 
        int j = n-1;

        while(i<j){
            if(!islower(s[i]))
            i++;
            else if(!islower(s[j]))
            j--;
            else{
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        i = 0;
        j = n-1;
       
        while(i<j){
            if(islower(s[i]))
            i++;
            else if(islower(s[j]))
            j--;
            else{
                swap(s[i], s[j]);
                i++;
                j--;
            }

        }
        return s;
    }
};
