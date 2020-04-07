#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	int huns, tens, units;
	int fir, sec, thi, result;
	
	cin >> num1;
	cin >> num2;
	
	huns = num2/100;
	tens = num2/10 - huns*10;
	units = num2 - (huns*100 + tens*10);
	
	fir = num1*units;
	sec = num1*tens;
	thi = num1*huns;
	result = num1*num2;
	
	cout << fir << endl;
	cout << sec << endl;
	cout << thi << endl;
	cout << result;
	
}
