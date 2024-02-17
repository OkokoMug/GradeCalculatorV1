#include <iostream>

int main(){

    //Grades
    double math{};
    double language{};
    double arts{};
    double science{};
    double social{};

    std::cout << "Put in the grades for the respective subjects: " << std::endl;
    std::cout << "Math: ";
    std::cin >> math;

    std::cout << "Languages: ";
    std::cin >> language;

    std::cout << "Arts: ";
    std::cin >> arts;

    std::cout << "Sciences: ";
    std::cin >> science;

    std::cout << "Socials: ";
    std::cin >> social; 

    //Sum of grades
    double sumGrade = math + language + arts + science + social;

    //Total sum
    std::cout << "Total sum: " << sumGrade << std::endl;

    //Average grades
    double avgGrade = sumGrade / 5;

    //Result 
    std::cout << "Average grade: " << avgGrade << std::endl;

}