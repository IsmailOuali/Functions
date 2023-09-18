#include<stdio.h>




int main()
{
   char s[20];
   int i = 0;

    gets(s);
   while(s[i] != '\0')
   {
        if (s[i] >= 'a' && s[i] <= 'w')
        {
            s[i] +=3;
        }
        else if (s[i] == 'x')
        {
            s[i] = 'a';
        }
        else if (s[i] == 'y')
            s[i] = 'b';
        else if (s[i] == 'z')
            s[i] = 'c';
        i++;
   }
   printf("%s", s);

}