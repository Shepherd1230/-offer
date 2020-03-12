#include<iostream>

using namespace std;


class Solution
{
	public:
		void exchange(char string[], int length)
		{
			int cnt=0;
			int idx=0;
			while(string[idx]!='\0')
			{
				if(string[idx]==' ')
				{
					cnt++;
				}
				idx++;
			}
			
			int new_idx=idx+cnt*2;
			if(new_idx+1>length)
			{
				cout<<"length is not enough."<<endl;
				return;
			}
			
			while(idx>-1)
			{
				if(string[idx]==' ')
				{
					string[new_idx--]='%';
					string[new_idx--]='0';
					string[new_idx--]='2';
					idx--;
				}
				else
				{
					string[new_idx]=string[idx];
					new_idx--;
					idx--;
				}
			}
			cout<<string<<endl;
			return;
		}
};


int main()
{
	char string[50]="We are happy.";
	
	
	Solution sol;
	sol.exchange(string, 50);
	
	
	return 0;
}
