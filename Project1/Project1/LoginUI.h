#pragma once
#include "LoginControl.h"
#include <string>
#include <istream>
#include <ostream>

using namespace std;

class LoginUI {
private:
    LoginControl* control;

public:
    LoginUI(LoginControl* control);
    void startInterface(istream& in, ostream& out);
    void input_ID_PW(istream& in, ostream& out);
};