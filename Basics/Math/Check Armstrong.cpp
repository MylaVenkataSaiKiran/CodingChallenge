int numdigits(int n){
	int digits=0;
	while(n>0){
		digits++;
		n /= 10;
	}
	return digits;
}

bool checkArmstrong(int n){
	int k = numdigits(n);
	//if sum of each digit raised to power of k i.e num of digits is equal to given num
	//then it is armstrong num
	int sum=0, digit, n1 = n;
	while(n1>0){
		digit = n1%10;
		sum += pow(digit,k);
		n1 /= 10;
	}

	if(sum==n) return true;
	return false;
}
