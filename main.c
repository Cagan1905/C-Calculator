#include <stdio.h>
#include <stdlib.h>



int main()
{
while(1){
int sayi1,sayi2;
int sum=0;
char islem;
printf("--------------Hesap Makinesi Uygulamasý--------------\n");
printf("Lutfen bir islem seciniz:\n +\n -\n *\n /\n");
scanf("%c",&islem);


if(islem=='+'){
        printf("Toplama islemi");
        printf("Lutfen toplanacak birinci sayiyi girin\t");
        scanf("%d",&sayi1);
        printf("Lutfen toplanacak ikinci sayiyi girin\t");
        scanf("%d",&sayi2);
        printf("Sonuc:%d\n", sayi1+sayi2);
}



else if(islem=='-'){
        printf("Cikarma islemi\n");
        printf("Lutfen cikarilacak birinci sayiyi girin\t");
        scanf("%d",&sayi1);
        printf("Lutfen cikarilacak ikinci sayiyi girin\t");
        scanf("%d",&sayi2);
        printf("Sonuc:%d\n", sayi1-sayi2);

}



else if(islem=='*'){
        printf("Carpma islemi\n");
        printf("Lutfen carpilacak birinci sayiyi girin\t");
        scanf("%d",&sayi1);
        printf("Lutfen carpilacak ikinci sayiyi girin\t");
        scanf("%d",&sayi2);
        printf("Sonuc:%d\n", sayi1*sayi2);

}



else if(islem=='/'){
        printf("Bolme islemi\n");
        printf("Lutfen bolunecek birinci sayiyi girin\t");
        scanf("%d",&sayi1);
        printf("Lutfen bolunecek ikinci sayiyi girin\t");
        scanf("%d",&sayi2);
        printf("Sonuc:%d\n", sayi1/sayi2);

}
getch();

}
    return 0;
}
