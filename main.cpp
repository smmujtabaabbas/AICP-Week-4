#include <iostream>
#include <cmath>

class Hexagon {
private:
    double sideLength;

public:
    Hexagon(int cnicLastDigit) {
        sideLength = cnicLastDigit;
    }

    double calcArea() {
        return 1.5 * 1.732 * sideLength;
    }

    double calcPeri() {
        return 6 * sideLength;
    }

    double calcAnglesSum() {
        return 6 * 120;
    }

    void display() {
        std::cout << "Area of Hexagon is: " << calcArea() << " cm" << std::endl;
        std::cout << "Perimeter of Hexagon is: " << calcPeri() << " cm" << std::endl;
        std::cout << "Sum of angles of Hexagon is: " << calcAnglesSum() << " degrees" << std::endl;
    }
};

class Square {
private:
    double sideLength;

public:
    Square(int cnicLastDigit) {
        sideLength = cnicLastDigit + 1;
    }

    double calcArea() {
        return sideLength * sideLength;
    }

    double calcPeri() {
        return 4 * sideLength;
    }

    void display() {
        std::cout << "Area of Square is: " << calcArea() << " cm" << std::endl;
        std::cout << "Perimeter of Square is: " << calcPeri() << " cm" << std::endl;
    }
};

int main() {
    std::string studentID;
    std::cout << "Enter your ID/CNIC: ";
    std::cin >> studentID;

    int cnicLastDigit = studentID.back() - '0';

    int choice;
    while (true) {
        std::cout << "Enter 1 to calculate area, perimeter, and sum of angles of hexagon." << std::endl;
        std::cout << "Enter 2 to calculate area and perimeter of square." << std::endl;
        std::cout << "Press any other key to exit." << std::endl;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                Hexagon hex(cnicLastDigit);
                hex.display();
                break;
            }
            case 2: {
                Square sq(cnicLastDigit);
                sq.display();
                break;
            }
            default:
                std::cout << "Exiting the program." << std::endl;
                return 0;
        }
    }

    return 0;
}
