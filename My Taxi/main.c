#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define satir 13
#define sutun 17

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int i=0,j=0,sayi=0,ucret=0,sofor=0,gyer=0,deger=0,odemey,soforpuan;
char ad[50];
char soyad[50];
char sec=0;
char tno[12];
void matris();
	int sayi1=0;
int soforucrt[3]={5,7,9};
void odeme_sekli();
int sayi;
int main() {
	setlocale(LC_ALL, "Turkish"); 
	printf("\n=================================\n");
	printf("    My Taxi'ye Hoþgeldiniz.");
	printf("\n=================================");
	printf("\n1>> Müþteri Kayýt");
	printf("\n------------------------");
	printf("\n2>> Güzergahlar");
	printf("\n------------------------");
	printf("\n3>> Þoför Bilgileri");
	printf("\n------------------------");
	printf("\n4>> Çýkýþ");
	printf("\n------------------------");
	printf("\n\n-->");
	scanf("%d",&deger);
	bilgi();

	return 0;
}
int bilgi()
{
setlocale(LC_ALL, "Turkish"); 

if(deger==1)
{
printf("Adýnýzý Giriniz");
printf("\n-->");
scanf("%s",&ad);
printf("Soyadýnýzý Giriniz");
printf("\n-->");
scanf("%s",&soyad);
bilgi_kaydetme();
printf("Lütfen TC kimlik numaranýzý giriniz: ");
printf("\n-->");
    while(1)
{
	scanf("%s", &tno);
    if (strlen(tno) != 11)
    {
        printf("Girilen TC kimlik numarasý 11 haneli deðil. Lütfen geçerli bir TC kimlik numarasý giriniz.\n");
    
	}
    else
	{
		break;
	}
}
printf("Girdiðiniz Bilgiler\nAD:%s\nSOYAD:%s\nTC:%s\n",ad,soyad,tno);
giris_bilgi();
}
else if(deger==2)
{
printf("\n------------------------");
printf("\n1>> MENTEÞE-MARMARÝS 66km");
printf("\n------------------------");
printf("\n2>> MENTEÞE-BODRUM 121km");
while(1)
{
printf("\n------------------------");
printf("\n0>> Menü");
printf("\n------------------------");
printf("\n4>> Çýkýþ");
printf("\n------------------------");
printf("\n-->");
	scanf("%d",&sayi1);
	
	if(sayi1==0)
	return main();
	else if(sayi1==4)
	{
	printf("Tekrar Bekleriz.");
    break;
	}
	else
	printf("Geçersiz cevap. Lütfen tekrar deneyin.");
}
}
else if(deger==3)
{

	printf("\n------------------------");
    printf("\n1>> Mahmut SOY 48MU48 KM Baþýna Ücret=5TL");
    printf("\n------------------------");
    printf("\n2>> Metin ÇOK 48MO46 Km Baþýna Ücret=7TL");
    printf("\n------------------------");
    printf("\n3>> Orhan KOR 48MK48 KM Baþýna Ücret=9TL");
    printf("\n------------------------\n");
	while(1)
	{
	printf("\n------------------------");
    printf("\n0>> Menü");
    printf("\n------------------------");
    printf("\n4>> Çýkýþ");
    printf("\n------------------------");
    printf("\n-->");
    scanf("%d",&sayi1);
	if(sayi1==0)
	return main();
	else if(sayi1==4)
	{
	printf("Tekrar Bekleriz.");
    break;
	}
	else
	printf("Geçersiz cevap. Lütfen tekrar deneyin.");
}
}
else if(deger==4)
{
	printf("Tekrar bekleriz");
}
else
{
	printf("Geçersiz cevap. Lütfen tekrar deneyin.");
}
}
int giris_bilgi()
{
	setlocale(LC_ALL, "Turkish"); 
	printf("Girdiðiniz Bilgiler Doðru mu?");
	printf("\n1>>Evet");
	printf("\n2>>Hayýr");
	printf("\n-->");
scanf("%d",&sayi);
if(sayi==1)
{
	sofor_sec();
}
	else if(sayi==2)
	{
	bilgi();
	}
	else
	{
		printf("Geçersiz cevap. Lütfen tekrar deneyin.\n");
	}
}
int sofor_sec()
{
	setlocale(LC_ALL, "Turkish"); 
	printf("Þoför Seçin");
	printf("\n------------------------");
    printf("\n1>> Mahmut SOY 48MU48 KM Baþýna Ücret=5TL");
    printf("\n------------------------");
    printf("\n2>> Metin ÇOK 48MO46 Km Baþýna Ücret=7TL");
    printf("\n------------------------");
    printf("\n3>> Orhan KOR 48MK48 KM Baþýna Ücret=9TL");
    printf("\n------------------------\n");
	printf("-->");
	scanf("%d",&sofor);
	printf("Gideceðiniz Yeri Seçin");
	printf("\n------------------------");
    printf("\n1>> MENTEÞE-MARMARÝS 66km");
    printf("\n------------------------");
    printf("\n2>> MENTEÞE-BODRUM 121km");
    printf("\n------------------------\n");
    printf("-->");
	scanf("%d",&gyer);
	switch(sofor)
	{
		case 1:
			switch(gyer)
			{
			case 1:
			ucret=soforucrt[0]*66;
			printf("%dTL Ödenecek Tutar",ucret);
			break;
			case 2:
			ucret=soforucrt[0]*121;
			printf("%dTL Ödenecek Tutar",ucret);
			break;
	        }
		break;
		case 2:
			switch(gyer)
			{
			case 1:
			ucret=soforucrt[1]*66;
			printf("%dTL Ödenecek Tutar",ucret);
			break;
			case 2:
			ucret=soforucrt[1]*121;
			printf("%dTL Ödenecek Tutar",ucret);
			break;
		    }
		break;
		case 3:
			switch(gyer)
			{
			case 1:
			ucret=soforucrt[2]*66;
			printf("%dTL Ödenecek Tutar",ucret);
			break;
			case 2:
			ucret=soforucrt[2]*121;
			printf("%dTL Ödenecek Tutar",ucret);
			break;
		    }
		    break;
	}
	odeme_sekli();
}
void odeme_sekli()
{
	setlocale(LC_ALL, "Turkish"); 
	printf("\nLütfen Ödeme Yöntemini Seçiniz(1 = Nakit(Yüzde 10 Ýndirim), 2 = Kredi Kartý(Yüzde 10 Ekstra Ücret))");
	printf("-->");
    scanf("%d",&odemey);

if(odemey==1)
{
	ucret=ucret*0.9;
	printf("\n%dTL Nakit Ödenmiþtir",ucret);
	varis_soru();


}

else if(odemey==2)
{
	ucret=ucret/0.9;
	printf("\n%dTL Kredi Kartýyla Ödenmiþtir.",ucret);
    varis_soru();
}
else
{
	printf("\nGeçersiz cevap. Lütfen tekrar deneyin.");
}
}
void matris()
{
    int i, j;
    char matris[satir][sutun];

    
    for (i = 0; i < satir; i++)
    {
        for (j = 0; j < sutun; j++)
        {
            matris[i][j] = ' ';
        }
    }

    for (i = 0; i < 3; i++) 
    { 
        for (j = 0; j < sutun; j++) 
        { 
            if ((j >= 4-i && j <= 5+i) || j >= 13-i && j <= 14+i)
            {
                matris[i][j] = '*';
            }
        }
    }

    
    for (i = 0; i < 9; i++) 
    { 
        for (j = 0; j < sutun; j++) 
        {
            if (j >= i && j <= 18-i)
            {
                matris[i+3][j] = '*';
            }
        }
    }

    
    for (i = 0; i < satir; i++)
    {
        for (j = 0; j < sutun; j++)
        {
            printf("%c", matris[i][j]);
        }
        printf("\n");
}  
}
int puan()
{
int j=0,f=0,t=0;
char kotu[] = {'1','>','>','K', 'ö', 't', 'ü', '\0'};
char fena_degil[] = {'2','>','>','F', 'e', 'n', 'a', ' ', 'D', 'e', 'ð', 'i', 'l', '\0'};
char iyi[] = {'3','>','>','Ý', 'y', 'i', '\0'};
char cok_iyi[] = {'4','>','>','Ç', 'o', 'k', ' ', 'Ý', 'y', 'i', '\0'};
char mukemmel[] = {'5','>','>','M', 'ü', 'k', 'e', 'm', 'm', 'e', 'l', '\0'};
int i;
char *kelimeler[] = {kotu, fena_degil, iyi, cok_iyi, mukemmel};

for (i = 0; i < 5; i++) 
{
    for (j = 0; kelimeler[i][j] != '\0'; j++)
	 {
        printf(" %c", kelimeler[i][j]);
     }
    printf("\n");
}
	printf("Þoförü 0 ile 5 Arasýnda Deðerlendirin.");
	while(1)
{
	
	scanf("%d",&soforpuan);
	if(soforpuan>=0&&soforpuan<=5)
 {
	if(soforpuan==5)
	{
		for(t=0;t<1;t++)
		{
			printf("Bize Zaman Ayýrdýðýnýz Ýçin Teþekürler.Yaptýðýnýz Deðerlendirme-->%s",&mukemmel[t+3]);
			
		}
	}	
	else if(soforpuan==4)
	{
			for(t=0;t<1;t++)
		{
		printf("Bize Zaman Ayýrdýðýnýz Ýçin Teþekürler.Yaptýðýnýz Deðerlendirme-->%s",&cok_iyi[t+3]);
	    }	
	}
	else if(soforpuan==3)
	{
			for(t=0;t<1;t++)
		{
		printf("Bize Zaman Ayýrdýðýnýz Ýçin Teþekürler.Yaptýðýnýz Deðerlendirme-->%s",&iyi[t+3]);
	    }
	    break;
	}
	else if(soforpuan==2)
	{
			for(t=0;t<1;t++)
		{
		printf("Bize Zaman Ayýrdýðýnýz Ýçin Teþekürler.Yaptýðýnýz Deðerlendirme-->%s",&fena_degil[t+3]);
	    }	
	}
	else if(soforpuan==1)
	{
			for(t=0;t<1;t++)
		{
		printf("Bize Zaman Ayýrdýðýnýz Ýçin Teþekürler.Yaptýðýnýz Deðerlendirme-->%s",&kotu[t+3]);
	    }	
	}
 }
	else
	{
		printf("Geçersiz cevap. Lütfen tekrar deneyin.");
		continue;
	}
break;
}
}
int varis_soru()
{
	printf("\n2 Boyutlu Matris Görmek Ýster misiniz? (E),(H)");
	while (1) 
  {
    scanf(" %c", &sec); 

    if (sec == 'E' || sec == 'e') 
    {
       matris();
       break;
    } 
         else if (sec == 'H' || sec == 'h') 
       {
          break;
       } 
    else 
   {
       printf("Geçersiz cevap. Lütfen tekrar deneyin.\n");
   }
 }
	printf("\nÞoför Bulunduðunuz Konuma Geldi mi? (E),(H)");
	while (1) 
 {
   scanf(" %c", &i); 

if (i == 'E' || i == 'e')
{
  	printf("\nGideceðiniz Konuma Geldiniz mi? (E),(H)");
	while (1) 
  {
    scanf(" %c", &j); 

if (j == 'E' || j == 'e') 
{
  return puan();
}
 else if (j == 'H' || j == 'h')
 {
 	printf("\nGideceðiniz Konuma Geldiniz mi? (E),(H)");
  continue;
} 
else 
{
  printf("Geçersiz cevap. Lütfen tekrar deneyin.\n");
}
}
} 
else if (i == 'H' || i == 'h') 
{
	printf("Þoför Gelmek ÜZere.");
   printf("\nÞoför Bulunduðunuz Konuma Geldi mi? (E),(H)");
  continue;
} 
else 
{
  printf("Geçersiz cevap. Lütfen tekrar deneyin.\n");
}
}
}

int bilgi_kaydetme()
{
	FILE *fp;
	 fp = fopen("bilgiler.txt", "a");
    if (fp == NULL)
    {
        printf("Dosya açýlamadý!\n");
    }

    fprintf(fp, "Ad: %s\n", ad);
    fprintf(fp, "Soyad: %s\n", soyad);

    fclose(fp);
	
}
