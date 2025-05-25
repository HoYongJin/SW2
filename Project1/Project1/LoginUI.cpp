#include "LoginUI.h"

LoginUI::LoginUI(LoginControl* control) {
    this->control = control;
}

void LoginUI::startInterface(istream& in, ostream& out) {
    out << "2.1. ·Î±×ÀÎ\n";
}

void LoginUI::input_ID_PW(istream& in, ostream& out) {
    string inputId, inputPw;
    in >> inputId >> inputPw;
    control->login(inputId, inputPw, out);
}
