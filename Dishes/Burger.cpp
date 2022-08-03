//
// Created by Micha on 02.08.2022.
//

#include "Burger.h"

void Burger::prepare() {
    AddIngredients();
}

Burger::Burger(std::string &name) : Dishes(name) {

}