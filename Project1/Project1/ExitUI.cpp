#include "ExitUI.h"

ExitUI::ExitUI(ExitControl* control) {
    this->control = control;
}

void ExitUI::startInterface() {}

void ExitUI::clickExit(int& exitFlag, ostream& out) {
    control->exit(exitFlag, out);
}
