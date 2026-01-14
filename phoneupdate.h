void phoneUpdate(){
    typedef struct {
        char *tag;
        char *code;
        char *theRegex;
    } phoneInfo;

    Record temp[100];
    FILE *ptr;
    int i, a = 0, b = 0;
    int found = 0;
    int select;
    char searchname[20];

    ptr = fopen("egitimdata.txt", "r");
    if(ptr == NULL){
        printf("%s", Lptr->errorret);
        return;
    }


    while(fscanf(ptr, " %[^,],%[^,],%[^,],%s", temp[a].name, temp[a].lastName, temp[a].phone, temp[a].country.tag) == 4){
        a++;
    }
    fclose(ptr);

    while(getchar() != '\n');
    printf("%s", Lptr->nameforsearch);
    gets(searchname);

    for(i = 0; i < a; i++){
        if(strcmp(temp[i].name, searchname) == 0){
            found = 1;
            printf("%s", Lptr->change);
            scanf("%d", &select);
            while(getchar() != '\n');

            switch(select){
                case 1: {
                    phoneInfo rules[] = {
                        {"TR", "+90", "^5[0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9]$"}, 
                        {"DE", "+49", "^[0-9]+$"}, 
                        {"UK", "+44", "^7[0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9]$"},
                        {"USA", "+1", "^[2-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9][0-9]$"},
                    };
                    int k, choice = 0;
                    char newPhone[20];
                    int match_len = 0;

                    printf("%s", Lptr->phonemenu);
                    for(k = 0; k < sizeof(rules)/sizeof(rules[0]); k++){
                        printf("%d. - %s %s\n", k+1, rules[k].tag, rules[k].code);
                    }
                    while ((getchar()) != '\n');
                    printf("%s", Lptr->stselection);
                    scanf("%d", &choice);
                    choice--; 

                    if (choice < 0 || choice >= sizeof(rules)/sizeof(rules[0])) {
                        printf("%s", Lptr->yanlisno);
                        choice = 0; 
                    }
                    
                    while ((getchar()) != '\n');

                    printf("%s", Lptr->nogiris);
                    gets(newPhone);

                    if (re_match(rules[choice].theRegex, newPhone, &match_len) != -1) {
                        sprintf(temp[i].phone, "%s%s", rules[choice].code, newPhone);
                        strcpy(temp[i].country.tag, rules[choice].tag);
                        printf("%s", Lptr->recordmes); 
                        printf("%s", Lptr->regex1);
                    } else {
                        printf("%s", Lptr->regex2); 
                    }
                    break;
                }
                
                case 2: 
                    printf("%s", Lptr->entername);
                    gets(temp[i].name); 
                    if(strlen(temp[i].name) > 20){
                        printf("%s", Lptr->max20);
                    } 
                    break;

                case 3: 
                    printf("%s", Lptr->entersurname);
                    gets(temp[i].lastName); 
                    if(strlen(temp[i].lastName) > 20){
                        printf("%s", Lptr->max20);
                    } 
                    break; 
            } 
        } 
    } 

    if(found == 0){
        printf("%s", Lptr->kayityok);
        return; 
    }

    ptr = fopen("egitimdata.txt", "w");
    for(b = 0; b < a; b++){
        fprintf(ptr, "%s,%s,%s,%s\n", temp[b].name, temp[b].lastName, temp[b].phone, temp[b].country.tag);
    }
    fclose(ptr);
}