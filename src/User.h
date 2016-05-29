//
// Created by 墨林 on 16/5/24.
//

#ifndef STUDENT_PERSONAL_FINANCIAL_MANAGEMENT_USERSYSTEM_H
#define STUDENT_PERSONAL_FINANCIAL_MANAGEMENT_USERSYSTEM_H
#include <string>
#include <fstream>
#include "Localtime.h"

/* XXX: should be composition, not inheritance */
class User:Localtime{
public:
	User();
	bool userLogin();
	void createUser();
	bool initializeFile();

	/* TODO: 添加以user number查找user的方法 */
	int getUserNumber() const { return userNumber; }
private:
	std::string Username = "null";
	Localtime createDate;
	std::string Password;
	std::ifstream loadUser;
	int userNumber = 1;
	std::string idCode;

};
#endif //STUDENT_PERSONAL_FINANCIAL_MANAGEMENT_USERSYSTEM_H