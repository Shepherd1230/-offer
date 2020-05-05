class Solution {
public:
    bool verifyPostorder(vector<int>& postorder) {
        int i=0, j=postorder.size()-1;
        return verifyPostorderCore(postorder, i, j);
    }
    
    bool verifyPostorderCore(const vector<int> &postorder, int i, int j)
    {
        if (i>=j) return true;
        
        int mid=i;
        int rootValue=postorder[j];
        while (postorder[mid]<rootValue) {
            mid++;
        }
        
        for (int k=mid; k<j; k++) {
            if (postorder[k]<rootValue) {
                return false;
            }
        }
        bool left=verifyPostorderCore(postorder, i, mid-1);
        bool right=verifyPostorderCore(postorder, mid, j-1);
        return left&&right;
    }
};
