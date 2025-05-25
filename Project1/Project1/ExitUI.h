#pragma once
#include "ExitControl.h"
#include <ostream>
using namespace std;

class ExitUI {
private:
    ExitControl* control;

public:
    ExitUI(ExitControl* control);
    void startInterface();
    void clickExit(int& exitFlag, ostream& out);
};
