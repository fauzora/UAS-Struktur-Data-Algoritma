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

// fungsi printData digunakan untuk menampilkan data yang berada di dalam vector data
void printData(const vector<pair<string, string>> &data)
{
    // melakukan perulangan sebanyak data yang berada di dalam vector data
    for (const auto &obj : data)
    {
        // menampilkan data yang berada di dalam vector data
        cout << obj.first << "\t" << obj.second << endl;
    }
}

// fungsi sort digunakan untuk mengurutkan data yang berada di dalam vector data
void sort(vector<pair<string, string>> &data)
{
    // mendeklarasikan variabel n yang berisi ukuran dari data
    int size = data.size();

    // melakukan perulangan sebanyak data yang berada di dalam vector data
    for (int i = 1; i < size; ++i)
    {
        // mendeklarasikan variabel key yang berisi data yang berada di dalam vector data
        pair<string, string> key = data[i];
        // mendeklarasikan variabel j yang berisi i - 1
        int j = i - 1;

        // melakukan perulangan sebanyak data yang berada di dalam vector data
        while (j >= 0 && data[j].first > key.first)
        {
            // menggeser data yang berada di dalam vector data
            data[j + 1] = data[j];
            // mengurangi nilai j
            --j;
        }
        // mengganti data yang berada di dalam vector data
        data[j + 1] = key;
    }
}

int main()
{
    // mendeklarasikan vector data yang berisi data yang akan diurutkan
    vector<pair<string, string>> data = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Puwokerto"},
        {"Zaki", "Madiun"}};

    // menampilkan data sebelum diurutkan
    cout << "Data sebelum diurutkan :" << endl;
    // memanggil fungsi printData
    printData(data);

    // mengurutkan data
    sort(data);

    // menampilkan data setelah diurutkan
    cout << "\nData setelah diurutkan :" << endl;
    printData(data);

    // mengembalikan nilai 0
    return 0;
}
