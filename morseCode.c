#include<stdio.h> 
#include<string.h>

char* morseEncodeCharacter(char character) { 
	switch (character) { 
		case 'a': 
		case 'A':
			return ".-"; 
		case 'b':
		case 'B': 
			return "-..."; 
		case 'c':
		case 'C': 
			return "-.-."; 
		case 'd':
		case 'D': 
			return "-.."; 
		case 'e':
		case 'E': 
			return "."; 
		case 'f':
		case 'F': 
			return "..-."; 
		case 'g':
		case 'G': 
			return "--."; 
		case 'h':
		case 'H': 
			return "...."; 
		case 'i':
		case 'I': 
			return ".."; 
		case 'j':
		case 'J': 
			return ".---"; 
		case 'k':
		case 'K': 
			return "-.-"; 
		case 'l':
		case 'L': 
			return ".-.."; 
		case 'm':
		case 'M': 
			return "--"; 
		case 'n':
		case 'N': 
			return "-."; 
		case 'o':
		case 'O': 
			return "---"; 
		case 'p':
		case 'P': 
			return ".--."; 
		case 'q':
		case 'Q': 
			return "--.-"; 
		case 'r':
		case 'R': 
			return ".-."; 
		case 's':
		case 'S': 
			return "..."; 
		case 't':
		case 'T': 
			return "-"; 
		case 'u':
		case 'U': 
			return "..-"; 
		case 'v':
		case 'V': 
			return "...-"; 
		case 'w':
		case 'W': 
			return ".--"; 
		case 'x':
		case 'X': 
			return "-..-"; 
		case 'y':
		case 'Y': 
			return "-.--"; 
		case 'z':
		case 'Z': 
			return "--.."; 
		case '0':
			return "-----";
		case '1':
			return ".----";
		case '2':
			return "..---";
		case '3':
			return "...--";
		case '4':
			return "....-";
		case '5':
			return ".....";
		case '6':
			return "-....";
		case '7':
			return "--...";
		case '8':	
			return "---..";
		case '9':
			return "----.";
		case ' ':
			return " ";	

	} 
} 

void morseCode(char *str) { 
	for (int i = 0; str[i]!='\0'; i++){
		printf("%s", morseEncodeCharacter(str[i]));
	}
	printf("\n");
} 

void morseDecode(char *str){
	int len;
	len = strlen(str);
	if(str[len-1] != ' '){
		strcat(str, ' ');
	}
	for(int i=0; str[i]!='\0'; ){
		
	}
}

int main(int argc, char *argv[]) { 
	char *test = argv[1];
	printf("[+] Encrypted text : "); 

	printf("\033[1;32m");
	morseCode(test); 
	printf("\033[0m");
	
	printf("\n");
	return 0; 
	
} 
