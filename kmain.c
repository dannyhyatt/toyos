char *fb = (char *) 0x000B8000;


void this_does_nothing()
{
	fb[0] = 'A';
	fb[1] = 0x28;
	return;
}

/*void fb_write_cell(unsigned int i, char c, unsigned char fg, unsigned char bg)
{
	fb[i] = c;
	fb[i + 1] = ((fg & 0x0F) << 4) | (bg & 0x0F);
}

fb_write_cell(0, 'A', FB_GREEN, FB_DARK_GREY);*/
