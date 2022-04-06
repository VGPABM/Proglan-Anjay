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
		system("clear");
		cout << "Selamat datang di Universitas Los" << endl << endl;
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
				system("clear");
				string id,nama,nrp,departemen;
				int dd,mm,yy,tahunmasuk;
				int urutan = recMhs.size() + 1;
				string counter = to_string(urutan);
				id = "m" + counter;
				cout<<"Masukkan nama mahasiswa: ";
				cin.ignore();
				getline(cin,nama);
				cout<<"Masukkan nrp: ";
				cin>>nrp;
				cout<<"Masukkan hari lahir: ";
				cin>>dd;
				cout<<"Masukkan bulan lahir: ";
				cin>>mm;
				cout<<"Masukkan tahun lahir: ";
				cin>>yy;
				cout<<"Masukkan asal departemen: ";
				cin.ignore();
				getline(cin,departemen);
				cout<<"Masukkan tahun masuk: ";
				cin>>tahunmasuk;
				mahasiswa newMahasiswa(id,nama,dd,mm,yy,nrp,departemen,tahunmasuk);
				recMhs.push_back(newMahasiswa);
			}
				break;
			case 2:
			{
				system("clear");
				string id,namadosen,npp,departemen,pendidikan;
				int dd,mm,yy;
				id = "d" + recDosen.size();
				cout<<"Masukkan npp:";
				cin>>npp;
				cout<<"Masukkan nama dosen:";
				cin.ignore();
				getline(cin,namadosen);
				cout<<"Masukkan asal departemen:";
				cin.ignore();
				getline(cin,departemen);
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
				system("clear");
				string id,namatd,npp,unit;
				int dd,mm,yy;
				id = "td" + recTendik.size();
				cout<<"Masukkan npp:";
				cin>>npp;
				cout<<"Masukkan nama tenaga kependidikan:";
				cin.ignore();
				getline(cin,namatd);
				cout<<"Masukkan asal unit:";
				cin.ignore();
				getline(cin,unit);
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
			case 4:{
			system("clear");
			cout<<"List Mahasiswa"<<endl;
			int i = 0;
			int pilihan = 0;
			for (i;i<recMhs.size();i++){
				int o=i+1;
				cout<<o;
				cout<<". ";
				cout<<recMhs[i].getNama()<<endl;
			}
			cout<< "Pilih mahasiswa : ";
			cin>>pilihan;
			pilihan = pilihan-1;
			system("clear");
			cout<<"Id : ";
			cout<<recMhs[pilihan].getId()<<endl;
			cout<<"Nama Mahasiswa : ";
			cout<<recMhs[pilihan].getNama()<<endl;
			cout<<"Tanggal Lahir : ";
			cout<<recMhs[pilihan].getTglLahir()<<endl;
			cout<<"Bulan Lahir : ";
			cout<<recMhs[pilihan].getBulanLahir()<<endl;
			cout<<"Tahun Lahir : ";
			cout<<recMhs[pilihan].getTahunLahir()<<endl;
			cout<<"Tahun Masuk : ";
			cout<<recMhs[pilihan].getTahunmasuk()<<endl;
			cout<<endl; cout<<endl; cout<<endl; cout<<endl;
			cout<<"Press any key to continue"<<endl;
			cin.ignore();
			cin.ignore();
			}
			break;
			case 5:
			{
			
			}
				break;
			case 6:
				break;
		}
	}

	return 0;
}
