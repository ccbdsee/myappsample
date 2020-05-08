#include <stdio.h>
//modify file with comment
//this is a comment for anoother patch

//this is a comment for a new branch


size_t my_strlen(const char *s)
{
   char *p = s;

   while (*p)
      ++p;

   return (p - s);
}


char *my_strcpy(char *t, char *s)

{
   
   char *p = t;
   
    while (*t++ = *s++);
   
   
   return p;
   
}
//this is an added comment
//this is another comment

int main(void)
{
   int i;
   char p1[32];
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
   
   printf("%s\n", my_strcpy(p1, "Hello, World !!!"));

   return 0;
}