void recurfunc(int x, vector<string> &a){
	if(x>0){
		recurfunc(x-1,a);
		a.push_back("Coding Ninjas");
	}
}

vector<string> printNTimes(int n) {
	vector<string> a;
	recurfunc(n,a);
	return a;
}