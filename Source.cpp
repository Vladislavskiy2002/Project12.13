// Idea Philipp Siedler.
// Write a program that draws star-shaped patterns by connecting dots. 
// lying on a superellipse. Let parameters a, b, m, n and N be introduced as arguments.

#define _USE_MATH_DEFINES
#include "Simple_window.h"
#include "Graph.h"
#include <cmath>
using namespace Graph_lib;

int main()
try
{
    Point tl(100, 100);
    Simple_window win(tl, 800, 650, "Superellipses");
    win.wait_for_button();

    Point center(win.x_max() / 3, win.y_max() / 3);

    double a = 100;
    double y;
    double b = 100;
    double n; // 1/2; 3/2; 2; 4;

    n = 1.5;

    Graph_lib::Closed_polyline supEllipse_1;
    supEllipse_1.set_color(Color::black);

    for (int x = -100; x < 100; x++) {
        y = b * pow(1 - pow(abs(x / a), n), 1 / n);
        supEllipse_1.add(Point(x + center.x, y + center.y));
        supEllipse_1.set_fill_color(Color::yellow);
    }

    for (int x = 100; x > -100; x--) {
        y = b * pow(1 - pow(abs(x / a), n), 1 / n);
        y = -y;
        supEllipse_1.add(Point(x + center.x, y + center.y));
        supEllipse_1.set_color(Color::red);
    }

    win.attach(supEllipse_1);
    win.wait_for_button();

    Text t1{ Point{win.x_max() / 3, win.y_max() / 3}, "n = 1.5;" };
    win.attach(t1);
    win.wait_for_button();

    Point center_2(win.x_max() / 3 * 2, win.y_max() / 3);
    n = 0.5;

    Graph_lib::Closed_polyline supEllipse_2;
    supEllipse_2.set_color(Color::black);

    for (int x = -100; x < 100; x++) {
        y = b * pow(1 - pow(abs(x / a), n), 1 / n);
        supEllipse_2.add(Point(x + center_2.x, y + center_2.y));
        supEllipse_2.set_fill_color(Color::white);
    }

    for (int x = 100; x > -100; x--) {
        y = b * pow(1 - pow(abs(x / a), n), 1 / n);
        y = -y;
        supEllipse_2.add(Point(x + center_2.x, y + center_2.y));
        supEllipse_2.set_color(Color::green);
    }

    win.attach(supEllipse_2);
    win.wait_for_button();

    Text t2{ Point{win.x_max() / 3 * 2, win.y_max() / 3}, " n = 0.5" };
    win.attach(t2);
    win.wait_for_button();

    Point center_3(win.x_max() / 3, win.y_max() / 3 * 2);
    n = 2;

    Graph_lib::Closed_polyline supEllipse_3;
    supEllipse_3.set_color(Color::black);

    for (int x = -100; x < 100; x++) {
        y = b * pow(1 - pow(abs(x / a), n), 1 / n);
        supEllipse_3.add(Point(x + center_3.x, y + center_3.y));
        supEllipse_3.set_fill_color(Color::black);
    }

    for (int x = 100; x > -100; x--) {
        y = b * pow(1 - pow(abs(x / a), n), 1 / n);
        y = -y;
        supEllipse_3.add(Point(x + center_3.x, y + center_3.y));
        supEllipse_3.set_color(Color::white);
    }

    win.attach(supEllipse_3);
    win.wait_for_button();

    Text t3{ Point{win.x_max() / 3, win.y_max() / 3 * 2}, " n = 2" };
    win.attach(t3);
    win.wait_for_button();

    Point center_4(win.x_max() / 3 * 2, win.y_max() / 3 * 2);
    n = 4;

    Graph_lib::Closed_polyline supEllipse_4;
    supEllipse_4.set_color(Color::black);

    for (int x = -100; x < 100; x++) {
        y = b * pow(1 - pow(abs(x / a), n), 1 / n);
        supEllipse_4.add(Point(x + center_4.x, y + center_4.y));
        supEllipse_4.set_fill_color(Color::red);
    }

    for (int x = 100; x > -100; x--) {
        y = b * pow(1 - pow(abs(x / a), n), 1 / n);
        y = -y;
        supEllipse_4.add(Point(x + center_4.x, y + center_4.y));
        supEllipse_4.set_color(Color::blue);
    }

    win.attach(supEllipse_4);
    win.wait_for_button();

    Text t4{ Point{win.x_max() / 3 * 2, win.y_max() / 3 * 2}, " n = 4" };
    win.attach(t4);
    win.wait_for_button();
}
catch (exception & e) {
    cout << e.what() << endl;
    return 1;
}
catch (...) {
    cout << "Exiting" << endl;
    return 2;
}