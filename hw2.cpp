/////////////////////////////////////// 
//              Homework 2           //    
//             made by Lurk          //     
//              gedit + gcc          //      
/////////////////////////////////////// 

#include <iostream>

int main ()
{

// part 1 //  variables

int       test_var_int       = 10;
long      test_var_long      = 500;
short     test_var_short     = 5;
unsigned  test_var_unsigned  = 100;
char      test_var_char      = 'A';
float     test_var_float     = 389.43453;
double    test_var_double    = 44388.53843;
bool      test_var_bool      = true;

printf("\nPart 1\n");
std::cout << test_var_int << std::endl;
std::cout << test_var_long << std::endl;
std::cout << test_var_short << std::endl;
std::cout << test_var_unsigned << std::endl;
std::cout << test_var_char << std::endl;
std::cout << test_var_float << std::endl;
std::cout << test_var_double << std::endl;
std::cout << test_var_bool << std::endl;

// part 2 //  enumeration

enum game_cell {X, O, _};
using cell = enum game_cell;

cell game_cell_0 = X;
cell game_cell_1 = O;
cell game_cell_2 = _;

printf("\nPart 2\n");
std::cout << game_cell_0 << std::endl;
std::cout << game_cell_1 << std::endl;
std::cout << game_cell_2 << std::endl;

// part 3 //  3x3 game cells array

char game_field [3] [3]    // array 3 x 3
{{'X', '_', '_'},
 {'O', 'X', '_'},
 {'O', 'O', 'X'}}; 
 
 printf("\nPart 3\n");
printf ("%c\n", game_field[2][2]); // string 3 column 3 of array output

// part 4 //   structure

struct game_board {
int game_number;
int game_turn;
char current_board_view [3] [3];
};

using board = struct game_board;
board game_3;
game_3.game_number = 3;
game_3.game_turn = 4;
game_3.current_board_view [0] [0] = 'X';
game_3.current_board_view [0] [1] = 'X';
game_3.current_board_view [0] [2] = 'O';
game_3.current_board_view [1] [0] = '_';
game_3.current_board_view [1] [1] = '_';
game_3.current_board_view [1] [2] = '_';
game_3.current_board_view [2] [0] = '_';
game_3.current_board_view [2] [1] = '_';
game_3.current_board_view [2] [2] = 'O';

printf("\nPart 4\n");
std::cout << game_3.game_number << std::endl;
std::cout << game_3.game_turn << std::endl;
std::cout << game_3.current_board_view [0] [0] << std::endl;
std::cout << game_3.current_board_view [0] [2] << std::endl;
std::cout << game_3.current_board_view [1] [1] << std::endl;

// part 5 //     unity

//printf("%ld\n", sizeof(short));
//printf("%ld\n", sizeof(int));
//printf("%ld\n", sizeof(long));

union s_i_l {
short s; //2
int i;   //4
long l;  //8
};

printf("\nPart 5\n");

union s_i_l x;
x.s = 2;
printf("%d\n", x.s);
x.i = 4;
printf("%d\n", x.i);
x.l = 8;
printf("%ld\n", x.l);

struct s_i_l_bbb {
s_i_l sil;
int is_short : 1;
int is_int : 1;
int is_long : 1;
};

struct s_i_l_bbb mydata;
mydata.sil.s = 16;
mydata.is_short = 1;
mydata.is_int = 0;
mydata.is_long = 0;

printf ("%d flags_sil= %d%d%d\n", mydata.sil.s, mydata.is_short, mydata.is_int, mydata.is_long);

printf("\nThis is your end of line\n");

return 0;
}  
