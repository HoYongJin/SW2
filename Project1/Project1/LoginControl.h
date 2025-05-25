#pragma once
#include "Member.h"
#include <string>
#include <ostream>

using namespace std;

class LoginControl {
public:
    void login(const string& inputId, const string& inputPw, ostream& out);
};
