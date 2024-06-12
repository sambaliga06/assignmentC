#include <stdio.h>
int main()
{
    int choice,val;
    char str1[10],str2[10];

    while(1){
        printf("\nEnter choice   \n 1. length \n 2. reverse \n 3. Copy \n 4. Compare \n 5. concat \n");
        scanf("%d",&choice);

        switch(choice){
        case 1:

            printf("Enter String \n");
            scanf("%s",str1);
            int length = StrLen(str1);
            printf("Count= %d\n",length);

        break;
        case 2:
            SReversal();
            break;
        case 3: CopyStr();
            break;
        case 4:
            printf("Enter String1 \n");
            scanf("%s",str1);
            printf("Enter String2 \n");
            scanf("%s",str2);
            val=strcmp(str1,str2);
            if(val){
                printf("Not Equal \n");
            }else
            printf("Equal String \n");

            break ;

        case 5:
            printf("Enter String1 \n");
            scanf("%s",str1);
            printf("Enter String2 \n");
            scanf("%s",str2);
            strcat(str1,str2);
            printf("%s \n",str1);
            break;
        default:
            exit (0);

        }
    }
    return 0;
}

int StrLen(char str[]){
            int i;
            for(i=0;str[i]!='\0';i++);
            return i;

}

void SReversal(){
    char str1[10];
            printf("Enter String \n");
            scanf("%s",str1);
            int i;
            for(i=StrLen(str1);i>=0;i--){
                printf("%c",str1[i]);
            }
            }
void CopyStr(){

  char str1[10],str2[10];
            printf("Enter String1 \n");
            scanf("%s",str1);
            int i;
            for(i=0;str1[i]!='\0';i++){
               str2[i]=str1[i];
            }
            printf("String 2  %s \n",str2);
}
