#include <ncurses.h>

int
main()
{
	initscr();

	attron(A_BOLD);
	addstr("Twinkle Twinkle little star.\n");
	attron(A_BLINK);
	addstr("How i wonder what you are.\n");
	attroff(A_BOLD);
	addstr("up above the world so high,\n");
	addstr("like a diamond in the sky.\n");
	attrset(A_NORMAL);
	addstr("Twinkle Twinkle little star.\n");
	refresh();
	getch();
	endwin();
	return 0;

}
