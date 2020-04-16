#include <iostream>
using namespace std;

int main(){
	int H, M;
	int hour, min;
	int quick;
	
	
	cin >> H >> M;
	
	quick = M-45; //min값의 음수 
	
	if(M<45){
		if(H==0){
			hour = 23;
			min = quick+60;
		}
		else{
			hour = --H;
			min = quick+60;
		}
	}
	else {// 상근이의 시간이 45분이 넘을때 
		hour = H;
		min = M-45;
	}
	cout << hour <<" "<< min;
}
