#include <iostream>
#include <string> //untuk memanggil library agar dapat menggunakan getline(cin, variabel)

using namespace std;

void input_07434(); //deklarasi fungsi agar bisa dipakai untuk fungsi diatasnya
void output_07434();

struct pribadi_07434 //strutur yang menyimpan data pribadi mahasiswa
{
	string nama_Mahasiswa_07434;	//deklarasi nama mahasiswa
	string nomor_mahasiswa_07434;	//deklarasi nomor telepon mahasiswa
	string alamat_mahasiswa_07434;  //deklarasi alamat tinggal mahasiswa
};

struct non_pribadi_07434//struktur untuk menyimpan data seputar kampus
{
	string NPM_07434;		//deklarasi Nomor Pokok Mahasiswa
	string jurusan_07434;	//deklarasi jurusan mahasiswa
};

struct data_mahasiswa_07434
{
	pribadi_07434 data_pribadi_07434;				//memanggil struktur data pribadi mahasiswa
	non_pribadi_07434 data_non_pribadi_07434;		//memanggil struktur data non pribadi mahasiswa
}data_mahasiswa_07434[50]; //deklarasi struct untuk menyimpan sebanyak 50 data

int main()
{
	input_07434(); //memanggil fungsi input
	output_07434();
}

int jumlah_mahasiswa_07434;

void input_07434()
{
	cout << "masukkan jumlah mahasiswa = ";
	cin >> jumlah_mahasiswa_07434;
	cin.ignore();
	cout << endl;
	system("cls");


	for (int perulangan_07434 = 1; perulangan_07434 <= jumlah_mahasiswa_07434; perulangan_07434++)
	{
		cout << "data mahasiswa ke-" << perulangan_07434 << endl;
		cout << "masukkan data :\n";
		cout << "Nama       = ";
		getline(cin, data_mahasiswa_07434[perulangan_07434].data_pribadi_07434.nama_Mahasiswa_07434);
		cout << "alamat     = ";
		getline(cin, data_mahasiswa_07434[perulangan_07434].data_pribadi_07434.alamat_mahasiswa_07434);
		cout << "no. telpon = ";
		getline(cin, data_mahasiswa_07434[perulangan_07434].data_pribadi_07434.nomor_mahasiswa_07434);
		cout << "NPM	   = ";
		getline(cin, data_mahasiswa_07434[perulangan_07434].data_non_pribadi_07434.NPM_07434);
		cout << "Jurusan    = ";
		getline(cin, data_mahasiswa_07434[perulangan_07434].data_non_pribadi_07434.jurusan_07434);
		cout << endl;
	}
	
}

void output_07434()
{
	system("cls");
	for (int perulangan_07434 = 1; perulangan_07434 <= jumlah_mahasiswa_07434; perulangan_07434++)
	{

		cout << "data mahasiswa ke-" << perulangan_07434 << endl;
		cout << "Nama       = " << data_mahasiswa_07434[perulangan_07434].data_pribadi_07434.nama_Mahasiswa_07434 << endl;
		cout << "alamat     = " << data_mahasiswa_07434[perulangan_07434].data_pribadi_07434.alamat_mahasiswa_07434 << endl;
		cout << "no. telpon = " << data_mahasiswa_07434[perulangan_07434].data_pribadi_07434.nomor_mahasiswa_07434 << endl;
		cout << "NPM	   = " << data_mahasiswa_07434[perulangan_07434].data_non_pribadi_07434.NPM_07434 << endl;
		cout << "Jurusan    = " << data_mahasiswa_07434[perulangan_07434].data_non_pribadi_07434.jurusan_07434 << endl << endl;
	}

}