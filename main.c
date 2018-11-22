#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char scr[100] = "Programming course";
	char dst[100];
	int i;
	
	for(i=0;scr[i] != '\0';i++){
		dst[i] = scr[i];
	}
	dst[i]= '\0';
	
	printf("%s\n",dst);
	
	
	return 0;
}
