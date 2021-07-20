#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void gotoxy(int x,int y);
void tgl();
void readPass(char *temp);
void login();
void menu();
void menu1();
void menu2();
void menu3();
void menu4();
void menu5();
void menu6();
void menu7();
void menu8();


struct riwayat{
	char aktivitas[100];
}rwy[1000];

typedef struct pasien{
    int norm;
    char nama_pasien[20];
    char hp[15];
    char alamat[50];
    char wali[20];
};

int total_rwy=0;
int jumlah,jumlah1,carnorm;
struct pasien psn[5];
char ubnama_pasien[20], ubhp[3], ubal[50], ubwal[20], carnama_pasien[20], carhp[15], carala[50], carwali[20];

void main()
{
    login();
}

void login(){
    char username[10];
    char password[10];
    struct tm *Sys_T;
    time_t Tval;
    Tval = time(NULL);
    Sys_T = localtime(&Tval);
    system("cls");
    system("color 4F");
    gotoxy(35,10);
    printf("SELAMAT DATANG DI DATABASE RUMAH SAKIT\n\n");
    gotoxy(35,13);
    printf("======================================\n");
    gotoxy(35,14);
    printf("Masukkan username (admin) : \n");
    gotoxy(35,16);
    printf("Masukkan password (admin) : \n");
    gotoxy(35,17);
    printf("======================================\n");
    gotoxy(35,18);
    printf("%d %d %d", Sys_T->tm_mon+1, Sys_T->tm_mday, 1900+Sys_T->tm_year);
    gotoxy(65,18);
    printf("%d:%d:%d", Sys_T->tm_hour, Sys_T->tm_min, Sys_T->tm_sec);
    gotoxy(65,14);
    scanf("%s",&username);
    gotoxy(65,16);
    readPass(password);
    if(strcmp(username,"admin")==0 && strcmp(password,"admin")==0){
        gotoxy(35,16);
        printf("Loading. . .\n");
        menu();
    }else{
         gotoxy(40,20);
         printf("Password atau Username Salah\n");
         getch();
         login();
    }
}

void menu(){
    int pilih;
    system("cls");
    system("color 1F");
    gotoxy(30,1);
    printf("+======================================================+\n\n");
    gotoxy(35,3);
    printf("\tSELAMAT DATANG DI DATABASE RUMAH SAKIT\n");
    gotoxy(35,4);
    printf("\t\t=== DATA PASIEN ===\n\n");
    gotoxy(30,6);
    printf("+------------------------------------------------------+\n");
    gotoxy(30,8);
    printf("| %-52s |", " ");
    gotoxy(30,9);
    printf("| %-52s |","Tekan 1. Membuat Database Pasien");
    gotoxy(30,10);
    printf("| %-52s |","Tekan 2. Menampilkan Isi Database Pasien");
    gotoxy(30,11);
    printf("| %-52s |","Tekan 3. Menambah Data Baru Ke Database Pasien");
    gotoxy(30,12);
    printf("| %-52s |","Tekan 4. Menghapus Data di Database Pasien");
    gotoxy(30,13);
    printf("| %-52s |","Tekan 5. Mengedit Data di Database Pasien");
    gotoxy(30,14);
    printf("| %-52s |","Tekan 6. Mencari Data di Database Pasien");
    gotoxy(30,15);
    printf("| %-52s |","Tekan 7. Riwayat Aktifitas Pasien");
    gotoxy(30,16);
    printf("| %-52s |","Tekan 8. Mengurutkan Data di Database Pasien");
    gotoxy(30,17);
    printf("| %-52s |","Tekan 9. Keluar Dari Program");
    gotoxy(30,18);
    printf("| %-52s |", " ");
    gotoxy(30,19);
    printf("| %-52s |","Masukkan Pilihan Anda : ");
    gotoxy(30,21);
    printf("+======================================================+\n\n");
    gotoxy(57,19);
    scanf("%d", &pilih);
    switch(pilih){
        case 1:
            menu1();
            menu();
            break;
        case 2:
            menu2();
            menu();
            break;
        case 3:
            menu3();
            menu();
            break;
        case 4:
            menu4();
            menu();
            break;
        case 5:
            menu5();
            break;
        case 6:
            menu6();
            menu();
            break;
        case 7:
            menu7();
            break;
        case 8:
            menu8();
            menu();
            break;
        case 9:
            system("cls");
            gotoxy(55,12);
            system("color 01");printf("Sera Vika Eviana");
            Sleep(50);
            gotoxy(55,12);
            system("color 02");printf("Sera Vika Eviana");
            Sleep(50);
            gotoxy(55,12);
            system("color 03");printf("Sera Vika Eviana");
            Sleep(50);
            gotoxy(55,12);
            system("color 04");printf("Sera Vika Eviana");
            Sleep(50);
            gotoxy(55,12);
            system("color 05");printf("Sera Vika Eviana");
            Sleep(50);
            gotoxy(55,13);
            system("color 01");printf("   672018025   ");
            Sleep(50);
            gotoxy(55,13);
            system("color 02");printf("   672018025   ");
            Sleep(50);
            gotoxy(55,13);
            system("color 03");printf("   672018025   ");
            Sleep(50);
            gotoxy(55,13);
            system("color 04");printf("   672018025   ");
            Sleep(50);
            gotoxy(55,13);
            system("color 05");printf("   672018025   ");
            Sleep(50);
            gotoxy(55,14);
            system("color 01");printf("  Terima Kasih ");
            Sleep(50);
            gotoxy(55,14);
            system("color 02");printf("  Terima Kasih ");
            Sleep(50);
            gotoxy(55,14);
            system("color 03");printf("  Terima Kasih ");
            Sleep(50);
            gotoxy(55,14);
            system("color 04");printf("  Terima Kasih ");
            Sleep(50);
            gotoxy(55,14);
            system("color 05");printf("  Terima Kasih ");
            Sleep(50);
            getch();
            exit(0);
            break;
        default:
            menu();
    }
}

