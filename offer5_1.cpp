#include<iostream>
using namespace std;


class Solution
{
	public:
		void insert(int nums1[], int length1, int nums2[], int length2)
		{
			int length=length1+length2;
			
			int i=length1-1, j=length2-1,k=length-1;
			while(i>-1 && j>-1)
			{
				if(nums1[i]>=nums2[j])
				{
					nums1[k]=nums1[i];
					i--;
					k--;
				}
				else
				{
					nums1[k]=nums2[j];
					j--;
					k--;
				}
			}
			
			if(i==-1 && j==-1)
			{
				return;
			}
			else if(i==-1 && j!=-1)
			{
				while(j>-1)
				{
					nums1[k]=nums2[j];
					k--;
					j--;
				}
			}
			else if(i!=-1 && j==-1)
			{
				while(i>-1)
				{
					nums1[k]=nums1[i];
					k--;
					i--;
				}
			}
			return;		
			
		}
};

int main()
{
	int nums1[25]={9,11,13,15};
	int nums2[10]={2,4,6,8};
	
	Solution sol;
	sol.insert(nums1,4,nums2,4);
	
	
	for(int i=0;i<8+8;i++)
	{
		cout<<nums1[i]<<endl;
	}
	
	
	
		
	return 0;
}
