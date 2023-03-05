#include <iostream>
#include "circle.h"
using namespace std;
int main() {
    float r1, x1, y1;
    cout << "Enter the radius and coordinates for circle 1: ";
    cin >> r1 >> x1 >> y1;
    Circle c1(r1, x1, y1);

    float r2, x2, y2;
    cout << "Enter the radius and coordinates for circle 2: ";
    cin >> r2 >> x2 >> y2;
    Circle c2(r2, x2, y2);

    float r3, x3, y3;
    cout << "Enter the radius and coordinates for circle 3: ";
    cin >> r3 >> x3 >> y3;
    Circle c3(r3, x3, y3);

    cout << "Circle 1 - radius = " << c1.get_radius() << ", center = (" << c1.get_x_center() << ", " << c1.get_y_center() << ")" << std::endl;
    cout << "Circle 2 - radius = " << c2.get_radius() << ", center = (" << c2.get_x_center() << ", " << c2.get_y_center() << ")" << std::endl;
    cout << "Circle 3 - radius = " << c3.get_radius() << ", center = (" << c3.get_x_center() << ", " << c3.get_y_center() << ")" << std::endl;

    cout << "Area of circle 1 = " << c1.square() << std::endl;
    cout << "Area of circle 2 = " << c2.square() << std::endl;
    cout << "Area of circle 3 = " << c3.square() << std::endl;

    cout << "Circle 1 can be described around triangle with sides (6,7,4) = " << c1.triangle_around(6, 7, 4) << std::endl;
    cout << "Circle 1 can be inscribed with triangle with sides (6, 4, 5) = " << c1.triangle_in(6, 4, 5) << std::endl;

    cout << "Circle 2 can be described around triangle with sides (8.6285, 8.6285, 9) = " << c2.triangle_around(8.6285, 8.6285, 9) << std::endl;
    cout << "Circle 2 can be inscribed with triangle with sides (8.6285, 8.6285, 9) = " << c2.triangle_in(8.6285, 8.6285, 9) << std::endl;

    cout << "Circle 3 can be described around triangle with sides (5, 5, 5) = " << c3.triangle_around(5, 5, 5) << std::endl;
    cout << "Circle 3 can be inscribed with triangle with sides (5, 5, 5) = " << c3.triangle_in(5, 5, 5) << std::endl;

    float r4, x4, y4;
    cout << "Enter the radius and coordinates for a new circle to check if it intersects with circle 1: ";
    cin >> r4 >> x4>>y4;
    bool intersects = c1.check_circle(r4, x4, y4);
    if (intersects) {
        cout << "The new circle intersects with circle 1" << std::endl;
    }
    else {
        cout << "The new circle does not intersect with circle 1" << std::endl;
    }

    return 0;
}