void menu1(){
    system("cls");
    system("color 0C");
    gotoxy(30,1);
    printf("+===================================================================+\n");
    gotoxy(30,3);
    printf("\t\t\t\tDATA PASIEN\n");
    gotoxy(30,4);
    printf("\t\t\t=== Membuat Database Pasien ===");
    gotoxy(30,6);
    printf("+------------------------------------------------------------------+");
    gotoxy(30,7);
    printf("\t\tData Maksimum yang bisa diinput : 5");
    gotoxy(30,8);
    printf("\t\tBanyak Data yang ingin diinput  : ");
    gotoxy(30,9);
    printf("+===================================================================+\n");
    gotoxy(74,8);
    scanf("%d", &jumlah);
    printf("\n");
    if (jumlah<=5 && jumlah >0){
    for(int b=0; b<jumlah; b++){
        printf("DATA PASIEN KE-%d\n",(b+1));
        printf("No. RM       = ");
        scanf(" %d", &psn[b].norm);

        printf("Nama Pasien  = ");
        scanf(" %[^\n]", psn[b].nama_pasien);

        printf("No HP        = ");
        scanf(" %[^\n]", psn[b].hp);

        printf("Alamat       = ");
        scanf(" %[^\n]", psn[b].alamat);

        printf("Nama Wali    = ");
        scanf(" %[^\n]", psn[b].wali);

        printf("\n");
    }
    }
    printf("\n\t\t\t\t\t\t Press Any Key to Continue >> ");
    strcpy(rwy[total_rwy].aktivitas, "Menambah data");
    total_rwy+=1;
    getch();
    system("cls");
    menu();
}

void menu2(){
    system("cls");
    system("color 0B");
    gotoxy(30,2);
    printf("+=========================================================================+\n\n");
    gotoxy(30,4);
    printf("\t\t\t\tDATA PASIEN\n");
    gotoxy(30,5);
    printf("\t\t\tData Pasien yang telah diinput\n\n");
    gotoxy(30,6);
    printf("+=========================================================================+\n");
    gotoxy(30,8);
    printf("No   No RM\tNama Pasien\tNo HP\t\tAlamat\t\tNama Wali\n");
    gotoxy(30,9);
    printf("+-------------------------------------------------------------------------+");
    for(int b=0; b<jumlah; b++){
        gotoxy(30, 9+b+1);
        printf("%d",(b+1));
        gotoxy(35, 9+b+1);
        printf("%d", psn[b].norm);
        gotoxy(48, 9+b+1);
        printf("%s", psn[b].nama_pasien);
        gotoxy(64, 9+b+1);
        printf("%s", psn[b].hp);
        gotoxy(80, 9+b+1);
        printf("%s",psn[b].alamat);
        gotoxy(96, 9+b+1);
        printf("%s",  psn[b].wali);
    }
    gotoxy(30,10+jumlah);
    printf("+-------------------------------------------------------------------------+");
    gotoxy(30,11+jumlah);
    printf("\n\t\t\t\t\t\t Press Any Key to Continue >> ");
    strcpy(rwy[total_rwy].aktivitas, "Melihat data");
    total_rwy+=1;
    getch();
    system("cls");
	menu();
}

