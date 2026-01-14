void phoneSort(){
    Record list[100];
    Record temp;
    FILE* ptr;
    int i,j,a=0,b=0;
    int min_pos;
    ptr=fopen("egitimdata.txt","r");
    if(ptr==NULL){
        printf("%s",Lptr->errorret);
        return;
    }

    while(fscanf(ptr," %[^,],%[^,],%[^,],%s,",list[a].name,list[a].lastName,list[a].phone,list[a].country.tag)==4){
        a++;
    }

    fclose(ptr);

    for(i=0;i<a-1;i++){
        min_pos=i;
        for(j=i+1;j<a;j++){
            if(strcmp(list[j].name,list[min_pos].name)<0){
                min_pos=j;
            }
        }
        if(min_pos!=i){
            temp = list[i];
            list[i] = list[min_pos];
            list[min_pos] = temp;
        }
    }
    
    ptr=fopen("egitimdata.txt","w");

    while(b<a){
        fprintf(ptr,"%s,%s,%s,%s\n",list[b].name,list[b].lastName,list[b].phone,list[b].country.tag);
        b++;
    }
    fclose(ptr);
}