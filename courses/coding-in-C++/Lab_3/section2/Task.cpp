#include <iostream> 


class User{
    protected:
    std::string name;
    int id;

    public:
    User();
    User(std::string name, int id) 
    : id(id), name(name){};
    void printinfo()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Id: " << id << std::endl;
    }
};

class Student : public User{
    private:
    int grade;
    int matNr;

    public:
    Student(std::string name, int id, int grade, int matNr) : User(name, id), grade(grade), matNr(matNr) {};
    void printRole()
    {
        std::cout << "Rolle: " << "Student" << std::endl;
        printinfo();
        std::cout << "Grade: " << grade << std::endl;
        std::cout << "Matrikelnummer: " << matNr << std::endl;
    }
};

class Instructor : public User{
    private:
    std::string topic;

    public:
    Instructor(std::string topic) : topic(topic), User(){};

    void printRole()
    {
        std::cout << "Rolle: " << "Instructor" << std::endl;
        printinfo();
        std::cout << "Grade: " << topic << std::endl;
    }
};