void menu3(){
    system("cls");
    system("color 0C");
    gotoxy(30,1);
    printf("+===================================================================+\n");
    gotoxy(30,3);
    printf("\t\t\t\tDATA PASIEN\n");
    gotoxy(30,4);
    printf("\t\t\t=== Membuat Database Pasien ===");
    gotoxy(30,6);
    printf("+------------------------------------------------------------------+");
    gotoxy(30,7);
    printf("\t\tData Maksimum yang bisa diinput : 5");
    gotoxy(30,8);
    printf("\t\tBanyak Data yang ingin diinput  : ");
    gotoxy(30,9);
    printf("+===================================================================+\n");
    gotoxy(74,8);
    scanf("%d", &jumlah1);
    printf("\n");
    if(jumlah+jumlah1 > 5){
        gotoxy(18,10);
        printf("Maksimum data yang dapat diinput adalah 5");
        gotoxy(18,12);
        printf("Press Any Key to Continue");
        getch();
        system("cls");
		menu3();
    }
    int b = jumlah;
    while(b < jumlah+jumlah1){
        printf("DATA PASIEN KE-%d\n",b+1);
        printf("No. RM       = ");
        scanf(" %d", &psn[b].norm);

        printf("Nama Pasien  = ");
        scanf(" %[^\n]", psn[b].nama_pasien);

        printf("No HP        = ");
        scanf(" %[^\n]", &psn[b].hp);

        printf("Alamat       = ");
        scanf(" %[^\n]", psn[b].alamat);

        printf("Nama Wali    = ");
        scanf(" %[^\n]", psn[b].wali);

        printf("\n");
        b++;
    }
    jumlah = jumlah+jumlah1;
    printf("\n\t\t  Press Any Key to Continue >> ");
    strcpy(rwy[total_rwy].aktivitas, "Menambah data");
    total_rwy+=1;
    getch();
    system("cls");
	menu();
}

void menu4(){
    char ans;
    int b,hapus,conf;
    system("cls");
    system("color 0B");
    gotoxy(30,2);
    printf("+=========================================================================+\n\n");
    gotoxy(30,4);
    printf("\t\t\t\tDATA PASIEN\n");
    gotoxy(30,5);
    printf("\t\t\tData Pasien yang telah diinput\n\n");
    gotoxy(30,6);
    printf("+=========================================================================+\n");
    gotoxy(30,8);
    printf("No   No RM\tNama Pasien\tNo HP\t\tAlamat\t\tNama Wali\n");
    gotoxy(30,9);
    printf("+-------------------------------------------------------------------------+");
    for(b=0; b<jumlah; b++){
        gotoxy(30, 9+b+1);
        printf("%d",(b+1));
        gotoxy(35, 9+b+1);
        printf("%d", psn[b].norm);
        gotoxy(48, 9+b+1);
        printf("%s", psn[b].nama_pasien);
        gotoxy(64, 9+b+1);
        printf("%s", psn[b].hp);
        gotoxy(80, 9+b+1);
        printf("%s",psn[b].alamat);
        gotoxy(96, 9+b+1);
        printf("%s",  psn[b].wali);
    }
    gotoxy(30,10+jumlah);
    printf("+-------------------------------------------------------------------------+");
    gotoxy(30,11+jumlah);
    printf("\n\t\t\t\t\t\t Press Any Key to Continue >> ");
    getch();
    system("cls");
    system("color 8E");
    gotoxy(30,2);
    printf("+=========================================================================+\n\n");
    gotoxy(30,4);
    printf("\t\t\t\tDATABASE\n");
    gotoxy(30,5);
    printf("\t\t\t=== Menghapus data Pasien ===\n\n");
    gotoxy(30,7);
    printf("+------------------------------------------------------------------+");
    gotoxy(30,8);
    printf("\t\tMasukkan NO RM yang ingin dihapus : ");
    gotoxy(30,9);
    printf("+------------------------------------------------------------------+");
    gotoxy(75,8);
    scanf("%d", &hapus);
    for(b=0; b<jumlah; b++){
        if (hapus == psn[b].norm){
            strcpy(rwy[total_rwy].aktivitas, "Menghapus data");
            total_rwy+=1;
            break;
        }else{
            if(b==jumlah || b==jumlah-1){
            printf("\n\n\t\t\t\t   ::NO RM tidak ditemukan...");
            getch();
            system("cls");
            menu();
            }
        }
    }
    printf("\n\t\t\t::No RM Pasien \t: %d",psn[b].norm);
    printf("\n\t\t\t::Nama Pasien\t: %s",psn[b].nama_pasien);
    printf("\n\t\t\t::No HP Pasien \t: %f",psn[b].hp);
    printf("\n\t\t\t::Alamat Pasien \t: %s", psn[b].alamat);
    printf("\n\t\t\t::Nama Wali \t: %s", psn[b].wali);
    printf("\n\n\t\t\tMau dihapus?[y/n]");
    scanf(" %c", &ans);
    if(ans == 'y' || ans == 'Y'){
        jumlah-=1;
        for(int c=b; c<=jumlah; c++){
            psn[c] = psn[c + 1];
        }
        printf("\n\t\t\tData dengan No RM %d telah dihapus", hapus);
        printf("\n\t\t\tTekan Enter Untuk Lanjut....");
        getch();
        menu();
    }else if(ans == 'n' || ans == 'N'){
        strcpy(rwy[total_rwy].aktivitas, "Batal Hapus data");
        total_rwy+=1;
        printf("Tekan Enter Untuk Lanjut....");
    getch();
    }
}

