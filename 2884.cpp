#include <iostream>
using namespace std;

int main(){
	int H, M;
	int hour, min;
	int quick;
	
	
	cin >> H >> M;
	
	quick = M-45; //min���� ���� 
	
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
	else {// ������� �ð��� 45���� ������ 
		hour = H;
		min = M-45;
	}
	cout << hour <<" "<< min;
}
