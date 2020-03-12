#include<iostream>
#include<vector>

using namespace std;

long long fibonacci(int n)
{
	vector<long long> nums;
	nums.push_back(0);
	nums.push_back(1);
	if(n==0)
	{
		return nums[0];
	}
	if(n==1)
	{
		return nums[1];
	}
	for(int i=2;i<=n;i++)
	{
		int temp=nums[i-2]+nums[i-1];	
		nums.push_back(temp);
	}
	return nums[n];
}

int main()
{
	cout<<fibonacci(20)<<endl;
	return 0;
}
