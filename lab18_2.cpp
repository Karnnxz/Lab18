#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r1, Rect *r2){
    double x = max(0.0, min(r1->x + r1->w, r2->x + r2->w) - max(r1->x, r2->x));
    double ytop1 = r1->y;
    double ytop2 = r2->y;
    double ybot1 = r1->y - r1->h;
    double ybot2 = r2->y - r2->h;
    double y = max(0.0, min(ytop1, ytop2) - max(ybot1, ybot2));
    return x * y;
}