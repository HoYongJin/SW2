#pragma once
#include "LogoutControl.h"
#include <ostream>

using namespace std;

class LogoutUI {
private:
    LogoutControl* control;

public:
    LogoutUI(LogoutControl* control);
    void startInterface(ostream& out);
	void clickLogout(ostream& out);
};
