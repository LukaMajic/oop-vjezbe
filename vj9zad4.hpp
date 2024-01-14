
#include <iostream>
#include <cmath>
using namespace std;

template<typename T>
class point {
public:
	T x, y;

	point(T x, T y) : x(x), y(y) {

	}
};

template <typename T>
T distance(const point<T>& p1, const point<T>& p2) {
    T dx = p1.x - p2.x;
    T dy = p1.y - p2.y;
    return std::sqrt(dx * dx + dy * dy);
}

template <typename T>
ostream& operator<<(std::ostream& os, const point<T>& p) {
    os << "" << p.x << "," << p.y << ")";
    return os;
}
