#include <stdio.h>
#include <string.h>

int copy_buf (char *to, int pos, char *from, int len)
{
    int i;
    for (i=0;i<len;i++)
    {
         to[pos] = from [i];
         pos++;
    }
    return pos;
}

int main(int argc, char **argv)
{
    char buff[15],otherbuf[10];
    int pass = 0;

    printf("\n Enter the password : \n");
    scanf("%s",buff);

    copy_buf( buff, 3, otherbuf, 4);

    if(strcmp(buff, "thesecretpassword"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
       /* Now Give root or admin rights to user*/
        printf ("\n Root privileges given to the user \n");
    }

    return(0);
}
