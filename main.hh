#include <string>
#include <map>

#ifndef _MAIN_HH_
    #define _MAIN_HH_

    class Element {
        public:
        std::string name;
        int atomicNumber;
        float atomicWeight;

        explicit Element(std::string name, int atomicNumber, float atomicWeight) {
            this->name = name;
            this->atomicNumber = atomicNumber;
            this->atomicWeight = atomicWeight;
        }
    };

    const Element HYDROGEN = Element("Hydrogen", 1, 1.00794);

    std::string convertToElement(std::string name) {
        
    }
#endif

