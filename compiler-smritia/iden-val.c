#include<stdio.h> 
#include<string.h> 

//#include<conio.h> 
#include<ctype.h> 
void main() 
{ 
 char identifier[20]; 
 int flag, i = 1; 
 printf("\n Enter an identifier :"); 
 fgets(identifier, sizeof(identifier), stdin);
    // Remove trailing newline character
    identifier[strcspn(identifier, "\n")] = 0;
 if(isalpha(identifier[0])) 
 flag = 1; 
 else 
 printf("\n It is not valid identifier"); 
 while(identifier[i] != '\0') 
 { 
 if(!isdigit(identifier[i])&&!isalpha(identifier[i]))  { 
 flag = 0; 
 break; 
 } 
 i++; 
 } 
 if(flag == 1) 
 printf("\n It is a valid identifier"); 
 //getch(); 
} 
