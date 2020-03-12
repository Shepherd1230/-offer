#include<iostream>
#include<vector> 
using namespace std;

class Solution
{
	public:
		bool search(vector<vector<int>>nums, int target)
		{
		    bool found = false;
		    int i=0,j=nums[1].size()-1;

			while(i<nums.size() && j>-1)
			{
				if(nums[i][j]==target)
				{
					found = true;
					return found;
				}
				else if(nums[i][j]>target)
				{
					j--;
				}
				else
				{
					i++;
				}
			}
			return found;
		}
};


int main()
{
	vector<vector<int>> nums={{1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15}};
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<nums[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	
	
	Solution sol;
	cout<<"search result=\t"<<sol.search(nums,7)<<endl;
	cout<<"search result=\t"<<sol.search(nums,5)<<endl;
	cout<<"search result=\t"<<sol.search(nums,16)<<endl;

	
	
	
	return 0;
}