void menu5(){
    int pilgan, normgan;
    system("cls");
    system("color 0B");
    gotoxy(30,2);
    printf("+=========================================================================+\n\n");
    gotoxy(30,4);
    printf("\t\t\t\tDATA PASIEN\n");
    gotoxy(30,5);
    printf("\t\t\tData Pasien yang telah diinput\n\n");
    gotoxy(30,6);
    printf("+=========================================================================+\n");
    gotoxy(30,8);
    printf("No   No RM\tNama Pasien\tNo HP\t\tAlamat\t\tNama Wali\n");
    gotoxy(30,9);
    printf("+-------------------------------------------------------------------------+");
    for(int b=0; b<jumlah; b++){
        gotoxy(30, 9+b+1);
        printf("%d",(b+1));
        gotoxy(35, 9+b+1);
        printf("%d", psn[b].norm);
        gotoxy(48, 9+b+1);
        printf("%s", psn[b].nama_pasien);
        gotoxy(64, 9+b+1);
        printf("%s", psn[b].hp);
        gotoxy(80, 9+b+1);
        printf("%s",psn[b].alamat);
        gotoxy(96, 9+b+1);
        printf("%s",  psn[b].wali);
    }
    gotoxy(30,10+jumlah);
    printf("+-------------------------------------------------------------------------+");
    gotoxy(30,11+jumlah);
    getch();
    menu5_1:
    system("cls");
    system("color 0C");
    gotoxy(18,1);
    printf("+===============================================================================+");
    gotoxy(54,3);
    printf("DATABASE");
    gotoxy(44,4);
    printf("=== Mengubah Data Pasien ===");
    gotoxy(18,6);
    printf("+-------------------------------------------------------------------------------+");
    gotoxy(34, 7);printf("Apa yang ingin anda edit? ");
    gotoxy(34, 8);printf("1. Nama Pasien       3. Alamat");
    gotoxy(34, 9);printf("2. No HP             4. Nama Wali");
    gotoxy(34, 11);printf("Pilihan anda          : ");
    gotoxy(34, 12);printf("Masukkan No RM Pasien : ");
    gotoxy(18,13);
    printf("+-------------------------------------------------------------------------------+");
    gotoxy(58, 11);scanf("%d", &pilgan);
    gotoxy(58, 12);scanf("%d", &normgan);
    gotoxy(34, 14);
    for(int b=0; b<jumlah; b++){
        if(normgan == psn[b].norm){
            if(pilgan==1){
                printf("UBAH DATA\n");
                printf("Nama Pasien: %s\n",psn[b].nama_pasien);
                printf("Nama Pasien yang baru : ");
                scanf(" %[^\n]",&ubnama_pasien);
                strcpy(psn[b].nama_pasien, ubnama_pasien);
                printf("Data telah diganti!");
                strcpy(rwy[total_rwy].aktivitas, "Mengedit data");
                total_rwy+=1;
                getch();
                system("cls");
                menu();
            }else if(pilgan==2){
                printf("UBAH DATA\n");
                printf("No HP %s: %s\n",psn[b].nama_pasien, psn[b].hp);
                printf("NO HP Pasien yang baru : ");
                scanf(" %[^\n]",&ubhp);
                strcpy(psn[b].hp, ubhp);
                printf("Data telah diganti!");
                strcpy(rwy[total_rwy].aktivitas, "Mengedit data");
                total_rwy+=1;
                getch();
                system("cls");
                menu();
            }else if(pilgan==3){
                printf("UBAH DATA\n");
                printf("Alamat %s: %s\n",psn[b].nama_pasien, psn[b].alamat);
                printf("Alamat Pasien yang baru : ");
                scanf(" %[^\n]",&ubal);
                strcpy(psn[b].alamat, ubal);
                printf("Data telah diganti!");
                strcpy(rwy[total_rwy].aktivitas, "Mengedit data");
                total_rwy+=1;
                getch();
                system("cls");
                menu();
            }else if(pilgan==4){
                printf("UBAH DATA\n");
                printf("Nama Wali %s: %s\n",psn[b].nama_pasien, psn[b].wali);
                printf("Nama Wali Pasien yang baru : ");
                scanf(" %[^\n]",&ubwal);
                strcpy(psn[b].wali, ubwal);
                printf("Data telah diganti!");
                strcpy(rwy[total_rwy].aktivitas, "Mengedit data");
                total_rwy+=1;
                getch();
                system("cls");
                menu();
            }else{
                printf("Pilihan tidak tersedia!");
                system("cls");
                goto menu5_1;
            }
        }else{
            printf("NO RM %d Tidak Tersedia!",normgan);
            getch();
            system("cls");
            goto menu5_1;
        }
        printf("Press Any Key to Continue >> ");
        getch();
        system("cls");
    }
    menu();
}

