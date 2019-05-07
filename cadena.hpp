//
// Created by DarkWayC0de_pc on 12/11/2018.
//

#ifndef PR5_CADENA_HPP
#define PR5_CADENA_HPP

#include <string>


  class cadena {
      friend std::ostream& operator<<(std::ostream &os, const cadena &a) ;

  private:
        std::string cadena_;
    public:

        cadena(std::string a):cadena_(a){}
        cadena(const cadena &);
        virtual ~cadena(){}
        std::string& getset();
        std::string getset()const ;

        cadena& operator=(const cadena &a);
        int operator==(const cadena &a)const;
        int operator<(const cadena &a)const;
  };


#endif //PR5_CADENA_HPP
