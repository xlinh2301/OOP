// Kiem tra k� tu nhap v�o l� nguy�n �m (a, e, i, o, u) hay phu �m
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char kt;
	cin >> kt;
	if(isalpha(kt)){
		if(kt == 'a' || kt == 'e'|| kt == 'i' || kt == 'o' || kt == 'u' || kt == 'A' || kt == 'E'|| kt == 'I' || kt == 'O' || kt == 'U')
			cout << "Nguyen am";
		else 
			cout << "Phu am";
	}
	else if(isdigit(kt)){
		cout << "La mot so";
	}
	else 
		cout << "La ky tu dac biet";
	return 0;
}
