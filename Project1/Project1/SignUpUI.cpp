#include "SignUpUI.h"

SignUpUI::SignUpUI(SignUpControl* control) {
    this->control = control;
}

void SignUpUI::startInterface(istream& in, ostream& out) {
    out << "1.1. ȸ������\n";  
}

void SignUpUI::inputSignUpInfo(istream& in, ostream& out) {
    string inpuId, inputPw, inputNumber;
    in >> inpuId >> inputPw >> inputNumber;
    control->signUp(inpuId, inputPw, inputNumber, out);  
}