#include <iostream>
#include "GraphicEditor.h"
using namespace std;

int main() {
    GraphicEditor GE;
    bool run = true;
    cout << "�׷��� �������Դϴ�." << endl;

    while (run) {
        switch (Start::selt()) {
        case 1:
            GE.create(Start::A1());
            break;
        case 2:
            GE.idel(Start::A2());
            break;
        case 3:
            GE.show();
            break;
        case 4:
            run = false;
            break;
        default:
            cout << "�߸��� �����Դϴ�." << endl;
            break;
        }
    }
    return 0;
}