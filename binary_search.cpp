#include <iostream>
#include <vector>

using namespace std;

vector<int> cariIndex(const vector<int> &arr, int value)
{
    vector<int> listArrayDitemukan;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] == value)
        {
            listArrayDitemukan.push_back(i + 1);
        }
    }
    return listArrayDitemukan;
}

int main()
{
    vector<int> arr = {19, 40, 10, 90, 2, 50, 60, 50, 1};
    int value;

    cout << "Input: ";
    cin >> value;

    vector<int> listArrayDitemukan = cariIndex(arr, value);

    if (!listArrayDitemukan.empty())
    {
        cout << "Output: Angka " << value << " ada di indeks ke ";
        for (int i = 0; i < listArrayDitemukan.size(); ++i)
        {

            if (i == listArrayDitemukan.size() - 1 && i != 0)
            {
                cout << "dan " << listArrayDitemukan[i];
            }
            else
            {
                cout << listArrayDitemukan[i];
                if (i < listArrayDitemukan.size() - 2 &&
                    listArrayDitemukan.size() > 1)
                {
                    cout << ", ";
                }
                else if (i == listArrayDitemukan.size() - 2)
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    else
    {
        cout << "Output: Angka " << value << " tidak ada dalam array" << endl;
    }

    return 0;
}
