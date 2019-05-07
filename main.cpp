#include <iostream>
#include "Lenguaje.hpp"
#include <iterator>
#include <algorithm>
void Inversa();
void concatenacion();
void Union();
void Diferencia();
void Interseccion();
int main() {
    unsigned a =0;
    while(a!=-1){
        std::cout<<"1. Inversa\n2. Concatenacion\n3. Union\n4. Interseccion\n5. Diferencia\n6. Sublenguaje\n7. Igualdad de lenguajes\n8. Potencia\n9. Cierre de Kleene\n\n\n>>> Introduzca una opcion:";
        std::cin>>a;
        std::getchar();
        switch(a){
            case 1:
                    Inversa();
                break;
            case 2:
                    concatenacion();
                break;
            case 3:
                    Union();
                break;
            case 4:
                Interseccion();
                break;
            case 5:
                Diferencia();
                break;
        }

    }



    return 0;
}
void Inversa(){
       CyA::Lenguaje a;
       a.read(std::cin);
       a.Inversa();
       std::cout<<"La Inversa es {";
       a.write(std::cout);
       std::cout<<"}\n";
}
void Union(){
    CyA::Lenguaje b;
    CyA::Lenguaje c;

    std::ostream_iterator<cadena> iterador(std::cout,", ");


    b.read(std::cin);
    c.read(std::cin);
    std::cout<<"La Union da :{";
    std::set_union(b.getset().begin(),b.getset().end(),c.getset().begin(),c.getset().end(),iterador);

    std::cout<<"}\n";
}
void Diferencia(){
    CyA::Lenguaje b;
    CyA::Lenguaje c;
    std::ostream_iterator<cadena> iterador(std::cout,", ");

    b.read(std::cin);
    c.read(std::cin);

    std::cout<<"La diferencia da :{";
    std::set_difference(b.getset().begin(),b.getset().end(),c.getset().begin(),c.getset().end(),iterador);
    std::cout<<"}\n";
}
void Interseccion(){
    CyA::Lenguaje b;
    CyA::Lenguaje c;
    std::ostream_iterator<cadena> iterador(std::cout,", ");

    b.read(std::cin);
    c.read(std::cin);
    std::cout<<"La Interseccion da :{";
    std::set_intersection(b.getset().begin(),b.getset().end(),c.getset().begin(),c.getset().end(),iterador);
    std::cout<<"}\n";
}

void concatenacion(){
    CyA::Lenguaje b;
    CyA::Lenguaje c;
    //b.read(std::cin);
    //c.read(std::cin);
    std::set<cadena> a;
    a=b.getset();
    a=c.getset();
    std::cout<<"ol";
}