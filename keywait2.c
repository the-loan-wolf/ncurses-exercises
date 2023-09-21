#include <curses.h>
#include <ncurses.h>

int
main(void)
{
	int value = 0;

	initscr();

	addstr("Press any key to begin:\n");
	refresh();
	getch();

	nodelay(stdscr, TRUE);
	addstr("Press the spacebar to stop the insane loop!\n");
	while(1)
	{
		printw("%d\r",value++);
		refresh();
		if(getch() == ' ') break;
	}

	endwin();
	return 0;
}
