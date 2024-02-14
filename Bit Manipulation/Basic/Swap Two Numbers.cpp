//O(1)-time & O(1)-Space
void swapNumber(int &a, int &b){
	a = a+b;
    b = a-b;
    a = a-b;
}

// O(1)-time & O(1)-Space
void swapNumber(int &a, int &b) {
	int x = b;
	b = a;
	a = x;
}