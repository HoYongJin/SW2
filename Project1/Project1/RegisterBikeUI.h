#pragma once
#include "RegisterBikeControl.h"
#include <istream>
#include <ostream>
#include <string>

using namespace std;

class RegisterBikeUI {
private:
    RegisterBikeControl* control;

public:
    RegisterBikeUI(RegisterBikeControl* control);
    void startInterface(istream& in, ostream& out);
    void inputBikeInfo(istream& in, ostream& out);
};
