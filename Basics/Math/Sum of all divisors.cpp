// int sumOfAllDivisors(int n){
// 	int sum=0;
// 	for(int i=1;i<=n;i++){
// 		for(int j=1;j*j<=i;j++){
// 			if(i%j==0){
// 				if((i/j)!=j) sum = sum + (j + i/j);
// 				else sum += j;
// 			}
// 		}
// 	}
// 	return sum;
// }

//BETTER SOLUTION O(n)
//we can observe that an integer ‘i’ is added to the final answer 5/i times in total contribution.
int sumOfAllDivisors(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum += (i*(n/i));
	}
	return sum;
}

//There is an optimal solution in O(sqrt(n))..