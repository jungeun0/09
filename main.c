#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	FILE *fp;
	char filename[100];
	char input[100];
	char word[100];
	fp = fopen(filename,"r");
	
	printf("file name : \n");
	scanf("%s", filename);
	
	
	printf("word : \n");
	scanf("%s",word);
	
	while ( fgets(input,100,fp) != NULL){
	
		if(strncmp(input,word,strlen(word))==0){
			printf("find a word %s\n",input);
		}
	}
	
	printf("search done! \n");
	fclose(fp);
	
	
	
	
	return 0;
}
