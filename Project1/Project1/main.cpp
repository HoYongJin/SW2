#include <iostream>
#include <string>
#include <fstream>
#include "SignUpControl.h"
#include "SignUpUI.h"
#include "LoginControl.h"
#include "LoginUI.h"
#include "LogoutControl.h"
#include "LogoutUI.h"
#include "RegisterBikeControl.h"
#include "RegisterBikeUI.h"
#include "RentBikeControl.h"
#include "RentBikeUI.h"	
#include "RentInfoControl.h"
#include "RentInfoUI.h"
#include "ExitControl.h"
#include "ExitUI.h"

#define MAX_STRING 32
#define	INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"	

ifstream in_fp;
ofstream out_fp;

void doTask();
void signUp();
void login();
void logout();
void registerBike();
void rentBike();
void showRentInfo();
void exitProgram(int& exitFlag);



int main() {
	in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);
	
	std::cout << "Program finished successfully." << std::endl;

	doTask();
	std::cout << "Program finished successfully." << std::endl;

}

void doTask() {
	int menuLevel_1 = 0, menuLevel_2 = 0;
	int exitFlag = 0;
	while (!exitFlag) {
		in_fp >> menuLevel_1 >> menuLevel_2;

		switch (menuLevel_1) {
		case 1:
			switch (menuLevel_2) {
			case 1: // Sign Up
				signUp();
				break;
			}
			break;

		case 2: // Login
			switch (menuLevel_2) {
			case 1: // Login
				login();
				break;
			case 2: //Logout
				logout();
				break;
			}
			break;

		case 3: 
			switch (menuLevel_2) {
			case 1: // Register Bike
				registerBike();
				break;
			}
			break;

		case 4:
			switch (menuLevel_2) {
			case 1: // Rent Bike
				rentBike();
				break;
			}
			break;

		case 5:
			switch (menuLevel_2) {
			case 1: // Show Rent Info
				showRentInfo();
				break;
			}
			break;

		case 6: // Exit
			switch (menuLevel_2) {
			case 1:
				exitProgram(exitFlag);				
				break;
			}
			break;
		}
	}
}


void signUp() {
	SignUpControl control;
	SignUpUI ui(&control);
	ui.startInterface(in_fp, out_fp);
	ui.inputSignUpInfo(in_fp, out_fp);
}

void login() {
	LoginControl control;
	LoginUI ui(&control);
	ui.startInterface(in_fp, out_fp);
	ui.input_ID_PW(in_fp, out_fp);
}

void logout() {
	LogoutControl control;
	LogoutUI ui(&control);
	ui.startInterface(out_fp);
	ui.clickLogout(out_fp);
}

void registerBike() {
	RegisterBikeControl control;
	RegisterBikeUI ui(&control);
	ui.startInterface(in_fp, out_fp);
	ui.inputBikeInfo(in_fp, out_fp);
}

void rentBike() {
	RentBikeControl control;
	RentBikeUI ui(&control);
	ui.startInterface(in_fp, out_fp);
	ui.selectBike(in_fp, out_fp);
}

void showRentInfo() {
	RentInfoControl control;
	RentInfoUI ui(&control);
	ui.startInterface(out_fp);
	ui.bikeRentInfo(out_fp);
}

void exitProgram(int& exitFlag) {
	ExitControl control;
	ExitUI ui(&control);
	ui.startInterface();
	ui.clickExit(exitFlag, out_fp);
	in_fp.close();
	out_fp.close();
}
