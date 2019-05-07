//
// Created by DarkWayC0de_pc on 12/11/2018.
//

#include "cadena.hpp"


  std::string& cadena::getset() {
      return cadena_;
  }
  std::string cadena::getset() const {
        return cadena_;
    }

  cadena& cadena::operator=(const cadena &a) {
      this->getset()=a.getset();
      return *this;
  }
  int cadena::operator==(const cadena &a) const {
      return !(this->cadena_!=a.getset());
  }



  int cadena::operator<(const cadena &a) const {

    return !(this->cadena_< a.getset());
  }
  cadena::cadena(const cadena &cop) {
    cadena_=cop.getset();
}

std::ostream& operator<<(std::ostream &os, const cadena &a) {
    os<<a.getset();
    return os;
}