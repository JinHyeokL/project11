#include <iostream>
#include "GraphicEditor.h"
using namespace std;

GraphicEditor::GraphicEditor() : pStart(NULL), pLast(NULL), count(0) {}

void GraphicEditor::create(int num) {
    switch (num) {
    case 1:
        if (count == 0) {
            pStart = new Line();
            pLast = pStart;
        }
        else {
            pLast = pLast->add(new Line());
        }
        count++;
        break;

    case 2:
        if (count == 0) {
            pStart = new Circle();
            pLast = pStart;
        }
        else {
            pLast = pLast->add(new Circle());
        }
        count++;
        break;

    case 3:
        if (count == 0) {
            pStart = new Rect();
            pLast = pStart;
        }
        else {
            pLast = pLast->add(new Rect());
        }
        count++;
        break;

    default:
        cout << "�߸��� �Է��Դϴ�." << endl;
        break;
    }
}

void GraphicEditor::idel(int num) {
    if (num >= count || num < 0) {
        cout << "�ε����� �߸� �Է��ϼ̽��ϴ�." << endl;
        return;
    }

    Shape* p = pStart;
    Shape* del = pStart;

    for (int i = 0; i < num; i++) {
        p = del;
        del = del->getNext();
    }

    if (num == 0) {
        pStart = del->getNext();
    }
    else {
        p->setNext(del);
    }
    if (pStart == NULL) {
        pLast = NULL;
    }
    else if (count == 1) {
        pLast = pStart;
    }   
    delete del;
    count--;
}

void GraphicEditor::show() {
    Shape* p = pStart;
    for (int i = 0; i < count; i++) {
        cout << i << ": ";
        p->paint();
        p = p->getNext();
    }
}
