bool isPrime(int n)
{
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	if(n==1) return false;
	return true;
}

