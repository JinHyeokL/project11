#include <iostream>
#include "Start.h"
using namespace std;

int Start::selt() {
    int n;
    cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
    cin >> n;
    return n;
}

int Start::A1() {
    int n;
    cout << "��:1, ��:2, �簢��:3 >> ";
    cin >> n;
    return n;
}

int Start::A2() {
    int n;
    cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
    cin >> n;
    return n;
}
