#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int hesap,basithesap,say1,say2,sonuc,o,o1,o2,o3,o4,c,d,j,k,l,m,nane;
    float say3,say4,sonuc2,sonuc6,a,b,i;
    while(1)
    {
        printf("\n\n************Hesap Makinesi*************\n\n");
        printf("1-Basit Hesap Makinesi\n");
        printf("2-Gelismis Hesap Makinesi\n");
        printf("Cikmak icin 0 degerini girin\n ");
        printf("Kullanmak istediginiz modu seciniz: ");

        scanf("%d",&hesap);
        switch(hesap)
        {
        case 0:
            return 0;
            break;
        case 1:
            printf("\n******Basit Mod******\n");
            printf("1-Toplama\n");
            printf("2-Cikarma\n");
            printf("3-Carpma\n");
            printf("4-Bolme\n");
            printf("Ust menuye donmek icin 0 degerini girin\n");
            printf("Yapmak istediginiz islem numarasini giriniz: ");
            scanf("%d",&basithesap);
            switch(basithesap)
            {
            case 0:
                break;
            case 1:
                printf("\nBirinci sayiyi girin: ");
                scanf("%d",&say1);
                printf("Ikinci sayiyi girin: ");
                scanf("%d",&say2);
                sonuc=say1+say2;
                printf("Sonuc: %d",sonuc);
                break;
            case 2:
                printf("\nCikarilan sayiyi girin: ");
                scanf("%d",&say1);
                printf("Cikan sayiyi girin: ");
                scanf("%d",&say2);
                sonuc=say1-say2;
                printf("Sonuc: %d",sonuc);
                break;
            case 3:
                printf("\nBirinci sayiyi girin: ");
                scanf("%d",&say1);
                printf("Ikinci sayiyi girin: ");
                scanf("%d",&say2);
                sonuc=say1*say2;
                printf("Sonuc: %d",sonuc);
                break;
            case 4:
                printf("\nBolunen sayiyi girin: ");
                scanf("%f",&say3);
                printf("Bolen sayiyi girin: ");
                scanf("%f",&say4);
                sonuc2=say3/say4;
                printf("Sonuc: %f",sonuc2);
                break;
            default:
                printf("\n*********************Lutfen gecerli bir islem numarasi girin*********************");
                break;
            }
            break;
        case 2:
            printf("\n******Gelismis Mod******\n");
            printf("1-Toplama\n");
            printf("2-Cikarma\n");
            printf("3-Carpma\n");
            printf("4-Bolme\n");
            printf("5-Mod\n");
            printf("6-Karekok\n");
            printf("7-Us alma\n");
            printf("8-Logaritma\n");
            printf("Ust menuye donmek icin 0 degerini girin\n");
            printf("Yapmak istediginiz islem numarasini giriniz: ");
            scanf("%d",&basithesap);
            switch(basithesap)
            {
            case 0:
                break;
            case 1:
                printf("\nBirinci sayiyi girin: ");
                scanf("%d",&say1);
                printf("Ikinci sayiyi girin: ");
                scanf("%d",&say2);
                sonuc=say1+say2;
                printf("Sonuc: %d",sonuc);
                break;
            case 2:
                printf("\nBirinci sayiyi girin: ");
                scanf("%d",&say1);
                printf("Ikinci sayiyi girin: ");
                scanf("%d",&say2);
                sonuc=say1-say2;
                printf("Sonuc: %d",sonuc);
                break;
            case 3:
                printf("\nBirinci sayiyi girin: ");
                scanf("%d",&say1);
                printf("Ikinci sayiyi girin: ");
                scanf("%d",&say2);
                sonuc=say1*say2;
                printf("Sonuc: %d",sonuc);
                break;
            case 4:
                printf("\nBirinci sayiyi girin: ");
                scanf("%f",&say3);
                printf("Ikinci sayiyi girin: ");
                scanf("%f",&say4);
                sonuc2=say3/say4;
                printf("Sonuc: %f",sonuc2);
                break;
            case 5:
                printf("Modunu almak istediginiz degeri girin: ");
                scanf("%d",&say1);
                printf("Mod degerini girin: ");
                scanf("%d",&say2);
                sonuc=say1%say2;
                printf("Sonuc: %d",sonuc);
                break;
            case 6:
                printf("Karekokunu almak istediginiz sayiyi gir: ");
                scanf("%f",&a);
                a=sqrt(a);
                printf("Sonuc: %.2f",a);
                break;
                /* case 6:

                printf("Karekokunu almak istedigin sayiyi gir: ");
                scanf("%d",&a);
                for (b=1; b<=a; b+=1)
                {
                    c=a%b;
                    if (c==0)
                    {
                        if(a==b*b)
                        {
                            printf("Sonuc: %d",b);



                        }
                    }
                }

                break; */

            case 7:
                printf("Taban degerini girin: ");
                scanf("%d",&o);
                printf("Us degerini girin: ");
                scanf("%d",&o1);
                o2=pow(o,o1);
                printf("Sonuc: %d",o2);
                break;
              /*  case 7:


                printf("Taban degerini girin: ");
                scanf("%d",&o);
                printf("Us degerini girin: ");
                scanf("%d",&o1);
                o4=1;
                for (o2=0; o2<o1; o2++)

                {
                    o4=o4*o;
                }
                printf("Sonuc: %d",o4);

                break;*/
            case 8:
                printf("Logaritma taban degerini girin: ");
                scanf("%d",&k);
                printf("Logaritmasini almak istediginiz degeri girin: ");
                scanf("%d",&l);
                i=log10(l)/log10(k);
                printf("Sonuc: %.2f",i);
                break;
                   /* case 8:
                printf("Logaritma taban degerini girin: ");
                scanf("%d",&k);
                printf("Logaritmasini almak istediginiz degeri girin: ");
                scanf("%d",&l);


                for (i=0; l>1 ; i++)
                {
                    l=l/k;

                }



                printf("Sonuc: %d",i);


                break;*/
            default:
                printf("\n*********************Lutfen gecerli bir islem numarasi girin*********************");
                break;

            }
            break;
        default:
            printf("\n*********************Lutfen gecerli bir islem numarasi girin*********************");
            break;
        }
    }
}
