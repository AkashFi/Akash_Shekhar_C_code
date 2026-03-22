#include<stdio.h>

int main() {
    int phy,chem,math,hind,eng;
    float per,sum;
    printf("Enter marks of physics : ");
    scanf("%d",&phy);
    printf("Enter marks of chemistry : ");
    scanf("%d",&chem);
    printf("Enter marks of mathmatics : ");
    scanf("%d",&math);
    printf("Enter marks of hindi : ");
    scanf("%d",&hind);
    printf("Enter marks of english : ");
    scanf("%d",&eng);

    sum = phy+chem+math+hind+eng;
    printf("Total sum is =%f\n",sum);
    per = sum/5;

    printf("Percantage is =%f\n",per);

    return 0;

}