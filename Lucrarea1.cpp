#include<iostream>
using namespace std;

static void afis_binar(unsigned int n, int nb)
{
	system("COLOR 0E");
	int i, k;
	char val_b[32];
	if ((n > 0) && (n <= 255))
		k = 8;
	if ((n > 255) && (n <= 65535))
		k = 16;
	if ((n > 65535) && (n <= 2147483646))
		k = 32;
	if (nb > 0)
		k = nb;
	if (n > 2147483646) {
		k = 0;
		cout << "\nNumar prea mare";
	}
	for (i = 0; i < k; i++) {
		if (n % 2 == 0)
			val_b[k - 1 - i] = '0';
		else
			val_b[k - 1 - i] = '1';
		n = n / 2;
	}
	// afisare binara
	for (i = 0; i < k; i++) {
		cout << val_b[i] << " ";
	}
	// prompter pe prima pozitie
	for (i = 0; i < 2 * k + 1; i++) {
		cout << "\b";
	}
}
int main(void)
{
	int n;
	double n1 = 9.82, n2 = 10, n3 = 9.45, n4 = 10, n5 = 9.99, m;
	char materie[80] = "Programare si limbaje de programare";
	string num, prenum;
	cout << "\n\t Calculator de medie \n\n";
	cout << "\t Materia : " << materie;
	cout << "\n\n\t Nume : ";
	cin >> num;
	cout << "\n\t Prenume : ";
	cin >> prenum;
	cout << "\n\t Numele Complet : " << num + " " + prenum;
	cout << "\n NOTE : ";
	cout << "\n\t Lucrarea 1 : "<< n1;
	cout << "\n\t Lucrarea 2 : "<< n2;
	cout << "\n\t Lucrarea 3 : "<< n3;
	cout << "\n\t Lucrarea 4 : "<< n4;
	cout << "\n\t Lucrarea 5 : "<< n5;
	cout << "\n\n\t Media : ";
	m = (n1 + n2 + n3 + n4 + n5) / 5;
	cout << m;
	cout << "\n\n\t Nota finala : ";
	if (int(m + 0.5) > int(m))
		n = int(m + 1);
	else
		n = int(m);
	cout << n;
	cout << " \n\n\t Afisarea binara a notei este : ";
	cout << "\n\n\t";
	afis_binar(n, 8);
	cin.ignore();
	cin.get();
	return 0;
}
