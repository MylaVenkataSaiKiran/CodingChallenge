double areaSwitchCase(int ch, vector<double> a) {
	//built in value of pi is M_PI
	switch(ch){
		case 1:
			return (M_PI*a[0])*a[0]; 
		case 2:
			return (a[0]*a[1]);
	}
	return 0;
}
