#include<iostream>
using namespace std;

class Segitiga {
    public :
        int alas, tinggi;
        int sisi1, sisi2, sisi3;

        void inputData(){
            cout << "Masukkan Alas Segitiga =";
            cin >> alas;
            cout << "Masukkan Tinggi Segitiga =";
            cin >> tinggi;
            cout << "Masukkan Sisi 1 =";
            cin >> sisi1;
            cout << "Masukkan Sisi 2 =";
            cin >> sisi2;
            cout << "Masukkan Sisi 2 =" ;
            cin >> sisi3;
        }


    private : 
        float LuasSegitiga(int a, int t){
            return 0.5 * a * t;
        }
        float KelilingSegitiga(int a, int b , int c){
            return a + b + c; 
        }
    
    public :
        void inputLuassegitiga(){
            cout << "Masukkan Alas Segitiga =";
            cin >> alas;
            cout << "Masukkan Tinggi Segitiga =";
            cin >> tinggi;
        }

        void outputLuassegitiga(){
            cout << "Luas Segitiga = " << LuasSegitiga(alas, tinggi) << endl;
        }

        void inputKelilingsegitiga(){
        cout << "Masukkan Sisi 1 =";
        cin >> sisi1;
        cout << "Masukkan Sisi 2 =";
        cin >> sisi2;
        cout << "Masukkan Sisi 2 =";
        cin >> sisi3;
        }

        void outputKelilingsegitiga(){
            cout << "Keliling Segitiga = " << KelilingSegitiga(sisi1, sisi2, sisi3) << endl;
        }
};

int main(){
    Segitiga sg;
    int pilihan;

    do{
      float alas,tinggi,sisi1,sisi2,sisi3;

            cout << "====== Menu ======" << endl;
            cout << "1. Menghitung Luas Segitiga" << endl;
            cout << "2. Menghitung Keliling Segitiga" << endl;
            cout << "3. Exit" << endl;
            cout << "Pilih (1/2/3) : ";
            cin >> pilihan;

            switch(pilihan){
                case 1 :
                    sg.inputLuassegitiga();
                    sg.outputLuassegitiga();
                    break;
                case 2 : 
                    sg.inputKelilingsegitiga();
                    sg.outputKelilingsegitiga();
                    break;
                case 3 :
                    break;
                default : 
                    cout << " - Pilihan Anda Salah - " << endl;
                    cout << " - Silahkan Pilih 1/2/3 - " << endl;
                    break;
             }
    } while (pilihan != 3);

    return 0;
    
}

