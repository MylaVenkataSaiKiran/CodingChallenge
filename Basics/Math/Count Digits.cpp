int countDigits(int n){
	int k = n, count=0;
	int digit;

	while(k>0){
		digit = k%10;
		if(digit>0){
			if(!(n%digit)) count++; //if digit divides orginal number
		}
		k /= 10;
	}

	return count;
}