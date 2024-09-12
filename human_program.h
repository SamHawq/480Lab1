#ifndef POINT_HUMAN_H
#define POINT_HUMAN_H
#include <cstring>
#include <iostream>
using namespace std;


class Point{
    private:
        double x;     // x coordinate of a location on Cartisian Plain
        double y;     // y coordinate of a location on Cartisian Plain
    public:
        Point(double a = 0, double b = 0); //ctor
        void set_x(double a);    //setter
        void set_y(double a);    //setter
        double get_x() const;    //getter
        double get_y() const;    //getter
        ~Point();
};

class Human {
    protected:
        Point location;   // Location of an object of Human on a Cartisian Plain
        char *name;       // Human's name
    public:
        Human();    //default ctor
        Human(const char* nam, double x, double y); //ctor with const char* , double x, doule y args
        ~Human(); //destructor

        char* get_name() const;         
        void set_name(const char* name);
    
        Point get_point() const;
        void set_point(double x, double y);
        
        void display() const;
};

#endif