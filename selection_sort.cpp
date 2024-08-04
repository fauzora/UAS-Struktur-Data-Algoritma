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
    int n = data.size();

    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (data[j].first < data[minIdx].first)
            {
                minIdx = j;
            }
        }
        swap(data[i], data[minIdx]);
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
