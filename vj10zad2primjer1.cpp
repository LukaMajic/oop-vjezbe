#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
using namespace std;

struct point {
    double x;
    double y;
};

vector<point> upis_tocaka(const string& datoteka) {
    vector<point> points;

    ifstream ulaz(datoteka);
   

   
    istream_iterator<double> X(ulaz), Y;
    while (X != istream_iterator<double>()) {
        point t;
        t.x = *X++;
        t.y = *X++;
        points.push_back(t);
    }

    
    ulaz.close();

    return points;
}

int main() {
    
    string datoteka = "points.txt";

    
    vector<point> points = upis_tocaka(datoteka);

    
    cout << "tocke iz datoteke su " << datoteka << ":" << endl;
    for (const point& t : points) {
        cout << "tocka " << t.x << ", " << t.y  << endl;
    }

    return 0;
}
