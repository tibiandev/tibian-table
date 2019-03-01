#ifndef MENU_H
#define MENU_H

typedef int optiontype;


class menu
{
private:
    optiontype number_option;
    optiontype selected_option = 00;

public:
    menu(optiontype n_option);
    void user_selection(optiontype s_option);
    void print_topmenu(void);
    void print_optionmenu(void);
    void print_end (void);

};

#endif