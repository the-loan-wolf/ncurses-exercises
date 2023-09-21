#include <ncurses.h>

int
main()
{
	//initialize ncurses lib
	initscr();
	addstr("Godbye, cruel C programming!");
	//update ncurses current window
	refresh();
	//wait for keypress and then exit
	getch();
	//exit ncurses window
	endwin();
	return 0;
}
