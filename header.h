typedef struct{
    char tag[5];
    char code[5];
    char theRegex[60];
}phoneInfo;

typedef struct{
    char name[20];
    char lastName[20];
    char phone[20];
    phoneInfo country;
}Record;

void menuTR();
void menuEN();
void phoneUpdate();
void phoneDelete();
void phoneSort();
int phoneAdd();
int phoneList(int langselect);
int phoneSearch(char*,int langselect);