#ifndef MANUSIA_H
#define MANUSIA_H

#include <iostream>
#include <string>
#include "jantung.h" // Pastikan file jantung.h ada di folder yang sama

class manusia {
public:
    std::string name;
    jantung varJantung; // Objek jantung sebagai bagian dari manusia (Komposisi)

    manusia(std::string pName)
        : name(pName) {
        std::cout << name << " hidup\n";
    }

    ~manusia() {
        std::cout << name << " mati\n";
    }
};

#endif