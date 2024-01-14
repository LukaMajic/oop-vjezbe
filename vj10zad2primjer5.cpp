#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Point {
    double x;
    double y;
};


void obrnuti_redoslijed_i_ispis(const string& ulaz) {
    ifstream file(ulaz);

    vector<Point> tocke;

    double x, y;
    while (file >> x) {
        file >> y;
        tocke.push_back({x,y});
    }

    file.close();


    
    vector<Point> obrnuti = tocke;
    reverse(obrnuti.begin(), obrnuti.end());

    
    cout << "obrnuti red tocaka je " << endl;
    for (const auto& point : obrnuti) {
        cout << point.x << ", " << point.y << endl;
    }
}


int main() {
    obrnuti_redoslijed_i_ispis("points.txt");

    return 0;
}
