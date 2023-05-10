int solver(int ind,vector<int> &price,int target){
	if(ind == 0)return target*price[0];

	int notCut = solver(ind-1,price,target);
	int cut = -1e8;
	if(ind+1<=target)cut = solver(ind,price,target-(ind+1))+price[ind];

	return max(cut,notCut);
}
int cutRod(vector<int> &price, int n)
{
	return solver(n-1,price,n);
	// vector<vector<int>> dp(n,vector<int> (n+1,0));
	
	
}
