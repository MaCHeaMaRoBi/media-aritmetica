#include <iostream>
using namespace std;

int main() {

	int total, numarulcurent;
	int suma = 0;


	cout << "Introduce cate numere vrei sa calculezi: ";
	cin >> total;


	for (int i = 0; i < total; i++) {

		cout << "Introduce un numar: " << i + 1 << " :";
		cin >> numarulcurent;
		suma += numarulcurent;
	}


	cout << "Media aritmetica: " << (suma / total) << endl;

	system("pause");
	return 0;
}
