#include<ncurses.h>

int
main()
{
	char first[24];
	char last[32];

	initscr();
	addstr("what's your first name? ");
	refresh();
	getnstr(first,3);

	addstr("what is your last name? ");
	refresh();
	getnstr(last,3);

	printw("Pleased to meet you, %s %s!", first, last);
	refresh();
	getch();

	endwin();
	return 0;
}
