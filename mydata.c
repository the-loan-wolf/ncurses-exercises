#include <ncurses.h>

#define COL1 0
#define COL2 32

int
main()
{
	initscr();

	mvprintw(5, COL1, "%30s", "Your name:");
	mvprintw(5, COL2, "%-30s", "Rishav");

	mvprintw(7, COL1, "%30s", "Your company:");
	mvprintw(7, COL2, "%-30s", "Google Inc.");

	mvprintw(9, COL1, "%30s", "Position:");
	mvprintw(9, COL2, "%-30s", "Software dev");

	mvprintw(11, COL1, "%30s", "Date hired:");
	mvprintw(11, COL2, "%-30s", "October 19, 2005");
	refresh();

	getch();

	endwin();
	return 0;
}
