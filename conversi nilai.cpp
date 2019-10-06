#include <iostream>
using namespace std;

int main()
{
	int nilai; 
	cout << "Masukkan Nilai Kamu"<< endl; 
	cin >> nilai;
	
	if (nilai > 85 && nilai <= 100)

	cout<<"Nilai 'A'";
	
	else if((84>=nilai)&&(nilai>75))

	cout<<"Nilai 'B'";		

	else if((74>=nilai)&&(nilai>65))

	cout<<"Nilai 'C'";

	else if((64>=nilai)&&(nilai>40))

	cout<<"Nilai 'D'";

	else if((39>=nilai)&&(nilai>0))

	cout<<"Nilai 'E'";

	cout<<"semangat belajarnya"<<endl;
	cout<<"\t\t\t Created by ibnu nadhir"<<endl;
	return 0;
}	
