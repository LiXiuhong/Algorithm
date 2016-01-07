#include <iostream>
#include <string>
using namespace std;

//#define max(a, b, c) ((a)>(b)?(a):(b))>(c)?((a)>(b)?(a):(b)):(c)
//#define same(a, b) (a)==(b)?1:0

int same(int a, int b){
	if (a==b) return 1;
	return 0;
}

int max(int a, int b, int c){
	if (a>=b && a>=c) return a;
	if (b>=a && b>=c) return b;
	return c;
}

int main(){
	string a, b;
	while (cin>>a>>b) {
		int len_a=a.size();
		int len_b=b.size();

		int **dp;
		dp = new int*[len_a+1];
		for (int i=0; i<=len_a; i++)
			dp[i]=new int[len_b+1];
																					
		
		for (int i=0; i<=len_a; i++)
			for (int j=0; j<=len_b; j++)
				dp[i][j]=0;
		
		for (int i=1; i<=len_a; i++)
			for (int j=1; j<=len_b; j++)
				dp[i][j]=max(dp[i-1][j-1]+same(a[i-1],b[j-1]), dp[i-1][j], dp[i][j-1]);
		cout<<dp[len_a][len_b]<<endl;

		for (int i=0; i<=len_a; i++)
			delete []dp[i];
		delete []dp;
	}
	
	return 0;
}
