#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2) {
    double x = max(0.0, min(r1.x + r1.w, r2.x + r2.w) - max(r1.x, r2.x));
    double y1 = r1.y - r1.h;
    double y2 = r2.y - r2.h;
    double y = max(0.0, min(r1.y, r2.y) - max(y1, y2));
    return x * y;
}