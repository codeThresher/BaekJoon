#include <iostream>
using namespace std;
bool leap(int year);

int main(){
	int year;
	
	cin >> year;
	
	cout << leap(year);

}

bool leap(int year){
	
	if(year%4 == 0)
		if(year%100 != 0)
			return true;
		if(year%400 == 0)
			return true;
	else
		return false;
}


