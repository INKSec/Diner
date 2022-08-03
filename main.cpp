#include <iostream>
#include "Dishes/Dishes.h"
#include "Dishes/Kitchen.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Meal a = Meal::Pizza;
    Meal b = Meal::Burger;
    Kitchen k;
    k.CreateDish(a);



    return 0;
}
