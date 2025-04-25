#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *filename;
char fileinput[1024];
char security[5];
int main(){
   system("cls");
   printf("\033[0;32m                                      ----------Welcome To Remops----------\n\n\033[0m\n");
    printf(" -Remops is a application that Users that dont trust automatically deletion so we make it 'manually' Deletion\n");
    printf(" Disclaimer: Please be safe on this .exe file dont delete any important files of your own system or any related to it.\n Developer will not have any 'Responsibility' On Any Damage of your computer/devices\n\n");
    printf(" Press Enter To Continue: ");
    fgets(security,5,stdin);
    if(strcmp(security,"\n") == 0){
      system("cls");
      printf("\033[0;32m                                      ----------[Remops Deletion Menu]----------\n\n\n\n\033[0m");
      printf(" Type a file name which this program have the same directory as the file that you want to delete or\n\n");
      printf(" Type its full path of the filename but please watchout!.\n\n Example: C:Asus/Desktop <--- Dont do this! instead add back of the file name that you want to delete!\n\n");
      printf(" Example: C:Asus/Desktop/name.txt <---- Do This!\n\n");
      printf(" Type a filename or its full path to delete: ");
        fgets(fileinput,sizeof(fileinput),stdin);
    fileinput[strcspn(fileinput,"\n")] = '\0';
    filename = (char *) malloc(strlen(fileinput) + 1);
    strcpy(filename,fileinput);
     if(remove(filename) == 0){
        printf("'%s' Successfully Deleted!\n",fileinput);
        free(filename);
        return 0;
     }
     else{
        printf("'%s' Cannot Be Deleted\n",fileinput);
        perror("Cause");
        free(filename);
     }
     free(filename);
     return 0;
   }
   return 0;
}