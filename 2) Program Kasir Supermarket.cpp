#include <unistd.h>
#include <iostream>
#define nmax 200

using namespace std;

struct belanjaan
{
    string kode_item, nama_item;
    int jmlh_item, harga_peritem, total_belanjaan;
};

struct belanjaan supermarket[nmax]; 

int main()
{
	int n, jmlh_bayar;
	
	cout << "||====================================================||\n";
	cout << "||         PROGRAM KASIR SUPERMARKET JAYA RAYA        ||\n";       	
	cout << "||====================================================||\n\n";
	cout << "  Masukkan jumlah seluruh belanjaan: "; cin >> n;
	cout << endl;
	
	for (int i = 0; i < n; i++){
		cout << "  Item ke- " << i + 1;
		cout << endl;
		
		cout << "  Kode Item      : "; cin >> supermarket[i].kode_item;
		cout << "  Nama Item      : "; cin >> supermarket[i].nama_item;
		cout << "  Jumlah Item    : "; cin >> supermarket[i].jmlh_item;
		cout << "  Harga Per-Item : "; cin >> supermarket[i].harga_peritem;
		
		supermarket[i].total_belanjaan = supermarket[i].jmlh_item * supermarket[i].harga_peritem;
		jmlh_bayar = supermarket[i].total_belanjaan + jmlh_bayar;
		cout << endl;
	}
	
	cout << "\n  Sedang Mencetak Struk Belanjaan.....";
	sleep(5);
	system("cls");
	
	cout << "|------------------------------------------------------|\n";
	cout << "|---------------- CETAK STRUK BELANJAAN ---------------|\n";
	cout << "|---------JLN. BEO INDAH 2 NO. 27 MEDAN SUNGGAL--------|\n";
	cout << "|------------------TELP. 082344567999------------------|\n";	
	cout << "|-----------------WWW.SUPERJAYARAYA.COM----------------|\n";
	cout << "|------------------------------------------------------|\n";

		for (int k = 0; k < n; k++){
			cout << endl;
			cout << " Item ke- " << 1 + k;
			cout << endl;
			cout << " Kode Item          : " << supermarket[k].kode_item;
			cout << endl;
			cout << " Nama Item          : " << supermarket[k].nama_item;
			cout << endl;
			cout << " Jumlah Item        : " << supermarket[k].jmlh_item;
			cout << endl;
			cout << " Harga Per-Item     : " << supermarket[k].harga_peritem;
			cout << endl;
			cout << " Total Harga Barang : " << supermarket[k].total_belanjaan;
			cout << endl;	
		}
		
	cout << "\n Biaya yang Harus Dibayar : " << jmlh_bayar;
	
	cout << "\n\n\n TERIMAKASIH TELAH BERBELANJA DI SUPERMARKET JAYA RAYA";
	cout << "\n PEMBELIAN ANDA GRATIS JIKA ANDA TIDAK MENERIMA STRUK BELANJAAN";
}
