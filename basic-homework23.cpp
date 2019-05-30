#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
   FILE *pF;
   int c;         

   int sum=0;

   char poem[50]; 

	printf("使用唯讀模式讀取data.txt\n");
	printf("讀取的內容為：\n"); 

   pF=fopen("data.txt", "r");
   if (pF==NULL)
   {  
      printf("檔案開啟失敗!!\n");
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
