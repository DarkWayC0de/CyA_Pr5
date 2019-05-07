//
// Created by DarkWayC0de_pc on 12/11/2018.
//

#ifndef PR5_LENGUAJE_HPP
#define PR5_LENGUAJE_HPP

#include "cadena.hpp"
#include <iostream>
#include <set>

namespace CyA{
class Lenguaje {
    private:
        std::set<cadena> Lenguaje_;

    public:
        Lenguaje(void);
        ~Lenguaje(void);
        std::set<cadena>& getset(void);
        std::istream& read(std::istream& in);
        std::ostream& write(std::ostream& os);
        void Inversa(void);

};
}

#endif //PR5_LENGUAJE_HPP
