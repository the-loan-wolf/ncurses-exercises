#include <curses.h>
#include <ncurses.h>

int
main(void)
{
	WINDOW *two;

	initscr();

	addstr("This is the original window, stdscr.\n");
	refresh();
	getch();

	two = newwin(0,0,0,0);
	if(two == NULL)
	{
		addstr("Unable to allocate memory for new window.");
		endwin();
		return(1);
	}
	waddstr(two,"This is the new window created!\n");
	wrefresh(two);
	getch();

	delwin(two);
	addstr("The second window was removed.\n");
	touchwin(stdscr);
	refresh();
	getch();

	endwin();
	return 0;
}
