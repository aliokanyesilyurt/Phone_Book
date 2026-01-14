typedef struct {     
    char* stselection;    // 1. "Lutfen bir sayi seciniz: "
    char* errorret;       // 2. "Hata, geri donuluyor!\n"
    char* phoneadd1;      // 3. "Numaraniz basariyla eklendi.\n"
    char* phoneadd2;      // 4. "Numara eklenirken hata olustu.\n"
    char* entername;      // 5. "Isim giriniz: "
    char* entersurname;   // 6. "Soyisim giriniz: "
    char* max20;          // 7. "En fazla 20 karakter girebilirsiniz!\n"
    char* phonemenu;      // 8. "Telefon Kodlari Menusu\n"
    char* yanlisno;       // 9. "Yanlis secim, standart: TR (+90)\n"
    char* nogiris;        // 10. "Lutfen kod sonrasi telefon numarasini giriniz: "
    char* yanlisno2;      // 11. "Yanlis giris, olmasi gereken:  "
    char* recordmes;      // 12. "Kayit basariyla eklendi.\n"
    char* phonelist1;     // 13. "Numaralar basariyla siralandi!\n"
    char* phonelist2;     // 14. "Numaralar siralanirken hata olustu!\n"
    char* nameforsearch;  // 15. "Aramak istediginiz ismi girin: "
    char* kayityok;       // 16. "Kayit bulunamadi!\n"
    char* kayitsayisi;    // 17. "Bulunan kayit sayisi: "
    char* sort;           // 18. "Numaralar siralaniyor!\n"
    char* change;         // 19. Degisiklik Menusu
    char* regex1;         // 20. "Numara guncellendi!\n"
    char* regex2;         // 21. "Yanlis format, giris yapilamadi.\n"
    char* silinecek;      // 22. "Silinecek ismi giriniz: "
    char* karar;          // 23. "Isim bulundu... emin misiniz?"
    char* silindi;        // 24. "Silmek istediginiz numara basariyla silindi!\n"
    char* durduruldu;     // 25. "İslem durduruldu!\n"
    char* cikis;          // 26. "Cikis yaptiniz, iyi gunler!\n"
} LanguagePack;

LanguagePack TR = {   
    "Lutfen bir sayi seciniz: ",
    "Hata, geri donuluyor!\n",
    "Numaraniz basariyla eklendi.\n",
    "Numara eklenirken hata olustu.\n",
    "Isim giriniz: ",
    "Soyisim giriniz: ",
    "En fazla 20 karakter girebilirsiniz!\n",
    "Telefon Kodlari Menusu\n",
    "Yanlis secim, standart: TR (+90)\n",
    "Lutfen kod sonrasi telefon numarasini giriniz: ",
    "Yanlis giris, olmasi gereken:  ",
    "Kayit basariyla eklendi.\n",
    "Numaralar basariyla listelendi!\n",
    "Numaralar siralanirken hata olustu!\n",
    "Aramak istediginiz ismi girin: ",
    "Kayit bulunamadi!\n",
    "Bulunan kayit sayisi: ",
    "Numaralar siralandi!\n",
    "---\nYapacaginiz degisikligi secin! \n1- Tel No \n2- Ad \n3- Soyad\n---\n",
    "Numara guncellendi!\n",
    "Yanlis format, giris yapilamadi.\n",
    "Silinecek ismi giriniz: ",
    "Isim bulundu, silmek istediginize emin misiniz? (Lutfen YES(Evet) veya NO(Hayir) yazin)",
    "Silmek istediginiz numara basariyla silindi!\n",
    "İslem durduruldu!\n",
    "Cikis yaptiniz, iyi gunler!\n"
};

LanguagePack EN = {
    "Please enter a number between 1-7: ",
    "Error, returning!\n",
    "Phone number has added successfully!\n",
    "There is an error while phone number has tried to add.\n",
    "Enter a name: ",
    "Enter a surname: ",
    "You can enter max 20 characters!\n",
    "Phone Codes Menu\n",
    "Error, standart is : TR (+90)\n",
    "Please enter the phone number after the code: ",
    "Error, you choose  ",
    "Record added succesfully!\n",
    "Phone numbers were listed successfully!\n",
    "Error while listing numbers!\n",
    "Enter a name for search: ",
    "There are no records.",
    "Records: ",
    "Your numbers were sorted!\n",
    "---\nWhich one do you change? \n1- Phone \n2- Name \n3- Surname\n---\n",
    "Phone updated validly.\n",
    "Wrong format! Change cancelled.\n",
    "Please enter the name which you wanna delete: ",
    "The number was founded, are you sure you wanna delete it? (YES or NO)\n",
    "The number which you wanna delete has successfully deleted!\n",
    "The operation stopped!\n",
    "You've logged out, have a nice day!\n"
};

LanguagePack *Lptr;