//
// Created by Micha on 02.08.2022.
//

#ifndef DINER_BURGER_H
#define DINER_BURGER_H
#include "Dishes.h"
#include <iostream>
#include <memory>

class Burger : public Dishes{
public:
    void prepare() override;

    Burger() = delete;
    explicit Burger(std::string &);

};


#endif //DINER_BURGER_H
