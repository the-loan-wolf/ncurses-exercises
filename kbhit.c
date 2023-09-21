#include <curses.h>
#include <ncurses.h>

int
kbhit(void)
{
	int ch,r;

	nodelay(stdscr, TRUE);
	noecho();

	ch = getch();
	if(ch == ERR)
	{
		r = FALSE;
	}else
	{
		r = TRUE;
		ungetch(ch);
	}

	echo();
	nodelay(stdscr, TRUE);
	return r;
}

int
main(void)
{
	initscr();

	addstr("Press any key to end this program:");
	while (!kbhit())
		;

	endwin();
	return 0;
}
