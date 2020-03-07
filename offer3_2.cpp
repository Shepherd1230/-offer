#include<iostream>
#include<vector>
using namespace std;


class Solution
{
	public:
		// empty:0		duplicate:numbers
		int search(vector<int> nums)
		{
			if(nums.size()==0)
			{
				return 0;
			}
			
			int first=1, last=nums.size()-1;
			int mid=(first+last)/2;
			
			cout<<"first="<<first<<endl;
			cout<<"mid="<<mid<<endl;
			cout<<"last="<<last<<endl;
			
			while(first<last)
			{
				int cnt=0;
				for(int i=0;i<nums.size();i++)
				{
					if(nums[i]<=mid)
					{
						cnt++;
					}
				}				
				if(cnt>mid)
				{
					last=mid;
				}
				else
				{
					first=mid+1;
				}
				mid=(first+last)/2;

				/*
				cout<<"cnt="<<cnt<<endl;
				cout<<endl;
				cout<<"first="<<first<<endl;
				cout<<"mid="<<mid<<endl;
				cout<<"last="<<last<<endl;		
				*/
			}			
			return mid;
		}
};

int main()
{
	vector<int> nums1={2,1,5,4,3,6,7,7};
	vector<int> nums2={};
	
	Solution sol;
	cout<<"nums1:\t"<<sol.search(nums1)<<endl;
	cout<<"nums2:\t"<<sol.search(nums2)<<endl;
	
	return 0;
}
