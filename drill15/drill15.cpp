/*
    g++ drill15.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o drill15 `fltk-config --ldflags --use-images` -std=c++11
*/
#include "Simple_window.h"
#include "Graph.h"

double one(double) { return 1; }
double square(double x) { return x*x; }
double slope(double x) { return x/2; }
double sloping_cos(double x) { return cos(x) + slope(x); }

int main()
{
    using namespace Graph_lib;

    int xmax = 600;
    int ymax = 600;                     

    int x_orig = xmax/2;
    int y_orig = ymax/2;

    int rmin = -10;
    int rmax = 11;

    int n_points = 400;

    Simple_window win {Point{100,100}, xmax, ymax, "Function graphs"};
    
    Point origo {x_orig, y_orig};

    int xlenght = 400;
    int ylenght = 400;

    Axis x (Axis::x, Point{100,300}, xlenght,20,"1 == 20 pixels");
    Axis y (Axis::y, Point{300,500}, ylenght,20,"1 == 20 pixels");

    x.set_color(Color::red);
    y.set_color(Color::red);
    
    int xscale = 20;
    int yscale = 20;

    Function s (one, rmin, rmax, origo, n_points, xscale, yscale);
    Function sl (slope, rmin, rmax, origo, n_points, xscale, yscale);
    Function sq (square, rmin, rmax, origo, n_points, xscale, yscale);
    Function cos_func ( [] (double x) { return cos(x); },
                        rmin, rmax, origo, n_points, xscale, yscale);
    Function slc (sloping_cos, rmin, rmax, origo, n_points, xscale, yscale );

    cos_func.set_color(Color::blue);

    Text t {Point{100, 380}, "x/2"};
    t.set_font(Font::times_bold);
    t.set_font_size(16);

    win.attach(t);
    win.attach(s);
    win.attach(sl);
    win.attach(cos_func);
    win.attach(sq);
    win.attach(slc);
    win.attach(x);
    win.attach(y);

    win.wait_for_button();
}