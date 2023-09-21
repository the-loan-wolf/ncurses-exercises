#include<ncurses.h>

int
main()
{
	char first[24];
	char last[32];

	initscr();
	addstr("what's your first name? ");
	refresh();
	getstr(first);

	addstr("what is your last name? ");
	refresh();
	getstr(last);

	printw("Pleased to meet you, %s %s!", first, last);
	refresh();
	getch();

	endwin();
	return 0;
}
