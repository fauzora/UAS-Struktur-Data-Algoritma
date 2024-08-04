#include <iostream>
#include <vector>

using namespace std;

void printData(const vector<pair<string, string>> &data)
{
    for (const auto &obj : data)
    {
        cout << obj.first << "\t" << obj.second << endl;
    }
}

void sort(vector<pair<string, string>> &data)
{
    int n = data.size() - 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (data[j].first > data[j + 1].first)
            {
                swap(data[j], data[j + 1]);
            }
        }
    }
}

int main()
{
    vector<pair<string, string>> data = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Puwokerto"},
        {"Zaki", "Madiun"}};

    cout << "Data sebelum diurutkan :" << endl;
    printData(data);

    sort(data);

    cout << "\nData setelah diurutkan :" << endl;
    printData(data);

    return 0;
}
