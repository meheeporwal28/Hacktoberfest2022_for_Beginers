class Solution {
public:
    bool isUgly(int n) {
        // n=abs(
        if(n==0)
            return false;
        if(n%2==0)
        {
            n=n/2;
        }            
        if(n%3==0)
        {
            n=n/3;
        }
        if(n%5==0)
        {
            n=n/5;
        }
        cout<<n<<" ";
        if(n==1)
            return true;
        if(n%2==0 || n%3==0 || n%5==0)
            return isUgly(n);
        return false;
    }
};
