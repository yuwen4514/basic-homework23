#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
   FILE *pF;
   int c;         

   int sum=0;

   char poem[50]; 

	printf("�ϥΰ�Ū�Ҧ�Ū��data.txt\n");
	printf("Ū�������e���G\n"); 

   pF=fopen("data.txt", "r");
   if (pF==NULL)
   {  
      printf("�ɮ׶}�ҥ���!!\n");
      exit(1); 
   }
    rewind(pF);
    while ((fgets(poem, 50, pF)) != NULL)
       printf("%s", poem);
       printf("\n");
    fclose(pF);
    system("pause");
    return 0;

}
