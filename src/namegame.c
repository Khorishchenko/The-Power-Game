#include "endgame.h"

void ddelay(int number_of_seconds);

void mx_namegame(int max_y, int max_x) 
{
	initscr();
	start_color();
	cbreak();
	noecho();
	curs_set(0);

	init_pair(1, COLOR_RED, COLOR_BLACK);

	char *str[25];

	str[0]  = "     ************************    *******        *******    *********************    ";
	str[1]  = "     *######################*    *#####*        *#####*    **#################**    ";
	str[2]  = "     *######################*    *#####*        *#####*    **#################**    ";
	str[3]  = "     *********######*********    *#####*        *#####*    **######                 ";
	str[4]  = "             *######*            *#####*        *#####*    ***#######               ";
	str[5]  = "             *######*            *####################*    ****########             ";
	str[6]  = "             *######*            *####################*    *****#########           ";
	str[7]  = "             *######*            *####################*    ****########             ";
	str[8]  = "             *######*            *######        ######*    ***#######               ";
	str[9]  = "             *######*            *#####*        *#####*    **######                 ";
	str[10] = "             *######*            *#####*        *#####*    **#################**    ";
	str[11] = "             *######*            *#####*        *#####*    **#################**    ";
	str[12] = "             *######*            *#####*        *#####*    *********************    ";
	str[13] = "                                                                                    ";
	str[14] = "     ********     *******   ******     ******     ***   ****   **********   ********    ";
	str[15] = "     *********   *********   ******     ******     *     **    **********   *********   ";
	str[16] = "     ***   ***   *********    ******     ******   *      *     ****         ***   ***   ";
	str[17] = "     ***   ***   ***   ***     ******     ****** *      *      ****         ***   ***   ";
	str[18] = "     ***   ***   ***   ***      ******     ******      *       *********    ***   ***   ";
	str[19] = "     *********   ***   ***       ******     ******    *        *********    ********    ";
	str[20] = "     ********    ***   ***        ******   * ******  *         ****         *******     ";
	str[21] = "     ****        *********         ****** *   *******          ****         ***  ***    ";
	str[22] = "     ****        *********          ******     *****           **********   ***   ***   ";	
	str[23] = "     ****         *******            ****       ***            **********   ***    ***  ";
	str[24] = NULL;
     
	attron(COLOR_PAIR(1));
	attron(A_BOLD | A_BOLD);
	for (int j = 0; str[j] != NULL; j++) {
		mvprintw(max_y /2 + j -12, max_x /2  - 39, str[j]);
		ddelay(100);
		refresh();
	} 
	attroff(COLOR_PAIR(1));
	attroff(A_BOLD | A_BOLD);
    
    getch();
	endwin();
	

}

void ddelay(int number_of_seconds) {
	int milli_seconds = 1000 *number_of_seconds;
	clock_t start_time = clock();
	while(clock() < start_time + milli_seconds) {
		;
	}
}

