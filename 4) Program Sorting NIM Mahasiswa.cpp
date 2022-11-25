#include <iostream>

using namespace std;

int main()
{
    int jmlh_arr;
    
    cout << "||---------------------------------------------------------------------||\n";
    cout << "|| Selamat Datang di Program Data Mahasiswa dan Pengurutan Melalui NIM ||\n";
    cout << "||---------------------------------------------------------------------||\n";
    
    cout << "\n   Masukkan jumlah siswa yang diinginkan: "; cin>>jmlh_arr;
    
    string nama[jmlh_arr], jurusan[jmlh_arr], fakultas[jmlh_arr];
    int nim[jmlh_arr];
    char kom[jmlh_arr];
    int n = sizeof(nim) / sizeof(jmlh_arr);
    
    cout << "\n-------------------------------------------------------------------------\n";
    for (int i = 0; i < jmlh_arr; i++)
    {
    	cout << "\n   Mahasiswa Ke- " << i+1;
    	cin.ignore();
        cout << "\n   Masukkan nama mahasiswa ke-" << i+1 <<": "; getline(cin, nama[i]); 
        cout << "   Masukkan NIM mahasiswa ke-" << i+1 << ": "; cin >> nim[i];
        cout << "   Masukkan KOM mahasiswa ke-" << i+1 <<": "; cin >> kom[i];
        cin.ignore();
	    cout << "   Masukkan jurusan mahasiswa ke-" << i+1 <<": "; getline(cin, jurusan[i]);
        cout << "   Masukkan fakultas mahasiswa ke-" << i+1 <<": "; getline(cin, fakultas[i]);
        cout << "\n";
    }
    
    
    for (int j = 0; j < n - 1 ; j++){
    	for (int k = 0; k < n - 1 ; k++){
    		if (nim[k] > nim[k + 1]){
    			swap (nim[k], nim[k + 1]);
			}
		}
	}
	
	cout << "-------------------------------------------------------------------------\n\n";
	cout << "   Urutan Mahasiswa Berdasarkan NIM : ";
	cout << endl;

	    for (int l = 0; l < n; l++){
		    cout << "   " << nama[l] << endl;
		    cout << "   " << nim[l] << endl;
		    cout << "   " << kom[l] << endl;
		    cout << "   " << jurusan[l] << endl;
		    cout << "   " << fakultas [l] <<endl;
		    cout << "\n";
	    }
    
	return 0;
}
