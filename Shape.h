#include <iostream>
using namespace std;

class Shape {
    Shape* next;
protected:
    virtual void draw() = 0;
public:
    Shape() { next = NULL; }
    virtual ~Shape() { }
    void paint() { draw(); }
    Shape* add(Shape* p) { this->next = p; return p; }
    Shape* getNext() { return next; }
    void setNext(Shape* p) { this->next = p->getNext(); }
};

class Circle : public Shape {
protected:
    virtual void draw() {
        cout << "Circle" << endl;
    }
};

class Rect : public Shape {
protected:
    virtual void draw() {
        cout << "Rectangle" << endl;
    }
};

class Line : public Shape {
protected:
    virtual void draw() {
        cout << "Line" << endl;
    }
};

