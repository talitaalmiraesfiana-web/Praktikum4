#include <iostream>
#include <iomanip> // Diperlukan untuk std::setw agar output rapi

using namespace std;

// Konstanta untuk ukuran matriks (4x4)
const int UKURAN = 4;

// Fungsi untuk menampilkan matriks
void tampilkanMatriks(int matriks[UKURAN][UKURAN], const string& nama) {
	cout << "Matriks " << nama << ":" << endl;
	for (int i = 0; i < UKURAN; i++) {
		for (int j = 0; j < UKURAN; j++) {
			// setw(4) digunakan untuk agar setiap elemen punya lebar 4 karakter, hasilnya lebih rapi
			cout << setw(4) << matriks[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	// 1. Deklarasi dan Inisialisasi Matriks A dan B
	int matriksA[UKURAN][UKURAN] = {
		{1,0,2,0},
		{0,1,0,1},
		{2,0,1,0},
		{0,2,0,1}
		
	};
	int matriksB[UKURAN][UKURAN] = {
		{1,1,1,1},
		{1,1,1,1},
		{2,2,2,2},
		{2,2,2,2}
	};
	
	// 2. Deklarasi Matriks Hasil (A x B)
	int hasilMatriks[UKURAN][UKURAN];

	// Inisialisasi semua elemen hasilMatriks dengan 0
	for (int i = 0; i < UKURAN; i++) {
		for (int j = 0; j < UKURAN; j++) {
			hasilMatriks[i][j] = 0;
		}
	}
	// --- Operasi Perkalian Matriks ---


	// i: Mengontrol baris Matriks A dan Matriks Hasil
	// j: Mengontrol kolom Matriks B dan Matriks Hasil
	// k: Mengontrol elemen kolom Matriks A dan elemen baris Matriks B (proses sum/akumulasi)

	for (int i = 0; i < UKURAN; i++) {
		for (int j = 0; j < UKURAN; j++) {
			for (int k = 0; k < UKURAN; k++) {

				hasilMatriks[i][j] += matriksA[i][k] * matriksB[k][j];
			}
		}
	}

	cout << "Nama   : Talita Almira Esfiana\n";
	cout << "NIM    : 25104410067\n";
	cout << "Prodi  : Teknik Informatika 1B\n";
	cout << "Tugas Praktikum 4\n\n";
	cout << "---Program Perkalian Matriks 4x4 ---" << endl;
	
	tampilkanMatriks(matriksA, "A");
	tampilkanMatriks(matriksB, "B");

	cout << "============================================\n";

	cout << "Matriks Hasil Perkalian (A x B):" << endl;
	tampilkanMatriks(hasilMatriks, "A x B");

	return 0;
}