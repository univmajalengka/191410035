#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	int  B[10], jumlah, ganti, hapus = 0;

ulangi: 
	cout << "Masukkan jumlah data : "; 
	cin >> jumlah;

	if (jumlah > 9 )
	{
		cout << "Maaf, max jumlah data adalah 10!";

		goto ulangi;
	}
	else
	{
		for (int i = 0; i<jumlah; i++)
		{
			cout << "Masukkan data ke-" << i + 1 << " : "; 
			cin >> B[i];
		}
		cout << "Data yang telah dimasukkan : ";
		for (int j = 0; j<jumlah; j++)
		{
			cout << "\nB[" << j << "]= " << B[j];
		}
	}
		for (int g = 0; g<jumlah; g++)
	{
		if (B[g] == ganti)
		{
			cout << "Masukkan nilai baru = "; cin >> B[g];
		}
	}

	cout << "Data setelah diubah";
	for (int h = 0; h<jumlah; h++)
	{
		cout << "\nB[" << h << "]= " << B[h];
	}
	
	cout << "Masukkan nilai data yang akan dihapus = "; 
	cin >> hapus;


	for (int j = 0; j < jumlah; j++)
	{
		if (hapus == B[j])
		{
			
			for (int k = j ; k < jumlah; k++)
			{
				B[k] = B[k + 1];
			}
			jumlah -= 1;
			break;
		}
	}

	cout << "\n\nData Baru :";
	for (int p = 0; p<jumlah; p++)
	{
		cout << "\nB[" << p << "]= " << B[p];
	}
	return 0;
	}
	

	
