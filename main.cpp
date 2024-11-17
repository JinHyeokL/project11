#include <iostream>
#include "GraphicEditor.h"
using namespace std;

int main() {
    GraphicEditor GE;
    bool run = true;
    cout << "그래픽 에디터입니다." << endl;

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
            cout << "잘못된 선택입니다." << endl;
            break;
        }
    }
    return 0;
}