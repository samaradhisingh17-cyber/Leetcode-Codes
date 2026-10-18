class Solution {
public:
    int subtractProductAndSum(int num) {
        int n = num, digit;
        int add = 0, product = 1;
        while(n>0){
            digit = n%10;
            add += digit;
            product *= digit;
            n=n/10;
        }
        return product - add;
    }
};