#include<stdio.h>
int main(){
int arr[100];
int brr[100];
printf("istediginiz kadar sayi yazabilirsiniz bitirdiginizde 0 a basin=");
int i=0;
int b=0;
int num=0;
int count=0;
for(i=0;i<100;i++){
    scanf("%d",&arr[i]);
    if(arr[i]==0)
    break;
}
printf("aramak istediginiz sayiyi giriniz=");
scanf("%d",&num);
for(i=0;i<sizeof(arr)/sizeof(arr[i]);i++){
    if(arr[i]==num){
        count++;
        brr[b]=i+1;
        b++;
    }
}
if(count<=0){
    printf("sayi bulunamadi");
}
else 
printf("sayi bulundu ve %d adet \n",count);
printf("indeksleri asagidaki gibidir\n");
for(i=0;i<count;i++){
    printf("%d\n",brr[i]);
}
}