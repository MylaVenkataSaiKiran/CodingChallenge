#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int num;
	cin >> num;
	int oddsum=0,evensum=0;
	while(num>0){
		int rdigit = num%10; //gives right most digit
		if(rdigit%2) oddsum += rdigit;
		else evensum += rdigit;
		num /= 10; //num takes all digits of except unit digit of previous num
	}
	cout << evensum <<" " <<oddsum;
	return 0;
}
