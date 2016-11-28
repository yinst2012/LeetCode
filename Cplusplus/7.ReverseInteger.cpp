class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        if(x > 0){
            while(x != 0){
                ans = ans * 10 + (x % 10);
                x /=  10;
            }
        }
        else if(x == 0) ans = 0;
        else{
            x = x * (-1);
            while(x != 0){
                ans = ans * 10 + (x % 10);
                x /=  10;
            }
            ans = -ans;
        }
        if(ans > 2147483647) return 0;
        else if(ans < -2147483648) return 0;
        else return ans;
    }
};
