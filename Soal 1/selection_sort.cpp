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
    // mendeklarasikan variabel length yang berisi ukuran dari data
    int length = data.size();

    // melakukan perulangan sebanyak data yang berada di dalam vector data
    for (int i = 0; i < length - 1; ++i)
    {
        // mendeklarasikan variabel minIndex yang berisi i
        int minIndex = i;

        // melakukan perulangan sebanyak data yang berada di dalam vector data
        for (int j = i + 1; j < length; ++j)
        {
            // mengecek apakah data yang berada di dalam vector data lebih kecil dari data yang berada di dalam vector data
            if (data[j].first < data[minIndex].first)
            {
                // mengganti nilai minIndex dengan index pertama
                minIndex = j;
            }
        }

        // mengecek apakah minIndex tidak sama dengan i
        if (minIndex != i)
        {
            // melakukan pertukaran data yang berada di dalam vector data
            auto temp = data[i];
            // mengganti data yang berada di dalam vector data
            data[i] = data[minIndex];
            // mengganti data yang berada di dalam vector data
            data[minIndex] = temp;
        }
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
    // memanggil fungsi printData
    printData(data);

    // mengembalikan nilai 0
    return 0;
}
