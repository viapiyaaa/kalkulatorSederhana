#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f, g, pilih;

// a menunjukan banyaknya variabel X
// b digunakan sebagai index
// c menunjukan nilai konstanta
// d digunakan untuk melambangkan nilai koefisien variabel yang lebih kecil dari 1
// e digunakan untuk melambangkan nilai pangkat variabel yang lebih kecil dari 1
// f digunakan untuk melambangkan nilai konstanta variabel yang lebih kecil dari 1
// g digunakan untuk memberi intruksi pengulangan program
// pilih digunakan untuk untuk menentukan intruksi pengulangan program
// n[b] menunjukan koefisien variabel pada index ke-b
// p[b] menunjukan pangkat variabel pada index ke-b


        cout << "           KALKULATOR TURUNAN DAN INTEGRAL SEDERHANA            " << endl;
        cout << endl;
        cout << "--------------------------- KELOMPOK 8 -------------------------" << endl;
        cout << "               Evi Afiyatus Solihah    2209922                  " << endl;
        cout << "               Firda Rosela Sundari    2200198                  " << endl;
        cout << "               Ikhsan Fauzan Aziim     2200778                  " << endl;
        cout << "               Jhiesa Anugrah Pratama  2200484                  " << endl;
        cout << "----------------------------------------------------------------" << endl;
        cout << endl;
        cout << "----------------------------------------------------------------" << endl;
        cout << "               n : Nilai Koefisien dari Variabel                " << endl;
        cout << "-               p : Nilai Pangkat dari Variabel                  " << endl;
        cout << "               C : Nilai Konstanta                              " << endl;
        cout << "----------------------------------------------------------------" << endl;
        cout << endl;

        bool x = true;
    do{
        cout << "Masukkan Banyaknya Variabel dari X =  "; cin >> a;
        cout << endl;

		//Koreksi
		while (x = true ) {
            if (a<=0) {
            cout << "Ada Kesalahan" << endl;
            cout << "Masukkan Banyaknya Variabel dari X = ";cin >>a;
            x = true;
		}else {
		x = false;
		break;
		}
		}
          //break;
		//}else if(a>0) {
		//cout << "Masukkan Banyaknya Variabel dari X = ";cin >>a;

        //Output bentuk umum fungsi
		int n[b], p[b];
		cout << "Y = ";
		for (b=0; b<a; b++){
            cout << "a.X^p";
            if (a-b>=1){
                cout << " + ";
            }
		}
		cout << "C" << endl;
		cout << endl;
		// Input nilai variabel
		for (b=0; b<a; b++){
            cout << "Masukkan nilai n ke-" << b+1 << " = "; cin >> n[b];
            cout << "Masukkan nilai p ke-" << b+1 << " = "; cin >> p[b];
		}

		//Input nilai konstanta
		cout << "Masukkan nilai c = ";
		cin >> c;
		cout << endl;

		//output fungsi
		//menentukan tanda +/-
		cout << "Y = ";
		for (b=0; b<a; b++){
            if (n[b]>0){
                if (b!=0){
                    cout << " + ";
                }
            }else if (n[b]<0){
                d = -n[b];
                cout << " - ";
            }
            //output koefisien dan pangkat variabel
            if (p[b]==0) {
                if (n[b]>0) {
                    cout << n[b];
                } else {
                cout << d;
                }
            } else if (p[b]==1) {
                if (n[b]>0){
                    cout << n[b] << ".X";
                }else {
                    cout << d << ".X";
                }
            } else {
                if (n[b]>0){
                    cout << n[b] << ".X^" << p[b];
                }else {
                    cout << d << ".X^" << p[b];
                }
            }

		}

		//Output nilai konstanta
		if (a==0){
            cout << c;
		} else if (c>0) {
		    cout << " + " << c;
		} else if (c<0) {
		    f = -c;
		    cout << " - " << f;
		}
		cout << endl << endl;

		//Pemilihan operasi yang akan dijalankan

		cout << "Pilih Opsi Kalkulator" << endl;
		cout << "---------------------" << endl;
		cout << "1. Turunan Fungsi    " << endl;
		cout << "2. Integral Fungsi   " << endl;
		cout << "---------------------" << endl;
		cout << endl;

		cout << "Pilih Operasi :      " << endl;
		cin >> pilih;
		cout << endl;

		//pencegahan kesalahan input

		while (pilih<1 || pilih >2) {
            cout << "Tentukan Operasi Yang Benar!" << endl;
            cout << "Pilih Operasi : "; cin >> pilih;
            cout << endl;
		}

		//Operasi turunan

		if (pilih == 1) {
            for (b=0; b<a; b++){
                n[b] = n[b]*p[b];
                p[b] = p[b]-1;
            }
            cout << "Y' = ";
            if (a==0){
                cout << "Hasil Tidak Ditemukan";
            } else {
                for (b=0; b<a; b++){
                    if (n[b]>0){
                        if (b!=0){
                            cout << " + ";
                        }
                    } else if (n[b]<0) {
                        d = -n[b];
                        cout << " - ";
                    }

                    //output koefisien dan pangkat variabel

                    if (n[b]>0) {
                        if (p[b]==0){
                            cout << n[b];
                        } else if (p[b]==1){
                            cout << n[b] << ".X";
                        } else {
                            cout << n[b] << ".X^" << p[b];
                        }
                    } else {
                        if (p[b]==0) {
                            cout << d;
                        } else if (p[b]==1) {
                            cout << d << ".X";
                        } else {
                            cout << d << ".X^" << p[b];
                        }
                    }
                }
            }
		}

		//operasi Integral
		//menentukan tanda +/-
		else {
            for (b=0; b<a; b++) {
                p[b] = p[b]+1;
            }
            cout << "Y' = ";
            for (b=0; b<a; b++) {
                if ((n[b]>0 && p[b]>0) || (n[b]<0 && p[b]<0)) {
                    if (b!=0) {
                        cout << " + ";
                    }
                } else if ((n[b]>0 && p[b]<0) || (n[b]<0 && p[b]>0)) {
                    cout << " - ";
                } else if (p[b]==0){
                    if (n[b]<0) {
                        n[b] = -n[b];
                        cout << " - ";
                    } else {
                        if (b!=0) {
                            cout << " + ";
                        }
                    }
                }
                //output koefisien dan pangkat variabel
                if (p[b]!=0) {
                    if (n[b]>0) {
                        d = n[b];
                    } else {
                        d = -n[b];
                    }
                    if (p[b]>0) {
                        e = p[b];
                    } else {
                        e = -p[b];
                    }
                    if (d%e==0) {
                        n[b] = n[b]/p[b];
                        if (n[b]>0) {
                            if (p[b]!=1) {
                                cout << n[b] << ".X^" << p[b];
                            } else {
                                cout << n[b] << ".X";
                            }
                        } else if (n[b]<0) {
                            d = -n[b];
                            if (p[b]!=1) {
                                cout << d << ".X^" << p[b];
                            } else {
                                cout << d << ".X";
                            }
                        }
                    } else {
                        if (n[b]>0) {
                            cout << n[b] << "/" << e << ".X^" << p[b];
                        } else {
                            d = -n[b];
                            cout << d << "/" << e << ".X^" << p[b];
                        }
                    }
                } else {
                    cout << n[b] << ".1n(X)";
                }
            }
            //output konstanta
            if (c>0) {
                if (a==0) {
                    cout << c << ".X";
                } else {
                    cout << " + " << c << ".X + C";
                }
            } else if (c<0) {
                f = -c;
                cout << " - " << f << ".X + C ";
            } else {
                cout << " + C " ;
            }
		}
		cout << endl << endl;

		cout << "-------------------------------" << endl;
		cout << " Ingin Melakukan Perhitungan Kembali? " << endl;
		cout << " Ketik 1 Jika Ya!              " << endl;
		cin >> g;
		cout << "-------------------------------" << endl;
    }
    while (g == 1);

        cout << " Program Kalkulator Selesai! " << endl;
        cout << "-----------------------------" << endl;
        cout << "        Terima Kasih!        " << endl;

    return 0;
}