void menu6(){
    int b, pilcar;
    system("cls");
    system("color 0A");
    gotoxy(18,1);
    printf("+===============================================================================+");
    gotoxy(54,3);
    printf("DATABASE");
    gotoxy(42,4);
    printf("=== Mencari Database Pasien ===");
    gotoxy(18,6);
    printf("+-------------------------------------------------------------------------------+");
    gotoxy(34, 7);printf("Apa yang ingin anda cari : ");
    gotoxy(34, 8);printf("1. NO RM             4. Alamat");
    gotoxy(34, 9);printf("2. Nama Pasien       5. Nama Wali");
    gotoxy(34, 10);printf("3. NO HP   ");
    gotoxy(34, 11);printf("Pilihan anda                   : ");
    gotoxy(18,13);
    printf("+-------------------------------------------------------------------------------+");
    gotoxy(67, 11);scanf("%d", &pilcar);
    if(pilcar == 1){
        gotoxy(34, 12);
        printf("No RM Pasien yang Dicari          : ");
        scanf("%d", &carnorm);
        system("cls");
        gotoxy(11,1);
        printf("+=================================================================================================+");
        gotoxy(49,3);
        printf("DATA PASIEN RS");
        gotoxy(41,4);
        printf("Data Pasien yang Telah Diinput");
        gotoxy(11,6);
        printf("+=================================================================================================+");
        gotoxy(11, 7);
        printf("No");
        gotoxy(25, 7);
        printf("No RM");
        gotoxy(40, 7);
        printf("Nama Pasien");
        gotoxy(64, 7);
        printf("No HP");
        gotoxy(80, 7);
        printf("Alamat");
        gotoxy(100, 7);
        printf("Nama Wali");
        gotoxy(11,8);
        printf("+-------------------------------------------------------------------------------------------------+");
        for(int b = 0 ; b < jumlah ; b++){
        if(psn[b].norm == carnorm){
            gotoxy(11, 9+b+1);printf("%d",(b+1));
            gotoxy(25,9+b);printf("%d", psn[b].norm);
            gotoxy(40,9+b);printf("%s", psn[b].nama_pasien);
            gotoxy(64,9+b);printf("%s", psn[b].hp);
            gotoxy(80,9+b);printf("%s", psn[b].alamat);
            gotoxy(100,9+b);printf("%s", psn[b].wali);
        }
        }
        printf("\n\t   +-------------------------------------------------------------------------------------------------+");
        printf("\n           Press Any Key to Continue >> ");
        strcpy(rwy[total_rwy].aktivitas, "Mencari data");
        total_rwy+=1;
        getch();
        system("cls");
        menu();
    }else if(pilcar == 2){
        gotoxy(34, 12);
        printf("Nama Pasien yang Dicari        : ");
        scanf(" %[^\n]", &carnama_pasien);
        system("cls");
        gotoxy(11,1);
        printf("+=================================================================================================+");
        gotoxy(49,3);
        printf("DATA PASIEN RS");
        gotoxy(41,4);
        printf("Data Pasien yang Telah Diinput");
        gotoxy(11,6);
        printf("+=================================================================================================+");
        gotoxy(11, 7);
        printf("No");
        gotoxy(25, 7);
        printf("No RM");
        gotoxy(40, 7);
        printf("Nama Pasien");
        gotoxy(64, 7);
        printf("No HP");
        gotoxy(80, 7);
        printf("Alamat");
        gotoxy(100, 7);
        printf("Nama Wali");
        gotoxy(11,8);
        printf("+-------------------------------------------------------------------------------------------------+");
        for(b = 0 ; b < jumlah ; b++){
        if(strcmp(psn[b].nama_pasien, carnama_pasien) == 0){
            gotoxy(11, 9+b+1);printf("%d",(b+1));
            gotoxy(25,9+b);printf("%d", psn[b].norm);
            gotoxy(40,9+b);printf("%s", psn[b].nama_pasien);
            gotoxy(64,9+b);printf("%s", psn[b].hp);
            gotoxy(80,9+b);printf("%s", psn[b].alamat);
            gotoxy(100,9+b);printf("%s", psn[b].wali);
        }
        }
        printf("\n\t   +-------------------------------------------------------------------------------------------------+");
        printf("\n           Press Any Key to Continue >> ");
        strcpy(rwy[total_rwy].aktivitas, "Mencari data");
        total_rwy+=1;
        getch();
        system("cls");
        menu();
    }else if(pilcar == 3){
        gotoxy(34, 12);
        printf("No HP Pasien yang Dicari  : ");
        scanf(" %[^\n]", &carhp);
        system("cls");
        gotoxy(11,1);
        printf("+=================================================================================================+");
        gotoxy(49,3);
        printf("DATA PASIEN RS");
        gotoxy(41,4);
        printf("Data Pasien yang Telah Diinput");
        gotoxy(11,6);
        printf("+=================================================================================================+");
        gotoxy(11, 7);
        printf("No");
        gotoxy(25, 7);
        printf("No RM");
        gotoxy(40, 7);
        printf("Nama Pasien");
        gotoxy(64, 7);
        printf("No HP");
        gotoxy(80, 7);
        printf("Alamat");
        gotoxy(100, 7);
        printf("Nama Wali");
        gotoxy(11,8);
        printf("+-------------------------------------------------------------------------------------------------+");
        for(b = 0 ; b < jumlah ; b++){
        if(strcmp(psn[b].hp, carhp) == 0){
            gotoxy(11, 9+b+1);printf("%d",(b+1));
            gotoxy(25,9+b);printf("%d", psn[b].norm);
            gotoxy(40,9+b);printf("%s", psn[b].nama_pasien);
            gotoxy(64,9+b);printf("%s", psn[b].hp);
            gotoxy(80,9+b);printf("%s", psn[b].alamat);
            gotoxy(100,9+b);printf("%s", psn[b].wali);
        }
        }
        printf("\n\t   +-------------------------------------------------------------------------------------------------+");
        printf("\n           Press Any Key to Continue >> ");
        strcpy(rwy[total_rwy].aktivitas, "Mencari data");
        total_rwy+=1;
        getch();
        system("cls");
        menu();
    }else if(pilcar == 4){
        gotoxy(34, 12);
        printf("Alamat Pasien yang Dicari     : ");
        scanf(" %[^\n]", &carala);
        system("cls");
        gotoxy(11,1);
        printf("+=================================================================================================+");
        gotoxy(49,3);
        printf("DATA PASIEN RS");
        gotoxy(41,4);
        printf("Data Pasien yang Telah Diinput");
        gotoxy(11,6);
        printf("+=================================================================================================+");
        gotoxy(11, 7);
        printf("No");
        gotoxy(25, 7);
        printf("No RM");
        gotoxy(40, 7);
        printf("Nama Pasien");
        gotoxy(64, 7);
        printf("No HP");
        gotoxy(80, 7);
        printf("Alamat");
        gotoxy(100, 7);
        printf("Nama Wali");
        gotoxy(11,8);
        printf("+-------------------------------------------------------------------------------------------------+");
        for(b = 0 ; b < jumlah ; b++){
        if(strcmp(psn[b].alamat, carala) == 0){
            gotoxy(11, 9+b+1);printf("%d",(b+1));
            gotoxy(25,9+b);printf("%d", psn[b].norm);
            gotoxy(40,9+b);printf("%s", psn[b].nama_pasien);
            gotoxy(64,9+b);printf("%s", psn[b].hp);
            gotoxy(80,9+b);printf("%s", psn[b].alamat);
            gotoxy(100,9+b);printf("%s", psn[b].wali);
        }
        }
        printf("\n\t   +-------------------------------------------------------------------------------------------------+");
        printf("\n           Press Any Key to Continue >> ");
        strcpy(rwy[total_rwy].aktivitas, "Mencari data");
        total_rwy+=1;
        getch();
        system("cls");
        menu();
    }else if(pilcar == 5){
        gotoxy(34, 12);
        printf("Nama Wali Pasien yang Dicari     : ");
        scanf(" %[^\n]", &carwali);
        system("cls");
        gotoxy(11,1);
        printf("+=================================================================================================+");
        gotoxy(49,3);
        printf("DATA PASIEN RS");
        gotoxy(41,4);
        printf("Data Pasien yang Telah Diinput");
        gotoxy(11,6);
        printf("+=================================================================================================+");
        gotoxy(11, 7);
        printf("No");
        gotoxy(25, 7);
        printf("No RM");
        gotoxy(40, 7);
        printf("Nama Pasien");
        gotoxy(64, 7);
        printf("No HP");
        gotoxy(80, 7);
        printf("Alamat");
        gotoxy(100, 7);
        printf("Nama Wali");
        gotoxy(11,8);
        printf("+-------------------------------------------------------------------------------------------------+");
        for(b = 0 ; b < jumlah ; b++){
        if(strcmp(psn[b].wali, carwali) == 0){
            gotoxy(11, 9+b+1);printf("%d",(b+1));
            gotoxy(25,9+b);printf("%d", psn[b].norm);
            gotoxy(40,9+b);printf("%s", psn[b].nama_pasien);
            gotoxy(64,9+b);printf("%s", psn[b].hp);
            gotoxy(80,9+b);printf("%s", psn[b].alamat);
            gotoxy(100,9+b);printf("%s", psn[b].wali);
        }
        }
        printf("\n\t   +-------------------------------------------------------------------------------------------------+");
        printf("\n           Press Any Key to Continue >> ");
        strcpy(rwy[total_rwy].aktivitas, "Mencari data");
        total_rwy+=1;
        getch();
        system("cls");
        menu();
    }else{
    printf("Maaf Pilihan tidak tersedia");
    getch();
    system("cls");
    menu6();
    }
}

