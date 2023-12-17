#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction() : numerator(0), denominator(1) {}

    Fraction(int num, int den) : numerator(num), denominator(den) {}

    void inputFraction() {
        std::cout << "Enter numerator: ";
        std::cin >> numerator;
        do {
            std::cout << "Enter denominator (cannot be 0): ";
            std::cin >> denominator;
        } while (denominator == 0);
    }

    void displayFraction() const {
        std::cout << numerator << "/" << denominator;
    }

    Fraction add(const Fraction& other) const {
        int resultNumerator = numerator * other.denominator + other.numerator * denominator;
        int resultDenominator = denominator * other.denominator;
        return Fraction(resultNumerator, resultDenominator);
    }

    Fraction subtract(const Fraction& other) const {
        int resultNumerator = numerator * other.denominator - other.numerator * denominator;
        int resultDenominator = denominator * other.denominator;
        return Fraction(resultNumerator, resultDenominator);
    }

    Fraction multiply(const Fraction& other) const {
        int resultNumerator = numerator * other.numerator;
        int resultDenominator = denominator * other.denominator;
        return Fraction(resultNumerator, resultDenominator);
    }

    Fraction divide(const Fraction& other) const {
        int resultNumerator = numerator * other.denominator;
        int resultDenominator = denominator * other.numerator;
        return Fraction(resultNumerator, resultDenominator);
    }
};

int main() {
    Fraction fraction1, fraction2, result;

    std::cout << "Enter the first fraction:\n";
    fraction1.inputFraction();

    std::cout << "\nEnter the second fraction:\n";
    fraction2.inputFraction();

    std::cout << "\nFirst fraction: ";
    fraction1.displayFraction();
    std::cout << "\nSecond fraction: ";
    fraction2.displayFraction();

    result = fraction1.add(fraction2);
    std::cout << "\n\nAddition: ";
    result.displayFraction();

    result = fraction1.subtract(fraction2);
    std::cout << "\nSubtraction: ";
    result.displayFraction();

    result = fraction1.multiply(fraction2);
    std::cout << "\nMultiplication: ";
    result.displayFraction();

    result = fraction1.divide(fraction2);
    std::cout << "\nDivision: ";
    result.displayFraction();

    return 0;
}
//