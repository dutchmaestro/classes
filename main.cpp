#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
        Rectangle ();
        Rectangle (int, int);
        int area (void) {return width*height;}
};

Rectangle::Rectangle () {
    width=5;
    height=5;
}

Rectangle::Rectangle (int x, int y) {
    width=x;
    height=y;
}

int main() {
    Rectangle rect(2,2);
    Rectangle rect2;
    std::cout << rect.area() << endl;
    std::cout << rect2.area();
    return 0;
}