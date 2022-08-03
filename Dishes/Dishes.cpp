//
// Created by Micha on 02.08.2022.
//

#include "Dishes.h"

// getter
std::string Dishes::getDishName() const {
    return dishName;
}

std::vector<std::string> Dishes::getIngredients() const {
    return vectorIngredients;
}

unsigned Dishes::getNumberIngredients() const {
    return vectorIngredients.size();
}

// const
Dishes::Dishes(std::string name) : dishName(std::move(name)){}

void Dishes::AddIngredients() {
    std::cout << "Salami wird belegt" << std::endl;

}
