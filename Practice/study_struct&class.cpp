#include <iostream>
using namespace std;

class Circle {
private:
    int radius;
public:
    Circle();
    Circle(int radius) {
        this->radius = radius;
    };
    ~Circle();
    double getArea();


    void print() {
        cout << radius << endl;
    }

};
struct rect {
    int x;
    int y;
    void total(int x, int y) {
        int total = x*2+y*2;
        cout << total << endl;
    }
};
Circle::Circle() {
    radius = 1;
    cout << radius << endl;
}

/*    Circle::Circle(int r){ // 재선언 불가, 택 중 1
        radius = r;
        cout << radius << endl;
        }*/
Circle::~Circle() {
    cout << radius << endl;
}
double Circle::getArea() {
    return 3.14*radius*radius;
}

int main() {
    Circle c1(1);
    c1.print();
    Circle c2(20);
    c2.print();

    rect rect1;
    rect1.x;
    rect1.y;

    rect1.total(3,5);
    return 0;
}
