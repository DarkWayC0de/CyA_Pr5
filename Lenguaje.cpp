//
// Created by DarkWayC0de_pc on 12/11/2018.
//

#include "Lenguaje.hpp"



namespace CyA{
  Lenguaje::Lenguaje() {

  }
  Lenguaje::~Lenguaje() {

  }
    std::set<cadena> & Lenguaje::getset(void){
        return Lenguaje_;
    }
    std::istream& Lenguaje::read(std::istream &in) {
      std::cout<<"Defina el lenguaje: ";
        std::string a;

        std::getline(in,a);
        if(a[0]=='{') {
            while (!a.empty()) {
                char c = a.back();
                a.pop_back();
                if (c != '{' && c != ' ' && c != '}' && c != ',') {
                    std::string b;
                    while ((c != '{' && c != ' ' && c != '}' && c != ',') && (!a.empty())) {
                        b += c;
                        c = a.back();
                        a.pop_back();
                    }
                    std::string temp("");
                    while (!b.empty()) {
                        temp += b.back();
                        b.pop_back();
                    }
                    cadena d(temp);
                    Lenguaje_.insert(d);

                }
            }
        }
    }
    std::ostream& Lenguaje::write(std::ostream &os) {
        for (std::set<cadena>::iterator  i=this->Lenguaje_.begin();i!=this->Lenguaje_.end();i++ ){
            os<<(*i)<<", ";
        }
    }
    void Lenguaje::Inversa() {
      std::set<cadena> d;
        for (std::set<cadena>::iterator  i=this->Lenguaje_.begin();i!=this->Lenguaje_.end();i++ ){
            std::string a=i->getset(),b("");


            while (!a.empty()){
                b+=a.back();
                a.pop_back();
            }



            cadena c(b);
            d.insert(b);
        }
        Lenguaje_= d;
  }
}
