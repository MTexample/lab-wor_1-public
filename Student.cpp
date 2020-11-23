#include "Student.hpp"
#include <iostream>

Student::Student() {
    setUserName("test");
    setUserEmail("test@mai.ru");
}

Student::Student(std::string l_userName, std::string l_userEmail, std::string l_studentGroup) : User(l_userName, l_userEmail) {
    m_studentGroup = l_studentGroup;
}

void Student::print() {
    User::print();
    std::cout << "------" << std::endl;
    std::cout << "User name: " << getUserName() << std::endl;
    std::cout << "User email: " << getUserEmail() << std::endl;
    std::cout << "User group: " << m_studentGroup << std::endl;
}