#include <iostream>

int main() {
    const char* month[]= {"Jan", "Feb", "Mar", "Apr", "May", "Jun","Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    std::cout << "Month\tDays\n";
    for (int i = 0; i <=11; i++) {
        std::cout << month[i] << "\t" << days[i] << "\n";
    }
    return 0;
}

