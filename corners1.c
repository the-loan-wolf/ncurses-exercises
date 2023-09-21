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

	move(0, 0);
	addch('*');
	refresh();
	napms(500);

	move(0, columns);
    addch('*');
    refresh();
    napms(500);
	
	move(rows, 0);
    addch('*');
    refresh();
    napms(500);

	move(rows, columns);
    addch('*');
	refresh();
	getch();

	endwin();
	return 0;
}
