#include<iostream>
#include<vector>
using namespace std;

inline int max(int a, int b){
	if (a>b) return a;
	return b;
}

int main(){
	int n;
	cin>>n;
	vector<int> s(n,0);
	for (int i=0; i<n; i++)
		cin>>s[i];

	vector<int> dp(n, 1);//the longest orderd subsequence using the n element as the last element.

	for (int i=1; i<n; i++){
		int tmp=1;
		for (int j=0; j<i; j++)
			if (s[i]>s[j])
				tmp=max(tmp, dp[j]+1);
		dp[i]=tmp;
	}

/*
	for (int i=0; i<n; i++)
		cout<<dp[i]<<' ';
	cout<<endl;
*/
	int max=0;
	for (int i=0; i<n; i++)
		if (max<dp[i])
			max=dp[i];
	
	cout<<max<<endl;
	return 0;
}
