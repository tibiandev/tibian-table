#include <iostream>
#include "menu.h"

menu::menu(optiontype n_option)
{
    optiontype number_option = n_option;
}

void menu::user_selection (optiontype s_option)
{
    selected_option = s_option;
}

void menu::print_topmenu(void){
    
    std::cout <<
    "
    ...................................................................\n
    .    _______ _ _     _               _______    _     _           .\n
    .   |__   __(_) |   (_)             |__   __|  | |   | |          .\n
    .      | |   _| |__  _  __ _ _ __      | | __ _| |__ | | ___      .\n
    .      | |  | | '_ \| |/ _` | '_ \     | |/ _` | '_ \| |/ _ \     .\n
    .      | |  | | |_) | | (_| | | | |    | | (_| | |_) | |  __/     .\n
    .      |_|  |_|_.__/|_|\__,_|_| |_|    |_|\__,_|_.__/|_|\___|     .\n
    ...................................................................\n
    " <<std::endl;

}

void menu::print_options_main_menu(void)
{
    std::cout << "Selecione qual funcionalidade deseja utilizar: " << std::endl;
    std::cout << "01 - Imbuement Void - " << std::endl;
    std::cout << "02 - Imbuement Vampirism - " << std::endl;
    std::cout << "03 - Hunt Checker - " << std::endl;
    std::cout << "04 - Configurar Parametros " << std::endl;
}

void menu::print_end(void)
{
    std::cout << " 01 - retornar ao menu principal - " << std::endl;
    std::cout << " 02 - recalcular com novos parametros - " << std::endl;
}
