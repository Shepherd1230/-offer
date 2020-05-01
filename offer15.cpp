class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t p=1;
        int cnt=0;
        
        for (int i=0; i<32; i++) {
            if (p & n) {
                cnt++;
            }
            p=p<<1;
        }
        return cnt;
    }
};
