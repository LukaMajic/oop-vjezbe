#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void izbris(vector<int>& v, int n)
{
    int i = 0;
    while (i < v.size())
    {
        if (v[i] == n)
        {
            v[i] = v.back();
            v.pop_back();
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    vector<int> v;
    int n;
    cout << "unesi brojeve vektora i 0 za kraj: \n";
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        v.push_back(n);
    }

    cout << "unesi broj za izbrisat: ";
    cin >> n;

    izbris(v, n);

    cout << "novi vektor je: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
