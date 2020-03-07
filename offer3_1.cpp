# include<iostream>
# include<vector>
using namespace std;

class Solution
{
	public:
		//space O(n), time O(1) 
		// 0: empty		-1:no duplicate   others: right answer
		int search(vector<int> a)
		{
			if(a.size()==0)
			{
				return 0;
			}
			
			int m=0;
			for(int i=0;i<a.size();)
			{
				// cout<<"i="<<i<<endl;
				if(i==a[i])
				{
					i++;
				}
				else
				{
					m=a[i];
					if(a[m]!=m)
					{
						// cout<<"swap:"<<"a[i]="<<a[i]<<"\ta[m]="<<a[m]<<endl;
						int temp=a[m];
						a[m]=a[i];
						a[i]=temp;
					}
					else
					{
						return m;
					}
				}
			}			
			return -1;		
		}		
};

int main()
{
	vector<int> nums1={2,3,1,0,2,5,3};
	vector<int> nums2={2,3,1,0,6,5,4};
	vector<int> nums3={};
	
	Solution sol;
	cout<<sol.search(nums1)<<endl;
	cout<<sol.search(nums2)<<endl;
	cout<<sol.search(nums3)<<endl;
	return 0;
} 
