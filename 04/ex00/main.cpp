#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void test1(WrongAnimal wa)
{
    wa.makeSound();
}

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    std::cout << std::endl << std::endl;

    const WrongAnimal* w = new WrongCat();
    w->makeSound();
    test1(*w);
    delete w;
    return 0;
}