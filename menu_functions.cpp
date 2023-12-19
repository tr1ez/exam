#include "menu_functions.hpp"
#include <iostream>

const Mark::MenuItem* Mark::show_menu(const MenuItem* current){
    std::cout << "u can see universities of SPb" << std::endl;
    for(int i = 1; i < current->children_count; i++){
        std::cout << i << tire << current->children[i]->title << std::endl;
    }
    std::cout << 0 << tire << current->children[0]->title << std::endl;
    std::cout<<"input here>  ";

    int choice;
    std::cin >> choice;
    std::cout << std::endl;

    return current->children[choice];
}

const Mark::MenuItem* Mark::exit(const MenuItem* current){
    std::exit(0);
}

const Mark::MenuItem* Mark::vuz(const MenuItem* current){
    std::cout << current->title << std::endl;
    std::cout << "Universities of SPb:" << std::endl;
    for(int i = 1; i < current->children_count; i++){
        std::cout << i << tire << current->children[i]->title << std::endl;
    }
    std::cout << 0 << tire << current->children[0]->title << std::endl;
    std::cout<<"input here>  ";

    int choice;
    std::cin >> choice;
    std::cout << std::endl;

    return current->children[choice];
}

const Mark::MenuItem* Mark::vuz_spbu(const MenuItem* current){
    std::cout << current->title << std::endl;
    std::cout << "Faculties of SPBU:" << std::endl;
    for(int i = 1; i < current->children_count; i++){
        std::cout << i << tire << current->children[i]->title << std::endl;
    }
    std::cout << 0 << tire << current->children[0]->title << std::endl;
    std::cout<<"input here>  ";

    int choice;
    std::cin >> choice;
    std::cout << std::endl;

    return current->children[choice];
}
const Mark::MenuItem* Mark::vuz_itmo(const MenuItem* current){
    std::cout << current->title << std::endl;
    return current->parent;
}
const Mark::MenuItem* Mark::vuz_spbpu(const MenuItem* current){
    std::cout << current->title << std::endl;
    return current->parent;
}
const Mark::MenuItem* Mark::vuz_leti(const MenuItem* current){
    std::cout << current->title << std::endl;
    return current->parent;
}
const Mark::MenuItem* Mark::vuz_exit(const MenuItem* current){
    std::cout << current->title << std::endl;
    return current->parent->parent;
}

const Mark::MenuItem* Mark::vuz_spbu_amcp(const MenuItem* current){
    std::cout << current->title << std::endl;
    return current->parent;
}
const Mark::MenuItem* Mark::vuz_spbu_matmeh(const MenuItem* current){
    std::cout << current->title << std::endl;
    return current->parent;
}
const Mark::MenuItem* Mark::vuz_spbu_lingva(const MenuItem* current){
    std::cout << current->title << std::endl;
    return current->parent;
}
const Mark::MenuItem* Mark::vuz_spbu_exit(const MenuItem* current){
    std::cout << current->title << std::endl;
    return current->parent->parent;
}