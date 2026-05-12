#ifndef JANTUNG_H
#define JANTUNG_H

#include <iostream> // Diperlukan untuk menggunakan cout

class jantung {
public:
    jantung() {
        std::cout << "jantung dihidupkan\n";
    }

    ~jantung() {
        std::cout << "jantung dimatikan\n";
    }
};

#endif