//
// Created by Logan Lambeth on 1/24/23.
//

#include <iostream>

double CalculatingSAFunction(double length, double height, double width)
{
    double result = 0.0;
    return result = 2 * (length * height + width * height + length * width);
}

double CalculatingSASIFunction(double length, double height, double width)
{
    double result = 0.0;
    return result = 2.54 * 2.54 * 2 * (length * height + width * height + length * width);
}

bool ValidationFunction(double SA, double SASI)
{
    if(SA == 0.0 && SASI == 0.0)
    {
        std::cout << "Pass." << std::endl;
    }
    else if(SA == 300.0 && SASI == 1935.48)
    {
        std::cout << "Pass." << std::endl;
    }
    else if(SA == 42.0 && SASI == 270.9672)
    {
        std::cout << "Pass." << std::endl;
    }
    else
    {
        std::cout << "Test SA == %d and Test SASI == %d." << SA, SASI;
        std::cout << "Pass." << std::endl;
        return false;
    }
    return true;
}

bool ValidationTable()
{
    double SATest1 = 0.0, SATest2 = 0.0, SATest3 = 0.0, SASITest1 = 0.0, SASITest2 = 0.0, SASITest3 = 0.0;
    bool test1 = false, test2 = false, test3 = false;
    SATest1 = CalculatingSAFunction(0.0, 0.0, 0.0);
    SATest2 = CalculatingSAFunction(15.0, 10.0, 0.0);
    SATest3 = CalculatingSAFunction(10.0, 1.0, 1.0);

    SASITest1 = CalculatingSASIFunction(0.0, 0.0, 0.0);
    SASITest2 = CalculatingSASIFunction(15.0, 10.0, 0.0);
    SASITest3 = CalculatingSASIFunction(10.0, 1.0, 1.0);

    test1 = ValidationFunction(SATest1, SASITest1);
    test2 = ValidationFunction(SATest2, SASITest2);
    test3 = ValidationFunction(SATest3, SASITest3);

    if (test1 == true && test2 == true && test3 == true)
    {
        std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
        std::cout << "| Test Case |         Input Parameters                    |       Output                |" << std::endl;
        std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
        std::cout << "|     1     |   length = height = width = 0.0             | SA == 0.0 SASI == 0.0       |" << std::endl;
        std::cout << "|     2     |   length = 15.0, height = 10.0, width = 0.0 | SA == 300.0 SASI == 1935.48 |" << std::endl;
        std::cout << "|     3     |   length = 10.0, height = width = 1.0       | SA == 42.0 SASI == 270.97   |" << std::endl;
        std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
    }
    else
    {
        std::cout << "The validation of equations has failed" << std:: endl;
        return false;
    }
    return true;
}

int main() {

    std::cout << "This program will calculate the surface area of a package, with the dimensions provided by the user." << std::endl;
    // small methods to do a signle thing, math one should be method

    double SA = 0.0, SASI = 0.0;
    int l = 0, w = 0, h = 0;

    ValidationTable();

    //Scanner myObjL = new Scanner(System.in);  // Create a Scanner object
    std::cout << "Enter Length" << std:: endl;
    scanf("%d", &l);

    std::cout << "Enter Width" << std:: endl;
    scanf("%d", &w);

    std::cout << "Enter Height" << std:: endl;
    scanf("%d", &h);

    std::cout << "Length is:  " << l;
    std::cout << "\nWidth is: " << w;
    std::cout << "\nHeight is " << h;

    SA = CalculatingSAFunction(l, h, w);

    SASI = CalculatingSASIFunction(l, h, w);

    std::cout << "\nSurface Area is: " << SA;
    std::cout << "\nSASI is: %d" << SASI;

    return 0;
}