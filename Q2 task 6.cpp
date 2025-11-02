#include <stdio.h>

int main(){
	
	char str[1000];
	char letter;
	int count=0;
	int i=0;
	
	printf("Enter a word: \n");
	scanf(" %[^\n]", str);
	
	while(str[i]!='\0'){
		letter=str[i];
		switch(letter){
			case 'a': case'A':
				count++;
				break;
			case 'e': case 'E':
				count++;
				break;
			case 'i': case'I':
				count++;
				break;
			case 'o': case'O':
				count++;
				break;
			case 'u': case'U':
				count++;
				break;
		}
		i++;
	}
	
	printf("\nNumber of vowels in the string are %d.",count);
	
}
