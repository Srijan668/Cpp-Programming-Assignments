#include <iostream>
struct Month {
    const char *name;
    int days;
};

int main() {
    Month months[] = {
        {"Jan", 31}, {"Feb", 28}, {"Mar", 31}, {"Apr", 30}, {"May", 31}, {"Jun", 30}, {"Jul", 31}, 
		{"Aug", 31},{"Sep", 30}, {"Oct", 31}, {"Nov", 30}, {"Dec", 31}
		};
    std::cout << "Month\tDays\n";
    for (int i = 0; i < 12;i++) {
        std::cout << months[i].name << "\t" << months[i].days << "\n";
    }

    return 0;
}
