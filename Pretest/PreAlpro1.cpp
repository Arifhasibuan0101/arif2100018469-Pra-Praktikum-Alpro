#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char * argv[])
{
	float x1,y1,x2,y2,A,B,Jarak;
	Jarak=0;
	cout<<" Menghitung Jarak 2 Titik"<<endl;
	cout<<" ========================"<<endl;
	cout<<" Masukkan titik A(x1) = ";cin>>x1;
	cout<<" Masukkan titik A(y1) = ";cin>>y1;
	cout<<" Masukkan titik B(x2) = ";cin>>x2;
	cout<<" Masukkan titik B(y2) = ";cin>>y2;
	A= (x2-x1)*(x2-x1);
	B= (y2-y1)*(y2-y1);
	Jarak=sqrt (A+B);
	cout<<endl;
	cout<< "Jarak titik A ke titik B = "<<Jarak <<endl;
	cout<<endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}