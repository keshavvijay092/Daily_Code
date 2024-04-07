	public:
	int maxDotProduct(int n, int m, int a[], int b[]) 
	{ 
int dp[m+1][n+1];
		memset(dp, 0, sizeof(dp));
		
		for(int i=1;i<=m;i++){
		    for(int j=i;j<=n;j++){
		        dp[i][j]=max(dp[i-1][j-1]+a[j-1]*b[i-1], dp[i][j-1]);
		    }
		}
		return dp[m][n];
// 	 int c[n];
//     for (int i = 0; i < n; i++) {
//         c[i] = a[i];
//     }
//     sort(c,c+n);
//     int zeros = n-m;
//     vector<int> st;
//     for(int i=0;i<zeros;i++)
//     {
//         st.push_back(c[i]);
//     }
//     // 1 and 2 
    
//     vector<int> index;
//     for(int i=0;i<st.size();i++)
//     {
//         int j = 0;
//         while(j<n)
//         {
//              if(st[i] == a[j])
//         {
//             index.push_back(j);
//         }
//         j++;
//         }
    
//     }
//     vector<int>bnew;
//     for(int i =0;i<n;i++)
//     {
//         if(i == index[i])
//         {
//             bnew.push_back(0);
//         }
//         else 
//         {
//             bnew.push_back(b[i]);
//         }
//     }
//     int  ans = 1;
//     for(int i=0;i<n;i++)
//     {
//         ans = a[i]*bnew[i];
//     }
// 	return ans;
	    
	} 
};