//Calculate if integer n is in Power of 2
class Solution {
public:
    bool isPowerOfTwo(int n){
        if (n<=0) return false;
        while (n%2==0){
            n/=2;
        }
        return (n==1);
    }
};
