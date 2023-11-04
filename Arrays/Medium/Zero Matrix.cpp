#include <bits/stdc++.h> 

//optimal time-O(N*M) space(1)
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m){
	int col=1;
	for(int i=0;i<n;i++){
		if(matrix[i][0]==0) col = 0;
		for(int j=1;j<m;j++){
			if(matrix[i][j]==0){
				matrix[0][j]=0;
				matrix[i][0]=0;
			}
		}
	}

	for(int j=1;j<m;j++){
		if(matrix[0][j]==0){
			for(int i=1;i<n;i++){
				matrix[i][j]=0;
			}
		}
	}

	for(int i=0;i<n;i++){
		if(matrix[i][0]==0){
			for(int j=1;j<m;j++){
				matrix[i][j]=0;
			}
		}
	}


	if(col==0){
		for(int i=0;i<n;i++){
			matrix[i][0]=0;
		}
	}

	return matrix;
}

// O(N*M)-time O(N*M)-space worst case
void setzeroes(vector<vector<int>> &a, int x, int y, int n, int m){
	for(int i=0;i<n;i++){
		a[i][y] = 0;
	}

	for(int j=0;j<m;j++){
		a[x][j] = 0;
	}
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				v.push_back({i,j});
			}
		}
	}

	for(auto it=v.begin();it!=v.end();it++){
		setzeroes(matrix, it->first, it->second, n, m);
	}

	return matrix;
}