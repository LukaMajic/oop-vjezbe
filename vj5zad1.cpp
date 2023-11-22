#include "vj5zad1.hpp"

int main()
{
    int br_igraca;
    cout << "unesi ili 2 ili 4 igraca  ";
    cin >> br_igraca;


    if (br_igraca != 2 && br_igraca != 4)
    {
        cout << "treba biti 2 ili 4 igraca" << endl;
        return 0;
    }
    vector<igrac> igraci;
    for (int i = 0; i < br_igraca; i++)
    {
        string ime;
        cout << "unesite ime igraca: ";
        cin >> ime;
        igraci.push_back(igrac(ime));
    }


    mac mac;
    mac.promijesaj();
    mac.podijeli(igraci);


    for (int i = 0; i < igraci.size(); i++)
    {
        igraci[i].akuzuj();
        cout << "igrac " << igraci[i].ime << " ima " << igraci[i].ruka.size() << "karata" << endl;
        cout << "igrac " << igraci[i].ime << " ima " << igraci[i].bodovi << "bodova" << endl;
    }
    return 0;
}