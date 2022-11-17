#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<mmsystem.h>
#include<string.h>
#include<ctype.h>

char* addressMusic(char s[]) {
	char temp[50] = "./music/";
	char *source = strdup(temp);
	strcat(source, s);
	return source;
}

char* nameMusic(char s[]) {
    return strcat(addressMusic(s), ".wav");
}


void giaoDienChonNhac(int &luaChon) {
    printf("------CHAO MUNG BAN DEN VOI CHUONG TRINH HAT NHAC TREN C------");
    printf("\nBAN MUON CHON THE LOAI NHAC NAO?");
    while (1) {
        printf("\n1. Nhac anime");
        printf("\n2. Nhac lofi");
        printf("\n3. Nhac tre");
        printf("\n4. Nhac game Genshin Impact");
        printf("\n->Lua chon cua ban la: ");
        scanf("%d", &luaChon);
        if (luaChon <= 0 || luaChon > 4) {
            printf("Ban da nhap khong dung dinh dang! Moi ban nhap lai.");
            printf("\n---------------------------------------------------");
            continue;
        }
        else break;
    }
}
void giaoDien1(int &luaChon) {
    if (luaChon == 1) printf("MOI BAN CHON 1 TRONG CAC BAI HAT SAU:");
    while (1) {
        printf("\n1. Unravel - Tokyo Ghoul (OP1)");
        printf("\n2. We are! - One Piece (OP1)");
        printf("\n3. This game - No Game No Life");
        printf("\n4. Blue Bird - Naruto Shippuden (OP3)");
        printf("\n5. Gurenge - Kimetsu no Yaiba");
        printf("\n->Lua chon cua ban la: ");
        scanf("%d", &luaChon);
        if (luaChon <= 0 || luaChon > 5) {
            printf("Ban da nhap khong dung dinh dang! Moi ban nhap lai.");
            printf("\n---------------------------------------------------");
            continue;
        }
        else break;
    }
}

void giaoDien2(int &luaChon) {
    if (luaChon == 2) printf("MOI BAN CHON 1 TRONG CAC BAI HAT SAU:");
    while (1) {
        printf("\n1. Noi nay co anh - Son Tung M-TP -lofi-");
        printf("\n2. Unravel - Tokyo Ghoul -lofi-");
        printf("\n3. Crossing Field - Swort Art Online -lofi-");
        printf("\n4. A Cruel Angel's Thesis - Neon Genesis Evangelion -lofi-");
        printf("\n->Lua chon cua ban la: ");
        scanf("%d", &luaChon);
        if (luaChon <= 0 || luaChon > 4) {
            printf("Ban da nhap khong dung dinh dang! Moi ban nhap lai.");
            printf("\n---------------------------------------------------");
            continue;
        }
        else break;
    }
}

void giaoDien3(int &luaChon) {
    if (luaChon == 3) printf("MOI BAN CHON 1 TRONG CAC BAI HAT SAU:");
    while (1) {
        printf("\n1. Xin Dung Lang Im - Soobin Hoang Son");
        printf("\n2. Thang Dien - Justatee x Phuong Ly");
        printf("\n3. La Lung - Vu");
        printf("\n4. Thang 4 La Loi Noi Doi Cua Em - Ha Anh Tuan");
        printf("\n->Lua chon cua ban la: ");
        scanf("%d", &luaChon);
        if (luaChon <= 0 || luaChon > 4) {
            printf("Ban da nhap khong dung dinh dang! Moi ban nhap lai.");
            printf("\n---------------------------------------------------");
            continue;
        }
        else break;
    }
}

void giaoDien4(int &luaChon) {
    if (luaChon == 4) printf("MOI BAN CHON 1 TRONG CAC BAI HAT SAU:");
    while (1) {
        printf("\n1. Azhdaha Boss Theme Phase 2 - GI OST");
        printf("\n2. Keqing Theme Nimble As Lightning - GI OST");
        printf("\n3. Venti A Bards Adventure EPIC ORCHESTRAL - GI");
        printf("\n4. Yoimiya Dazzling Lights in the Summer - GI");
        printf("\n5. Ganyu Radiant Dreams Piano Cover - GI");
        printf("\n6. Kaedehara Kazuha Moonlit Breeze Piano Cover - GI");
        printf("\n->Lua chon cua ban la: ");
        scanf("%d", &luaChon);
        if (luaChon <= 0 || luaChon > 6) {
            printf("Ban da nhap khong dung dinh dang! Moi ban nhap lai.");
            printf("\n---------------------------------------------------");
            continue;
        }
        else break;
    }
}

void playMusic1(int luaChon) {
    printf("He thong dang chay bai hat ban yeu cau");
    printf("\nloading...");
    char choices1[][100] = {"unravel1", "weare", "thisgame", "bluebird", "gurenge"};
    PlaySound(TEXT(nameMusic(choices1[luaChon - 1])), NULL, SND_ASYNC);
    free(nameMusic(choices1[luaChon - 1]));
}

void playMusic2(int luaChon) {
    printf("He thong dang chay bai hat ban yeu cau");
    printf("\nloading...");
    char choices2[][100] = {"noinaycoanh", "unravel2", "SAO_lofi", "evangelion"};
    PlaySound(TEXT(nameMusic(choices2[luaChon - 1])), NULL, SND_ASYNC);
    free(nameMusic(choices2[luaChon - 1]));
}

void playMusic3(int luaChon) {
    printf("He thong dang chay bai hat ban yeu cau");
    printf("\nloading...");
    char choices3[][100] = {"langim", "thangdien", "lalung", "thang4"};
    PlaySound(TEXT(nameMusic(choices3[luaChon - 1])), NULL, SND_ASYNC);
    free(nameMusic(choices3[luaChon - 1]));
}

void playMusic4(int luaChon) {
    printf("He thong dang chay bai hat ban yeu cau");
    printf("\nloading...");
    char choices4[][100] = {"GI1", "GI2", "GI3", "GI4", "GI5", "GI6"};
    PlaySound(TEXT(nameMusic(choices4[luaChon - 1])), NULL, SND_ASYNC);
    free(nameMusic(choices4[luaChon - 1]));
}

void runProgram() {
    int n;

    giaoDienChonNhac(n);
    system("cls");

    switch (n) {
    case 1: {
            giaoDien1(n);
            system("cls");
            playMusic1(n);
            break;
        }
    case 2: {
            giaoDien2(n);
            system("cls");
            playMusic2(n);
            break;
        }
    case 3: {
            giaoDien3(n);
            system("cls");
            playMusic3(n);
            break;
        }
    default: {
            giaoDien4(n);
            system("cls");
            playMusic4(n);
            break;
        }
    }
}

//void continueProgram(int &continueButton) {
//    printf("\n=======================================");
//    printf("\nBan co muon tiep tuc chuong trinh khong?");
//    PlaySound(TEXT("continue.wav"), NULL, SND_ASYNC);
//    printf("\n0. Khong\t1. Co");
//    scanf("%d", &continueButton);
//}

int main() {
    runProgram();

//    int continueChoice;
//    continueProgram(continueChoice);
//
//    if (continueChoice == 1) {
//        system("cls");
//        runProgram();
//    }
//    else exit(0);

	getch();

	return 0;
}
