#include <iostream>
#include <fstream>
#include <bitset>
void printSumFromFile(std::string filename)
{
    int sum=0;
    std::fstream fhand(filename, fhand.binary | fhand.in);
    // One char is exactly one byte
    char c;
    while (fhand.read(reinterpret_cast<char*>(&c), sizeof(c)))
    {
        if (!fhand.eof())
        {
           std::cout << std::bitset<8>(c) << " ";
           sum+=(int)c;
        }
    }
    std::cout << sum << std::endl;
    fhand.close();
}
int main()
{
    std::string filename = "data.txt";
    printSumFromFile(filename);
}