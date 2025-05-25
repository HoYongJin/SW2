#pragma once
#include "SignUpControl.h"
#include <string>
#include <istream>
#include <ostream>

using namespace std;

class SignUpUI {
private:
    SignUpControl* control;  // Control 클래스 참조

public:
    SignUpUI(SignUpControl* control);  // 생성자에서 연결
    void startInterface(istream& in, ostream& out);
    void inputSignUpInfo(istream& in, ostream& out);  // UI → Control 호출 포함
};