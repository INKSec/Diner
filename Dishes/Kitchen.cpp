//
// Created by Micha on 02.08.2022.
//

#include "Kitchen.h"

std::unique_ptr <Dishes> Kitchen::CreateDish(const Meal &name) {
    std::unique_ptr<Dishes> dish;

    switch (name) {
        case Meal::Pizza: {
            std::string temp{"Pizza"};
            dish = std::make_unique<Pizza>(temp);

            break;
        }
        case Meal::Burger: {
            std::string temp{"Burger"};
            dish = std::make_unique<Burger>(temp);
            break;

        }

    }

    return dish;
}
