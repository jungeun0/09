#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char scr[100] = "Programming course";
	char dst[100];
	int i;
	
	while(scr[i] != '\0'){
		
		i++;
		
	}
	
	
	printf("%s (%i)\n",scr, i);
	printf("%i",strlen(scr));
	
	return 0;
}
