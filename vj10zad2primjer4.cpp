#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};


void zamjena(vector<Point>& tocke, double udaljenost, const Point& novaTocka) {
    for (auto& t : tocke) {
        double udaljenost = sqrt(t.x * t.x + t.y * t.y);  
        if (abs(udaljenost - udaljenost) < 1) {  
            t = novaTocka; 
        }
    }
}

int main() {
   
    ifstream ulaz("points.txt");

    vector<Point> tocke;
    double x, y;
    while (ulaz >> x) {
        ulaz >> y;
        Point t = {x,y};
        tocke.push_back(t);
    }

    
    ulaz.close();

    
    double udaljenost;
    Point nova_tocka;

    cout << "unesi udaljenost i koordinate nove tocke: ";
    cin >> udaljenost >> nova_tocka.x >> nova_tocka.y;

   
    zamjena(tocke, udaljenost, nova_tocka);

    
    cout << "nove tocke su" << endl;
    for (const auto& t : tocke) {
        cout << t.x << ", " << t.y << endl;
    }

    return 0;
}
