#include <iostream>
#include <fstream>
#include <stdexcept>

class fileRA {
    std::fstream file;
    std::streampos file_size;

public:
    // Constructor: Open the file in read and write mode
    fileRA(const std::string& filename) {
        file.open(filename, std::ios::in | std::ios::out | std::ios::binary);
        
        file.seekg(0, std::ios::end);
        file_size = file.tellg();
        file.seekg(0, std::ios::beg);
    }
    ~fileRA() {
        file.close();
    }

    std::streampos get_size() const {
        return file_size;
    }
    class fileDescriptor {
        std::fstream& file;
        std::streampos pos;

    public:
        fileDescriptor(std::fstream& f, std::streampos p) : file(f), pos(p) {}

        void operator=(char c) {
            file.seekp(pos);
            file.put(c);
        }
        operator char(){
            file.seekg(pos);  
            return file.get();
        }
    };
    fileDescriptor operator[](std::streampos pos) {
        return fileDescriptor(file, pos);
    }
};

int main() {
        fileRA fobj("data.txt");
        fobj[4] = 'A';
        for (unsigned int i = 0; i < fobj.get_size(); i++) {
            std::cout << fobj[i];
        }
        char c = fobj[1];
        std::cout << "\nChar is = " << c << std::endl;
    return 0;
}
