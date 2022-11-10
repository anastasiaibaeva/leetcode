class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        for(int i = 0 ; i < arr.size(); i++){
            int appearances = 0;
            appearances = (i + 1) * (arr.size() - i) + 1;
            appearances /= 2;
            sum += appearances * arr[i];       
        }
        return sum;
    }
};