int phoneSearch(char* ptrSearch,int langselect){
    Record currentRecord;
    int i=0;
    FILE* fptr;
    fptr=fopen("egitimdata.txt","r");
    if(fptr==NULL){
        return -1;
    }
    printf("\n\n");
    
    switch(langselect){
        case 1: printf("%-20s %-20s %-15s %-5s\n", "Ad", "Soyad", "Telefon No", "Ulke");
                printf("-------------------- -------------------- --------------- ---\n");
                break;
        case 2: printf("%-20s %-20s %-15s %-5s\n", "Name", "Surname", "Phone Number", "Tag");
                printf("-------------------- -------------------- --------------- ---\n");
                break;
    }

    while(fscanf(fptr, " %[^,],%[^,],%[^,],%s,", currentRecord.name, currentRecord.lastName, currentRecord.phone,currentRecord.country.tag) == 4){
    if(strstr(currentRecord.name,ptrSearch)!=NULL){
        printf("%-20s %-20s %-15s %-5s\n", currentRecord.name, currentRecord.lastName, currentRecord.phone, currentRecord.country.tag); 
    i++;
    }
}
    fclose(fptr);
    return i;
}
