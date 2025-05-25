#include "LogoutUI.h"

LogoutUI::LogoutUI(LogoutControl* control) {
    this->control = control;
}

void LogoutUI::startInterface(ostream& out) {
    out << "2.2. �α׾ƿ�\n";
}

void LogoutUI::clickLogout(ostream& out) {
    control->logout(out);
}