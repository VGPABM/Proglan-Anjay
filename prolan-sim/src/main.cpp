#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "Selamat datang di Universitas Los " << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " Mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " Dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " Tendik" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
			{
				string id,nama,nrp,departemen;
				int dd,mm,yy,tahunmasuk;
				cout<<"Masukkan id: ";
				cin>>id;
				cout<<"Masukkan nrp: ";
				cin>>nrp;
				cout<<"Masukkan nama mahasiswa: ";
				cin>>nama;
				cout<<"Masukkan asal departemen: ";
				cin>>departemen;
				cout<<"Masukkan hari lahir: ";
				cin>>dd;
				cout<<"Masukkan bulan lahir: ";
				cin>>mm;
				cout<<"Masukkan tahun lahir: ";
				cin>>yy;
				cout<<"Masukkan tahun masuk: ";
				cin>>tahunmasuk;
				mahasiswa newMahasiswa(id,nama,dd,mm,yy,nrp,departemen,tahunmasuk);
				recMhs.push_back(newMahasiswa);
			}
				break;
			case 2:
			{
				string id,namadosen,npp,departemen,pendidikan;
				int dd,mm,yy;
				cout<<"Masukkan id:";
				cin>>id;
				cout<<"Masukkan npp:";
				cin>>npp;
				cout<<"Masukkan nama dosen:";
				cin>>namadosen;
				cout<<"Masukkan asal departemen:";
				cin>>departemen;
				cout<<"Masukkan hari lahir:";
				cin>>dd;
				cout<<"Masukkan bulan lahir:";
				cin>>mm;
				cout<<"Masukkan tahun lahir:";
				cin>>yy;
				cout<<"Masukkan pendidikan terakhir:";
				cin>>pendidikan;
				dosen newDosen(id,namadosen,dd,mm,yy,npp,departemen,pendidikan);
				recDosen.push_back(newDosen);
			}
				break;
			case 3:
			{
				string id,namatd,npp,unit;
				int dd,mm,yy;
				cout<<"Masukkan id:";
				cin>>id;
				cout<<"Masukkan npp:";
				cin>>npp;
				cout<<"Masukkan nama tenaga kependidikan:";
				cin>>namatd;
				cout<<"Masukkan asal unit:";
				cin>>unit;
				cout<<"Masukkan hari lahir:";
				cin>>dd;
				cout<<"Masukkan bulan lahir:";
				cin>>mm;
				cout<<"Masukkan tahun lahir:";
				cin>>yy;
				tendik newTd(id,namatd,dd,mm,yy,npp,unit);
				recTendik.push_back(newTd);
			}
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
		}
	}

	return 0;
}
