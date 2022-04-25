// printprogram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <complex>
#include <vector>


std::vector<int>levl_detail;
int interations = 0;
bool mandle(std::complex<double>z,std::complex<double>c,int detail) {

   
    z = pow(z, 2)  + c;
    detail += 1;
    if (detail >= 30||abs(z)>=2) return true;
    std::cout << z << std::endl;
    mandle(z, c,detail);
}
std::complex<double>zs(0,0);
std::complex<double>cs(.3001,.4);
int main()
{


    std::cout << "Hello World!\n";

   mandle(zs, cs, 0);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
