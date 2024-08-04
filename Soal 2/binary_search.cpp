// Nama : Chairil Fauzi Firmansyah
// NIM : 230401010024
// Kelas : IT201
// Matkul : Struktur Data dan Algoritma

// iostream adalah file header yang digunakan untuk operasi input output
#include <iostream>
// vector adalah file header yang digunakan untuk mengimplementasikan struktur data dinamis
#include <vector>

// menggunakan namespace std untuk mempersingkat penulisan kode
using namespace std;

// fungsi cariIndex digunakan untuk mencari indeks dari data yang berada di dalam vector arr
vector<int> cariIndex(const vector<int> &arr, int value)
{
    // mendeklarasikan vector listArrayDitemukan yang berisi indeks dari data yang ditemukan
    vector<int> listArrayDitemukan;
    // melakukan perulangan sebanyak data yang berada di dalam vector arr
    for (int i = 0; i < arr.size(); ++i)
    {
        // mengecek apakah data yang berada di dalam vector arr sama dengan value
        if (arr[i] == value)
        {
            // menambahkan indeks dari data yang ditemukan ke dalam vector listArrayDitemukan
            listArrayDitemukan.push_back(i + 1);
        }
    }
    // mengembalikan vector listArrayDitemukan
    return listArrayDitemukan;
}

int main()
{
    // mendeklarasikan vector arr yang berisi data yang akan dicari
    vector<int> arr = {19, 40, 10, 90, 2, 50, 60, 50, 1};
    // mendeklarasikan variabel value yang berisi data yang akan dicari
    int value;

    // menampilkan pesan input
    cout << "Input: ";
    // meminta input dari user
    cin >> value;

    // mendeklarasikan vector listArrayDitemukan yang berisi indeks dari data yang ditemukan
    vector<int> listArrayDitemukan = cariIndex(arr, value);

    // mengecek apakah vector listArrayDitemukan tidak kosong
    if (!listArrayDitemukan.empty())
    {
        // menampilkan pesan output
        cout << "Output: Angka " << value << " ada di indeks ke ";
        // melakukan perulangan sebanyak data yang berada di dalam vector listArrayDitemukan
        for (int i = 0; i < listArrayDitemukan.size(); ++i)
        {
            // menampilkan indeks dari data yang ditemukan
            if (i == listArrayDitemukan.size() - 1 && i != 0)
            {
                // menampilkan dan
                cout << "dan " << listArrayDitemukan[i];
            }
            // menampilkan indeks dari data yang ditemukan
            else
            {
                //  mengecek apakah i kurang dari ukuran dari vector listArrayDitemukan dikurangi 2 dan ukuran dari vector listArrayDitemukan lebih dari 1
                cout << listArrayDitemukan[i];
                if (i < listArrayDitemukan.size() - 2 &&
                    listArrayDitemukan.size() > 1)
                {
                    // menampilkan koma
                    cout << ", ";
                }
                // mengecek apakah i sama dengan ukuran dari vector listArrayDitemukan dikurangi 2
                else if (i == listArrayDitemukan.size() - 2)
                {
                    // menampilkan spasi
                    cout << " ";
                }
            }
        }
        // menampilkan baris baru
        cout << endl;
    }
    // mengecek apakah vector listArrayDitemukan kosong
    else
    {
        // menampilkan pesan output
        cout << "Output: Angka " << value << " tidak ada dalam array" << endl;
    }

    // mengembalikan 0
    return 0;
}
