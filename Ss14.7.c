#include <stdio.h>

int main(){
	char text[]="ftt@46!vg8";
	int countCharaterText=0;
	int countCharaterNum=0;
	int countCharaterSpecial=0;
	int length=strlen(text);
	for(int i=0; i<length; i++){
		if(isalpha(text[i])){
			countCharaterText++;
		}else if(isdigit(text[i])){
			countCharaterNum++;
		}else {
			countCharaterSpecial++;
		}
	}
	printf("%d ki tu chu cai \n",countCharaterText);
	printf("%d ki tu chu so \n",countCharaterNum);
	printf("%d ki tu chu cai dac biet \n",countCharaterSpecial);
	
	return 0;
}

