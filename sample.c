/* 
* This example is copied from
* https://www.thegeekstuff.com/2013/06/buffer-overflow/
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char buff[15],otherbuf[10];
    int pass = 0;

    if( argc != 2 ) {
        printf("\n Enter the password : \n");
        scanf("%s",buff);
    } else {
        strcpy(buff,argv[1]);
    }

    if(strcmp(buff, "thesecretpass")) {
        printf ("\n Wrong Password \n");
    } else {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass) {
       /* Now Give root or admin rights to user*/
        printf ("\n Root privileges given to the user \n");
    }

    return(0);
}
