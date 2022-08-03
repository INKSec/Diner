//
// Created by Micha on 02.08.2022.
//

#ifndef DINER_KITCHEN_H
#define DINER_KITCHEN_H
#include "Dishes.h"
#include "Burger.h"
#include "Pizza.h"
#include <memory>

enum class Meal {
    Pizza, Burger
};

class Kitchen {


public:

    std::unique_ptr<Dishes> CreateDish(const Meal &);
};




#endif //DINER_KITCHEN_H
