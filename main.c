#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include "re.h"
#include "re.c"
#include "language.h"
#include "header.h"
#include "menu.h"
#include "phoneadd.h"
#include "phonelist.h"
#include "phonesearch.h"
#include "phonesort.h"
#include "phoneupdate.h"
#include "phonedelete.h"


/*
Türkçe-İngilizce Dil Desteği
*/


int main() {
    int choice=0;
    char searchName[20];
    int searchResult=0;
    int langselect;
    
    printf("-------------------------\n");
    printf("Please select your language\n");
    printf("1- Turkce / 2- English\n");
    printf("Selection: ");
    scanf("%d",&langselect);
    printf("-------------------------\n\n");
    
    switch(langselect){
        case 1: printf("Turkceyi sectiniz!\n");
                Lptr=&TR;
                menuTR();
                break;
        case 2: printf("You've selected English!\n");
                Lptr=&EN;
                menuEN();
                break;
        default: printf("%s",Lptr->errorret);
                system("pause");
                return 0;
    }

    do{
        printf("%s",Lptr->stselection);
        scanf("%d",&choice);
        if(choice > 7 || choice < 1){
            printf("%s",Lptr->errorret);
            system("pause");
            return 0;
        }

        switch(choice){
        case 1: if(phoneAdd()==0){
            printf("%s",Lptr->phoneadd1);
        }else{
            printf("%s",Lptr->phoneadd2);
        }
                break;
        case 2: if(phoneList(langselect)==0){
            printf("%s",Lptr->phonelist1);
        }else{
            printf("%s",Lptr->phonelist2);
        }
                break;

        case 3: printf("%s",Lptr->nameforsearch);
                scanf("%s",searchName);
                searchResult=phoneSearch(searchName,langselect);
                if(searchResult == 0){
                    printf("%s",Lptr->kayityok);
                    system("pause");
                    return 0;
                }else{
                    printf("%s",Lptr->kayitsayisi);
                    printf("%d\n",searchResult);
                }
                break;
        case 4: phoneSort();
                printf("%s",Lptr->sort);  
                break;          
        case 5: phoneUpdate();
                break;
        case 6: phoneDelete();
                break;
        case 7: printf("%s",Lptr->cikis);
                system("pause");
                return 0;
                break;
        default: printf("%s",Lptr->errorret);
    }
    }while(choice!=7);

    system("pause");
    return 0;
}