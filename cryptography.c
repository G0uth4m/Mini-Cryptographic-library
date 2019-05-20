#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
	//system("figlet Cryptography"); Want a stylished welcome? Install figlet and uncomment this line
	//$sudo apt install figlet
	printf("\n\n");
	printf("Choose any algorithm : \n\n");
	printf("[1] Morse Code\n");
	printf("[2] MD5 Hashing\n");
	printf("[3] SHA-256 Hashing\n");
	printf("[4] RSA algorithm\n");
	
	printf("\033[1;31m");
	printf("\n>>>");
	printf("\033[0m");
	
	int choice;
	scanf("%d", &choice);
	printf("\n");

	if(choice == 1){
		char str1[20];
		char pr1[10];
		strcpy(pr1,"./morse ");
		printf("[*] Enter string to be encrypted : ");
		scanf("%s", str1);
		strcat(pr1, str1);
		system(pr1);
		
	}
	else if (choice == 2){
		char str2[20];
		char pr2[10];
		strcpy(pr2,"./md5 ");
		printf("[*] Enter string to be encrypted : ");
		scanf("%s", str2);
		strcat(pr2, str2);
		system(pr2);
	}
	else if (choice == 3){
		char str3[20];
		char pr3[10];
		strcpy(pr3,"./sha256 ");
		printf("[*] Enter string to be encrypted : ");
		scanf("%s", str3);
		strcat(pr3, str3);
		system(pr3);
	}
	else if (choice == 4){
		system("./rsa");
	}

}