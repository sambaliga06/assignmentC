#include <stdio.h>

struct student{

    int roll_no;
    char name[20];
    float mark[3];
};

int main() {
    // Write C code here

    struct student detail[5];
    int i,j;
    float total[5];
    for(i=0;i<5;i++){
    scanf("%d",&detail[i].roll_no);
    scanf("%s",detail[i].name);
    total[i]=0;
    for(j=0;j<3;j++){
    scanf("%f",&detail[i].mark[j]);
    total[i]  +=detail[i].mark[j];
    }
    }
    
    
    
    for(i=0;i<5;i++){
    printf("name %s\n",detail[i].name);
    printf("roll NO %d\n",detail[i].roll_no);
    for(j=0;j<3;j++){
    printf("mark in subject %d = %f\n",j+1,detail[i].mark[j]);
}
        printf("total mark is %f \n",total[i]);
    }
    return 0;
}
