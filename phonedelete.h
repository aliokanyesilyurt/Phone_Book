void phoneDelete() {
    Record list[100];
    FILE* ptr;
    int i=0,j,a,found=0;
    char delete[20],conc[5];

    ptr=fopen("egitimdata.txt","r");
    if(ptr==NULL){
        printf("%s",Lptr->errorret);
        return;
    }

    while(fscanf(ptr," %[^,],%[^,],%[^,],%s,",list[i].name,list[i].lastName,list[i].phone,list[i].country.tag)==4){
        i++;
    }

    fclose(ptr);

    while ((getchar()) != '\n');
    printf("%s",Lptr->silinecek);
    gets(delete);

    for(j=0;j<i;j++){
        if(strcmp(list[j].name,delete)==0){
            found=1;
            break;
        }
    }
    
    if(found==0){
        printf("%s",Lptr->kayityok);
        return;
    }

    printf("%s",Lptr->karar);
    gets(conc);

    if(strcmp(conc,"YES")==0){
        ptr=fopen("egitimdata.txt","w");
        for(a=0;a<i;a++){
            if(a!=j){
                fprintf(ptr,"%s,%s,%s,%s\n",list[a].name,list[a].lastName,list[a].phone,list[a].country.tag);
            }
        }
        fclose(ptr);
        printf("s",Lptr->silindi);
    }else if(strcmp(conc,"NO")==0){
        printf("%s",Lptr->durduruldu);
        return;
    }else{
        printf("%s",Lptr->errorret);
        return;
    }
}