//
// Created by Micha on 02.08.2022.
//

#include "Pizza.h"



void Pizza::prepare() {
    AddIngredients();
}

Pizza::Pizza(std::string &name) : Dishes(name) {

}
