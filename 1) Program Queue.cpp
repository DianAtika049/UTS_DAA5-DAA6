#include <iostream>
#include <queue>

using namespace std;

int main(){
	string nama, nama_pesanan, harga_pesanan;
	int jmlh;
	
	queue<string>q;
	
	cout << "||=====================================================||\n";
	cout << "||          PROGRAM ANTRIAN KOPI KENANGAN DOI          ||\n";
	cout << "||=====================================================||\n\n";
	cout << "  Maksimal Pembeli: "; cin >> jmlh;
	cout << endl;
	
	for (int i = 0; i < jmlh; i++){
		cout << "  Nama Pembeli : "; cin >> nama;
		cin.ignore();
		cout << "  Nama Pesanan : "; getline(cin, nama_pesanan);
		cout << "  Harga Pesanan: "; cin >> harga_pesanan;
		cout << endl;
		q.push(nama);
		(q.size() != 0);
	}
	
	cout << "||=====================================================||\n";
	cout<< "\n  Urutan Antrian: ";
	
	for (int n = 0; n < jmlh; n++){
		cout << endl;
		cout << "  "<< q.front();
		q.pop();
	}
}
