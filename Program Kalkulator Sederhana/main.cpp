#include<iostream>
using namespace std;

void menu(){
       cout<<"Kalkulator sederhana"<<endl;
       cout<<"================================================="<<endl;
       cout<<"Operator yang dipakai : "<<endl;
       cout<<"\n + = penambahan \n - = penguarangan \n "
              <<"* = perkalian \n / = pembagian \n "
              <<endl;
}

int main(){
       float angka_1, angka_2,hasil;
       char operasi,pilih;
       

     menu();

       char (angka_1=' ');
       do{
                    if(char(angka_1)==' '){
                           cout<<"\nMasukan angka pertama : ";cin>>angka_1;
                    }
                    else
                           {
                                 cout<<"\nAngka Terakhir : "<<angka_1<<endl;
                          }
               cout<<"Operator : ";cin>>operasi;
               switch(operasi){
                     case '+' :
                            cout<<"Masukan angka kedua : ";cin>>angka_2;
                            hasil = angka_1 + angka_2;
                            cout<<"Hasil = "<<hasil;
                            angka_1=hasil;
                      break;
                     case '-' :
                            cout<<"Masukan angka kedua : ";cin>>angka_2;
                            hasil = angka_1 - angka_2;
                            cout<<"Hasil = "<<hasil;
                            angka_1=hasil;
                      break;
                     case '*' :
                            cout<<"Masukan angka kedua : ";cin>>angka_2;
                            hasil = angka_1 * angka_2;
                            cout<<"Hasil = "<<hasil;
                            angka_1=hasil;
                      break;
                     case '/' :
                            cout<<"Masukan angka kedua : ";cin>>angka_2;
                            if(angka_2 == 0){
                                      cout<< endl;

                            }else {
                            hasil = angka_1 / angka_2;
                            cout<<"Hasil = "<<hasil;
                            angka_1=hasil;
                            }
                      break;
                     default :{
                                        cout<<"Operator salah"<<endl;
                                        exit(0);
                      }  
                }
                        cout<<"\nLanjut (y/n) ? ";cin>>pilih;
            }while(pilih=='y'||pilih=='Y');
}