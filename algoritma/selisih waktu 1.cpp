#include <iostream>

using namespace std;

struct {

int jam;
int menit;
int detik;
} masuk, keluar, selisih;

int main()
{
cout <<" Masukan Jam Pertama" <<endl;
cout <<" Jam : "; cin >>masuk.jam;
cout <<" Menit : "; cin >>masuk.menit;
cout <<" Detik : "; cin >>masuk.detik;
cout <<" Jam Pertama = "<<masuk.jam<<":"<<masuk.menit<<":"<<masuk.detik<<endl;
cout <<endl <<endl;
cout <<" Masukan Jam Kedua" <<endl;
cout <<" Jam : "; cin >>keluar.jam;
cout <<" Menit : "; cin >>keluar.menit;
cout <<" Detik : "; cin >>keluar.detik;
cout <<" Jam Kedua = "<<keluar.jam<<":"<<keluar.menit<<":"<<keluar.detik<<endl;

if ((keluar.detik - masuk.detik) < 0) {
selisih.detik = (60 + keluar.detik) - masuk.detik;
keluar.menit;
}
else {
selisih.detik = keluar.detik - masuk.detik;
}

if ((keluar.menit- masuk.menit) < 0) {
selisih.menit= (60 + keluar.menit) - masuk.menit;
keluar.jam;
selisih.jam = keluar.jam - masuk.jam-1;
}
else {
selisih.menit = keluar.menit- masuk.menit;
selisih.jam = keluar.jam - masuk.jam;
}

cout <<endl <<endl;

cout <<" Selisih Dalam Detik = " << selisih.jam*3600 + selisih.menit*60 + selisih.detik <<endl;

cout<<endl<<endl;

cout <<" Selisihnya " <<endl;
cout <<" Jam : " << selisih.jam <<endl;
cout <<" Menit : " << selisih.menit <<endl;
cout <<" Detik : " << selisih.detik <<endl;
cout <<" Perbedaan Jam Pertama dengan Jam kedua  = "<<selisih.jam<<":"<<selisih.menit<<":"<<selisih.detik<<endl;


return 0;
}


