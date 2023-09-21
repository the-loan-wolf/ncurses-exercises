#include <curses.h>
#include <ncurses.h>

#define MENUMAX 6

void
drawmenu(int item)
{
	int c;
	char mainmenu[] = "Main Menu";
	char menu[MENUMAX][21] = {
		"Answer E-mail",
		"Off to the Web",
		"Word processing",
		"Maintenance",
		"Shutdown"
	};

	clear();
	addstr(mainmenu);
	for(c=0;c<MENUMAX;c++)
	{
		if(c==item)
			attron(A_REVERSE);
		mvaddstr(3+(c*2), 20, menu[c]);
		attroff(A_REVERSE);
	}
	mvaddstr(17, 25, "Use arrow keys to move; Enter to select:");
	refresh();
}

int
main(void)
{
	int key,menuitem;
	menuitem = 0;

	initscr();

	drawmenu(menuitem);
	keypad(stdscr, TRUE);
	noecho();
	do
	{
		key = getch();
		switch(key)
		{
			case KEY_DOWN:
				menuitem++;
				if(menuitem>MENUMAX-1) menuitem = 0;
				break;
			case KEY_UP:
				if(menuitem<0) menuitem = MENUMAX-1;
				break;
			default:
				break;
		}
		drawmenu(menuitem);
	}while(key != '\n');

	echo();

	/* At this point, the value of the selected menu is kept in the
	 * menuitem variable. The program can branch off to whatever
	 * subroutine is required to carry out that function */

	endwin();
	return 0;
}
