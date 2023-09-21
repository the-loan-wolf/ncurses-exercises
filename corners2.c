#include <curses.h>
#include <ncurses.h>
int
main()
{
	int rows,columns;

	initscr();
	getmaxyx(stdscr, rows, columns);
	rows--;
	columns--;

	mvaddch(0,0,'*');
	refresh();
	napms(500);

	mvaddch(0, columns,'*');
    refresh();
    napms(500);
	
	mvaddch(rows, 0,'*');
    refresh();
    napms(500);

	mvaddch(rows, columns,'*');
	refresh();

	getch();

	endwin();
	return 0;
}
