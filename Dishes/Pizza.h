//
// Created by Micha on 02.08.2022.
//

#ifndef DINER_PIZZA_H
#define DINER_PIZZA_H
#include "Dishes.h"

class Pizza : public Dishes {
public:
    void prepare() override;

    Pizza() = delete;
    explicit Pizza(std::string &);

};


#endif //DINER_PIZZA_H
