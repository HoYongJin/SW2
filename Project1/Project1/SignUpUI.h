#pragma once
#include "SignUpControl.h"
#include <string>
#include <istream>
#include <ostream>

using namespace std;

class SignUpUI {
private:
    SignUpControl* control;  // Control Ŭ���� ����

public:
    SignUpUI(SignUpControl* control);  // �����ڿ��� ����
    void startInterface(istream& in, ostream& out);
    void inputSignUpInfo(istream& in, ostream& out);  // UI �� Control ȣ�� ����
};