void menu7(){
    int b;
    system("cls");
    system("color 0D");
    gotoxy(11,1);
    printf("+=================================================================================================+");
    gotoxy(49,3);
    printf("DATA PASIEN RS");
    gotoxy(41,4);
    printf("Data Pasien yang Telah Diinput");
    gotoxy(11,6);
    printf("+=================================================================================================+");
    gotoxy(11,7);
    printf("NO.");
    gotoxy(25,7);
    printf("AKTIVITAS");
    gotoxy(11,8);
    printf("---------------------------------------------------------------------------------------------------");
    strcpy(rwy[total_rwy].aktivitas, "Menampilkan riwayat aktivitas");
    total_rwy+=1;
    for(b=0; b<total_rwy; b++){
        gotoxy(11, 9+b); printf("%2.i", b+1);
        gotoxy(25, 9+b); printf("%s", rwy[b].aktivitas);
    }
    gotoxy(11,10+b);
    printf("---------------------------------------------------------------------------------------------------");
    gotoxy(11,11+b);
    printf("\n           Press Any Key to Continue >> ");
    getch();
    system("cls");
    menu();
}

void menu8(){
    struct pasien temp;
    int pilur,b,c;
    system("cls");
    system("color 0A");
    gotoxy(18,1);
    printf("+===============================================================================+");
    gotoxy(54,3);
    printf("DATABASE");
    gotoxy(38,4);
    printf("=== Mengurutkan Database Pasien ===");
    gotoxy(18,6);
    printf("+-------------------------------------------------------------------------------+");
    gotoxy(34, 7);printf("Urutkan berdasarkan apa?");
    gotoxy(34, 8);printf("1. NO RM             4. Alamat");
    gotoxy(34, 9);printf("2. Nama Pasien       5. Nama Wali");
    gotoxy(34, 10);printf("3. NO HP   ");
    gotoxy(34, 11);printf("Pilihan anda  :  ");
    gotoxy(18,13);
    printf("+-------------------------------------------------------------------------------+");
    gotoxy(51,11);
    scanf("%d", &pilur);
    switch(pilur){
        case 1 :
        for (b = 1; b < jumlah; b++){
            for (c = 0; c < jumlah - b; c++) {
            if (psn[c].norm> psn[c + 1].norm > 0) {
                temp = psn[c];
                psn[c] = psn[c + 1];
                psn[c + 1] = temp;
            }
            }
        }strcpy(rwy[total_rwy].aktivitas, "Mengurutkan data");
        total_rwy+=1;
        menu2();
        break;
        case 2:
        for (b = 1; b < jumlah; b++){
            for (c = 0; c < jumlah - b; c++) {
            if (strcmp(psn[c].nama_pasien, psn[c + 1].nama_pasien) > 0) {
                temp = psn[c];
                psn[c] = psn[c + 1];
                psn[c + 1] = temp;
            }
            }
        }strcpy(rwy[total_rwy].aktivitas, "Mengurutkan data");
        total_rwy+=1;
        menu2();
        break;
        case 3:
        for (b = 1; b < jumlah; b++){
            for (c = 0; c < jumlah - b; c++) {
            if (strcmp(psn[c].hp, psn[c + 1].hp) > 0) {
                temp = psn[c];
                psn[c] = psn[c + 1];
                psn[c + 1] = temp;
            }
            }
        }strcpy(rwy[total_rwy].aktivitas, "Mengurutkan data");
        total_rwy+=1;
        menu2();
        break;
        case 4:
        for (b = 1; b < jumlah; b++){
            for (c = 0; c < jumlah - b; c++) {
            if (strcmp(psn[c].alamat, psn[c + 1].alamat) > 0) {
                temp = psn[c];
                psn[c] = psn[c + 1];
                psn[c + 1] = temp;
            }
            }
        }strcpy(rwy[total_rwy].aktivitas, "Mengurutkan data");
        total_rwy+=1;
        menu2();
        break;
        case 5:
        for (b = 1; b < jumlah; b++){
            for (c = 0; c < jumlah - b; c++) {
            if (strcmp(psn[c].wali, psn[c + 1].wali) > 0) {
                temp = psn[c];
                psn[c] = psn[c + 1];
                psn[c + 1] = temp;
            }
            }
        }strcpy(rwy[total_rwy].aktivitas, "Mengurutkan data");
        total_rwy+=1;
        menu2();
        break;
        default:
        menu8();
    }
    menu2();
}

void gotoxy(int x, int y){
	HANDLE hConsoleOutput;
	COORD dwCursorPosition;
	dwCursorPosition.X = x;
	dwCursorPosition.Y = y;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

void readPass(char *temp)
{
    int key = 0, index = 0;

    do
    {
        key = getch();

        switch (key)
        {
            case 0:
            case 224:
                getch();
                break;
            case '\b':
                if (index > 0)
                    {
                    index = index - 1;
                    temp[index] = 0;
                    printf("\b \b");
                    }
                break;
            default:
                if (key > 31 && key < 127)
                    {
                    temp[index] = key;
                    index = index + 1;
                    printf("*");
                    }
        }
    }
    while (key != 13);
    temp[index] = '\0';
}
