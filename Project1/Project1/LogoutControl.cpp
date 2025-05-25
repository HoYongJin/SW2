#include "LogoutControl.h"

void LogoutControl::logout(ostream& out) {
    out << "> " << Member::getMemberId() << "\n\n";
    Member::delCurUser();
}
