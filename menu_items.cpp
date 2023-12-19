#include "menu_items.hpp"
#include "menu_functions.hpp"

const Mark::MenuItem Mark::VUZ_SPBU_AMCP = {
    "AM-CP faculty", Mark::vuz_spbu_amcp, &Mark::VUZ_SPBU
};
const Mark::MenuItem Mark::VUZ_SPBU_MATMEH = {
    "MathMeh faculty", Mark::vuz_spbu_matmeh, &Mark::VUZ_SPBU
};
const Mark::MenuItem Mark::VUZ_SPBU_LINGVA = {
    "Linguistic faculty", Mark::vuz_spbu_lingva, &Mark::VUZ_SPBU
};
const Mark::MenuItem Mark::VUZ_SPBU_EXIT = {
    "exit to previous option", Mark::vuz_spbu_exit, &Mark::VUZ_SPBU
};

namespace{
    const Mark::MenuItem* const vuz_spbu_children[] = {
        &Mark::VUZ_SPBU_EXIT,
        &Mark::VUZ_SPBU_AMCP,
        &Mark::VUZ_SPBU_MATMEH,
        &Mark::VUZ_SPBU_LINGVA
    };
    const int vuz_spbu_size = sizeof(vuz_spbu_children)/sizeof(vuz_spbu_children[0]);
}


const Mark::MenuItem Mark::VUZ_SPBU = {
    "SPBU", Mark::vuz_spbu, &Mark::VUZ, vuz_spbu_children, vuz_spbu_size
};
const Mark::MenuItem Mark::VUZ_ITMO = {
    "ITMO", Mark::vuz_itmo, &Mark::VUZ
};
const Mark::MenuItem Mark::VUZ_SPBPU = {
    "SPBPU", Mark::vuz_spbpu, &Mark::VUZ
};
const Mark::MenuItem Mark::VUZ_LETI = {
    "LETI", Mark::vuz_leti, &Mark::VUZ
};
const Mark::MenuItem Mark::VUZ_EXIT = {
    "exit to main menu", Mark::vuz_exit, &Mark::VUZ
};

namespace{
    const Mark::MenuItem* const vuz_children[] = {
        &Mark::VUZ_EXIT,
        &Mark::VUZ_SPBU,
        &Mark::VUZ_ITMO,
        &Mark::VUZ_SPBPU,
        &Mark::VUZ_LETI
    };
    const int vuz_size = sizeof(vuz_children)/sizeof(vuz_children[0]);
};

const Mark::MenuItem Mark::VUZ = {
    "See universities of SPb", Mark::vuz, &Mark::MAIN, vuz_children, vuz_size
};
const Mark::MenuItem Mark::EXIT = {
    "exit", Mark::exit, &Mark::MAIN
};

namespace{
    const Mark::MenuItem* const main_children[] = {
        &Mark::EXIT,
        &Mark::VUZ
    };
    const int main_size = sizeof(main_children)/sizeof(main_children[0]);
}


const Mark::MenuItem Mark::MAIN = {
    nullptr, Mark::show_menu, nullptr, main_children, main_size
};