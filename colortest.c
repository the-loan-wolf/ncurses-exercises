#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

void
bomb(char *msg);

int
main()
{
	initscr();

	/* first test for color ability of the terminal */
	if(!has_colors())
		bomb("Terminal cannot do color\n");

	/* next attempt to initialize curses colors */
	if(start_color() != OK)
		bomb("Unable to start color.\n");

	/* colors are okay; continue */
	printw("Colors have been properly initialized.\n");
	printw("Congratulations!\n");
	printw("NCurses reports that you can use %d colors,\n",COLORS);
	printw("and %d color pairs.",COLOR_PAIRS);
	refresh();
	getch();

	endwin();
	return 0;
}

void
bomb(char *msg)
{
	endwin();
	puts("msg");
	exit(1);
}
