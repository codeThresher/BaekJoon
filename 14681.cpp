#include <iostream>
using namespace std;

int main(){
	
	int x, y;
	
	cin >> x;
	cin >> y;
	
	if(y>0){
		if(x>0)
			cout << 1;
		else if(x<0)
			cout << 2;
		}
	else if(y<0){
		if(x<0)
			cout << 3;
		else if(x>0)
			cout << 4;
		}
}
