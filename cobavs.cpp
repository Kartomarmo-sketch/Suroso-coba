#include <iostream>
using namespace std;
void banyakPecahan(long uang, long pecahan[], int lembar[], int i);
int main()
{
	long uang, pecahan[9]={50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100};
	int lembar[9], i=0;
	cout << "jumlah uang kembali: ";
	cin >> uang;
	cout << "pecahan uang kembali: "<<endl;
	banyakPecahan(uang, pecahan, lembar, i);
}
void banyakPecahan(long uang, long pecahan[], int lembar[], int i){
	lembar[0] = uang / pecahan[0];
	for (i = 0; i<9;i++){
	int sisa = uang%pecahan[i];
	lembar[i+1] = sisa/pecahan[i+1];
	uang = sisa;
	cout << lembar[i] << " lembar " << pecahan[i] << endl;
	}
}