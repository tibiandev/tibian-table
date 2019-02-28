#include <iostream>

typedef int optiontype;


class menu
{
private:
    optiontype number_option;
    optiontype option[number_option];
    optiontype selected_option;

public:
    menu(optiontype n_option)
    void user_selection(optiontype s_option)
    void print_menu(void)




};

menu::menu(optiontype n_option)
{
    optiontype number_option = n_option;
}

void menu::user_selection (optiontype s_option)
{
    selected_option = s_option;
}

void menu::print_menu(void)
{
    std::cout << 
}
