#include<vector>

//optimal solution
void rotateMatrix(vector<vector<int>> &mat){
	for(int i=0;i<mat.size();i++){ //transpose of matrix
		for(int j=0;j<i;j++){
			swap(mat[i][j], mat[j][i]);
		}
	}
	
	for(auto &i:mat){ //reverse each row
		reverse(i.begin(),i.end());
	}
}