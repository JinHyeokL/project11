#include "Shape.h"
#include "Start.h"

class GraphicEditor {
    Shape* pStart;
    Shape* pLast;
    int count;
public:
    GraphicEditor();
    void create(int num);
    void idel(int num);
    void show();
};
