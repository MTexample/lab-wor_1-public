#include "User.hpp"
#include <iostream>

User::User() {
}

User::User(std::string l_userName) {
    m_userName = l_userName;
}

User::User(std::string l_userName, std::string l_userEmail) {
    m_userName = l_userName;
    m_userEmail = l_userEmail;
}

User::~User() {

}

void User::setUserName(std::string l_userName) {
    m_userName = l_userName;
}

void User::setUserEmail(std::string l_userEmail) {
    m_userEmail = l_userEmail;
}


void User::print() {
    std::cout << "user_name: " << m_userName << std::endl;
    std::cout << "user_email: " << m_userEmail << std::endl;
}