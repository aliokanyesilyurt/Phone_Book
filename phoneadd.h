int phoneAdd(){
    Record newRecord;
    phoneInfo rules[]= {
        {"TR", "+90", "^5[0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9]$"}, 
        {"DE", "+49", "^[0-9]+$"}, 
        {"UK", "+44", "^7[0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9]$"},
        {"USA", "+1", "^[2-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9]$"},
    };
    int i=0,choice=0;
    char newPhone[20];
    int match_length = 0;
    FILE* fptr;
    printf("\n\n");
    while(1){
    while ((getchar()) != '\n');
    printf("%s",Lptr->entername);
    gets(newRecord.name);
    if(strlen(newRecord.name) > 20){
        printf("%s",Lptr->max20);
        continue;
    }
    printf("%s",Lptr->entersurname);
    gets(newRecord.lastName);
        if(strlen(newRecord.lastName) > 20){
        printf("%s",Lptr->max20);
        continue;
    }

    printf("%s",Lptr->phonemenu);
    for(i=0;i<sizeof(rules)/sizeof(rules[0]);i++){
        printf("%d. - %s %s\n",i+1,rules[i].tag,rules[i].code);
    }

    printf("%s",Lptr->stselection);
    scanf("%d",&choice);
    choice--;
    
    if (choice < 0 || choice >= sizeof(rules)/sizeof(rules[0])) {
        printf("%s",Lptr->yanlisno);
        choice = 0;
    }
    while ((getchar()) != '\n');
    printf("%s",Lptr->nogiris);
    gets(newPhone);
    newPhone[strcspn(newPhone, "\r\n")] = 0;

    int result = re_match(rules[choice].theRegex, newPhone, &match_length);
    if(result!=-1){
    fptr=fopen("egitimdata.txt","a");
        if(fptr==NULL){
        return -1;
    }
    sprintf(newRecord.phone,"%s%s",rules[choice].code,newPhone);
    strcpy(newRecord.country.tag,rules[choice].tag);
    fprintf(fptr, "%s,%s,%s,%s\n", newRecord.name, newRecord.lastName, newRecord.phone,newRecord.country.tag);
    printf("%s",Lptr->recordmes);
    fclose(fptr);
    break; 
    }else {
            printf("%s",Lptr->yanlisno2);
            printf("%s", rules[choice].theRegex);
            printf("%s",Lptr->errorret);
        }

}
    return 0; 
}
