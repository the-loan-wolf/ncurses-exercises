#include <ncurses.h>

int
main()
{
	initscr();
	start_color();
	if(!can_change_color())
		addstr("This probably won’t work, but anyway:\n");

	init_pair(1, COLOR_WHITE, COLOR_BLUE);
	bkgd(COLOR_PAIR(1));
	addstr("So this is what a color screen looks like?\n");
	refresh();
	getch();

	endwin();
	return 0;
}
