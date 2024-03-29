//
// Created by Maikol Guzman  on 2019-09-05.
//

#ifndef EJERCICIOSPUNTEROSVECTORES_CAMA_H
#define EJERCICIOSPUNTEROSVECTORES_CAMA_H

#include <ostream>
#include "string"

class Cama {
    std::string codigo;
    bool estado;

public:
    Cama();

    Cama(const std::string &codigo, bool estado);

    virtual ~Cama();

    std::string &getCodigo() const;

    void setCodigo(const std::string &codigo);

    bool isEstado() const;

    void setEstado(bool estado);

    // Método toString
    std::string toString();
};


#endif //EJERCICIOSPUNTEROSVECTORES_CAMA_H
