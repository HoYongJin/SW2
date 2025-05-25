#pragma once
#include "Member.h"
#include <string>
#include <ostream>

using namespace std;

class SignUpControl {
public:
    void signUp(const string& inputId, const string& inputPw, const string& inputNumber, ostream& out);
};
