#pragma once

#include <string>

class User {
    private:
        std::string m_userName;
        std::string m_userEmail;

    public:
        User();
        User(std::string l_userName);
        User(std::string l_userName, std::string l_userEmail);
        ~User();

        void setUserName(std::string l_userName);
        void setUserEmail(std::string l_userEmail);

        std::string getUserName() { return m_userName; }
        std::string getUserEmail() { return m_userEmail; }

        void print();
};