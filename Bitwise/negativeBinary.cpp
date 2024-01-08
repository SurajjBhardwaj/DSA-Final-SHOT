#include <iostream>
#include <cstdint> // Include this header for fixed-size integer types
#include<bitset>
using namespace std;

int main()
{
    uint32_t signedInteger;
                     // it signed integer
    uint32_t unsignedInteger = 987654321; 
    // 32-bit unsigned integer

    cin >> unsignedInteger;
    bitset<32> binaryRepresentation(unsignedInteger);
    cout
        << "Signed Integer: " << unsignedInteger << std::endl;
    cout << "Unsigned Integer: " << binaryRepresentation << std::endl;

    return 0;
}
