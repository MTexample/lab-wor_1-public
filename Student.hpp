#include "User.hpp"

class Student : private User {

    private: 
        std::string m_studentGroup;

    public: 
        Student();
        Student(std::string l_userName, std::string l_userEmail, std::string l_studentGroup);
        void print();
};