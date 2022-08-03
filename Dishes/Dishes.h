//
// Created by Micha on 02.08.2022.
//

#ifndef DINER_DISHES_H
#define DINER_DISHES_H

#include <memory>
#include <vector>
#include <iostream>
class Dishes {
public:
    virtual void prepare() = 0;
    [[nodiscard]] std::string getDishName() const;
    [[nodiscard]] std::vector<std::string> getIngredients() const;
    [[nodiscard]] unsigned getNumberIngredients() const;

    Dishes() = delete;
    explicit Dishes(std::string);

protected:
    void AddIngredients();
    std::string dishName;
    std::vector<std::string> vectorIngredients;
};

#endif //DINER_DISHES_H
