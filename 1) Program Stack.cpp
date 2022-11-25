#include <iostream>
#include <stack>
#define jmlh_max 5

using namespace std;

int main(){
	string jenis_pakaian, warna_pakaian, corak_pakaian;
	
	stack<string>q;
	
	cout << "||=====================================================||\n";
	cout << "||                PROGRAM STACK PAKAIAN                ||\n";
	cout << "||=====================================================||\n";
	cout << endl;
	
	for (int i = 0; i < jmlh_max; i++){
		cout << "  Jenis Pakaian  : "; cin >> jenis_pakaian;
		cin.ignore();
		cout << "  Warna Pakaian  : "; getline(cin, warna_pakaian);
		cout << "  Corak Pakaian  : "; getline(cin, corak_pakaian);
		cout << endl;
		q.push(jenis_pakaian);
	
		(q.size() != 0);
	}
	
	cout << "||=====================================================||\n";
	cout<< "\n  Urutan Baju yang akan Dikeluarkan: ";
		for (int n = 0; n < jmlh_max; n++){
			cout << endl;
			cout << "  "<< q.top();
			q.pop();
	}	
}
