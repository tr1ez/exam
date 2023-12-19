#pragma once

#include "menu.hpp"

extern const char* tire;

namespace Mark{
    const MenuItem* show_menu(const MenuItem* current);

    const MenuItem* vuz(const MenuItem* current);
    const MenuItem* exit(const MenuItem* current);

    const MenuItem* vuz_spbu(const MenuItem* current);
    const MenuItem* vuz_itmo(const MenuItem* current);
    const MenuItem* vuz_spbpu(const MenuItem* current);
    const MenuItem* vuz_leti(const MenuItem* current);
    const MenuItem* vuz_exit(const MenuItem* current);

    const MenuItem* vuz_spbu_amcp(const MenuItem* current);
    const MenuItem* vuz_spbu_matmeh(const MenuItem* current);
    const MenuItem* vuz_spbu_lingva(const MenuItem* current);
    const MenuItem* vuz_spbu_exit(const MenuItem* current);
}
