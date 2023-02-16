#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

// Nested case 1
int perkalian()
{
    char user_input;
    int a, b, hasil;
    do
    {
        printf("\t\t\t\t\tMasukkan Angka Ke-1: ");
        scanf("%d", &a);
        printf("\t\t\t\t\tMasukkan Angka Ke-2: ");
        scanf("%d", &b);
        hasil = a * b;

        printf("\t\t\t\t\tHasil dari %d X %d = %d\n", a, b, hasil);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda ingin melanjutkan program? (y/n): ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}
int pembagian()
{
    char user_input;
    float a, b, hasil;
    do
    {
        printf("\t\t\t\t\tMasukkan Angka Ke-1: ");
        scanf("%f", &a);
        printf("\t\t\t\t\tMasukkan Angka Ke-2: ");
        scanf("%f", &b);
        hasil = a / b;

        printf("\t\t\t\t\tHasil dari pembagian = %.2f\n", hasil);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda ingin melanjutkan program? (y/n): ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}
int penjumlahan()
{
    char user_input;
    int a, b, hasil;
    do
    {
        printf("\t\t\t\t\tMasukkan Angka Ke-1: ");
        scanf("%d", &a);
        printf("\t\t\t\t\tMasukkan Angka Ke-2: ");
        scanf("%d", &b);
        hasil = a + b;

        printf("\t\t\t\t\tHasil dari %d + %d = %d\n", a, b, hasil);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda ingin melanjutkan program? (y/n): ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}
int pengurangan()
{
    char user_input;
    int a, b, hasil;
    do
    {
        printf("\t\t\t\t\tMasukkan Angka Ke-1: ");
        scanf("%d", &a);
        printf("\t\t\t\t\tMasukkan Angka Ke-2: ");
        scanf("%d", &b);
        hasil = a - b;

        printf("\t\t\t\t\tHasil dari %d - %d = %d\n", a, b, hasil);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda ingin melanjutkan program? (y/n): ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}

// nested case 2
int sinus()
{
    char user_input;
    float derajat, radian, sinus;
    do
    {
        printf("\t\t\t\t\tMasukkan derajat: ");
        scanf("%f", &derajat);

        // konversi derajat ke radian
        radian = derajat * M_PI / 180.0;

        sinus = sin(radian);

        printf("\t\t\t\t\tHasil Sinus adalah %.2f\n", sinus);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda Ingin Melanjutkan Program? (y/n): ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}
int cosinus()
{
    char user_input;
    float derajat, radian, cosinus;
    do
    {
        printf("\t\t\t\t\tMasukkan derajat: ");
        scanf("%f", &derajat);

        // konversi derajat ke radian
        radian = derajat * M_PI / 180.0;

        cosinus = cos(radian);

        printf("\t\t\t\t\tHasil Cosinus adalah %.2f\n", cosinus);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda Ingin Melanjutkan Program? (y/n): ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}
int tangen()
{
    char user_input;
    float derajat, radian, tangen;
    do
    {
        printf("\t\t\t\t\tMasukkan derajat: ");
        scanf("%f", &derajat);

        // konversi derajat ke radian
        radian = derajat * M_PI / 180.0;

        tangen = tan(radian);

        printf("\t\t\t\t\tHasil Tangen adalah %.2f\n", tangen);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda Ingin Melanjutkan Program? (y/n): ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}

// CASE 3
// NESTED CASE 1

int keliling_persegi()
{
    char user_input;
    float panjang, luas, keliling;
    do
    {
        printf("\t\t\t\t\tMasukkan panjang persegi: ");
        scanf("%f", &panjang);

        printf("\t\t\t\t\tMasukkan luas persegi: ");
        scanf("%f", &luas);

        // Hitung keliling persegi dengan menggunakan rumus keliling = 4 x sisi
        keliling = 4 * panjang;

        printf("\t\t\t\t\tKeliling persegi adalah: %.2f\n", keliling);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda Ingin Melanjutkan Program? (y/n) ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}
int keliling_trapesium()
{
    char user_input;
    float sisiAtas, sisiBawah, sisiMiring, tinggi, luas, keliling;
    do
    {
        printf("\t\t\t\t\tMasukkan sisi atas trapesium sama kaki: ");
        scanf("%f", &sisiAtas);

        printf("\t\t\t\t\tMasukkan sisi bawah trapesium sama kaki: ");
        scanf("%f", &sisiBawah);

        printf("\t\t\t\t\tMasukkan sisi miring trapesium sama kaki: ");
        scanf("%f", &sisiMiring);

        tinggi = sqrt(pow(sisiMiring, 2) - pow((sisiBawah - sisiAtas) / 2, 2));
        // sqrt dan pow adalah fungsi matematika dalam bahasa C untuk menghitung tinggi trapesium dan menghitung luas dan keliling trapesium.
        luas = 0.5 * (sisiAtas + sisiBawah) * tinggi;
        keliling = sisiAtas + sisiBawah + 2 * sisiMiring;

        printf("\t\t\t\t\tKeliling trapesium sama kaki adalah: %.2f\n", keliling);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda Ingin Melanjutkan Program? (y/n): ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}
int keliling_layang()
{
    char user_input;
    float sisiAtas, sisiBawah, keliling;
    do
    {
        // Input panjang sisi atas dan sisi bawah
        printf("\t\t\t\t\tMasukkan panjang sisi atas: ");
        scanf("%f", &sisiAtas);
        printf("\t\t\t\t\tMasukkan panjang sisi bawah: ");
        scanf("%f", &sisiBawah);

        // Hitung keliling
        keliling = 2 * (sisiAtas + sisiBawah);

        // Tampilkan hasil
        printf("\t\t\t\t\tKeliling layang-layang adalah: %.2f\n", keliling);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda Ingin Melanjutkan Program? (y/n) ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}
int keliling_lingkaran()
{
    char user_input;
    float a, b, c, d;
    const float pi = 3.14;
    do
    {
        printf("\t\t\t\t\tMasukkan Panjang Diameter: ");
        scanf("%f", &a);

        printf("\t\t\t\t\tMasukkan Panjang Jari-jari: ");
        scanf("%f", &b);

        c = pi * a;
        d = 2 * pi * b;

        printf("\t\t\t\t\tKeliling Lingkaran berdasar Jari-Jari = %.2f\n", d);
        printf("\t\t\t\t\tKeliling Lingkaran berdasar Diameter = %.2f\n", c);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda Ingin Melanjutkan Program? (y/n) ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}

// NESTED CASE 2

int luas_persegi()
{
    char user_input;
    float panjang, lebar, luas;
    do
    {
        printf("\t\t\t\t\tMasukkan panjang persegi: ");
        scanf("%f", &panjang);

        printf("\t\t\t\t\tMasukkan lebar persegi: ");
        scanf("%f", &lebar);

        luas = panjang * lebar;

        printf("\t\t\t\t\tLuas persegi adalah: %.2f\n", luas);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda Ingin Melanjutkan Program? (y/n) ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}
int luas_trapesium()
{
    char user_input;
    float a, b, c, hasil;
    do
    {
        printf("\t\t\t\t\tMasukkan sisi atas trapesium sama kaki: ");
        scanf("%f", &a);

        printf("\t\t\t\t\tMasukkan sisi bawah trapesium sama kaki: ");
        scanf("%f", &b);

        printf("\t\t\t\t\tMasukkan tinggi trapesium sama kaki: ");
        scanf("%f", &c);

        hasil = (a + b) * c / 2;

        printf("\t\t\t\t\tLuas trapesium sama kaki adalah: %.2f\n", hasil);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda Ingin Melanjutkan Program? (y/n) ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}
int luas_layang()
{
    char user_input;
    float a, b, hasil;
    do
    {
        printf("\t\t\t\t\tMasukkan diagonal panjang: ");
        scanf("%f", &a);

        printf("\t\t\t\t\tMasukkan diagonal lebar: ");
        scanf("%f", &b);

        hasil = a * b / 2;

        printf("\t\t\t\t\tLuas layang-layang adalah: %.2f\n", hasil);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda Ingin Melanjutkan Program? (y/n) ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}
int luas_lingkaran()
{
    char user_input;
    float a, b, luas_jari, luas_diameter;
    do
    {
        printf("\t\t\t\t\tMasukkan panjang diameter: ");
        scanf("%f", &a);

        b = a / 2;

        printf("\t\t\t\t\tMasukkan panjang jari-jari: ");
        scanf("%f", &b);

        luas_jari = PI * b * b;
        luas_diameter = PI * a * a / 4;

        printf("\t\t\t\t\tLuas lingkaran berdasar jari-jari adalah: %.2f\n", luas_jari);
        printf("\t\t\t\t\tLuas lingkaran berdasar diameter adalah: %.2f\n", luas_diameter);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda Ingin Melanjutkan Program? (y/n): ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}

// NESTED CASE 3

int volume_kubus()
{
    char user_input;
    float a, b;
    do
    {
        printf("\t\t\t\t\tMasukkan panjang sisi kubus: ");
        scanf("%f", &a);

        b = a * a * a;

        printf("\t\t\t\t\tVolume kubus dengan panjang sisi adalah %.2f\n", b);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda Ingin Melanjutkan Program? (y/n): ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}
int volume_prisma()
{
    char user_input;
    float a, b, c, d, e, f;
    float volume_prisma_persegi, volume_prisma_segitiga, volume_silinder_jari_jari, volume_silinder_diameter;
    const float pi = 3.14;
    do
    {

        printf("\t\t\t\t\tMasukkan Sisi Persegi : ");
        scanf("%f", &a);

        printf("\t\t\t\t\tMasukkan Lebar Alas Segitiga : ");
        scanf("%f", &b);

        printf("\t\t\t\t\tMasukkan Tinggi Segitiga : ");
        scanf("%f", &c);

        printf("\t\t\t\t\tMasukkan Jari-Jari Lingkaran : ");
        scanf("%f", &d);

        printf("\t\t\t\t\tMasukkan Diameter Lingkaran : ");
        scanf("%f", &e);

        printf("\t\t\t\t\tMasukkan Tinggi Prisma : ");
        scanf("%f", &f);

        volume_prisma_persegi = pow(a, 2) * f;
        volume_prisma_segitiga = 0.5 * b * c * f;
        volume_silinder_jari_jari = pow(d, 2) * pi * f;
        volume_silinder_diameter = pow(e / 2, 2) * pi * f;

        printf("\t\t\t\t\tVolume Prisma Persegi adalah = %.2f\n", volume_prisma_persegi);
        printf("\t\t\t\t\tVolume Prisma Segitiga adalah = %.2f\n", volume_prisma_segitiga);
        printf("\t\t\t\t\tVolume Silinder berdasar Jari-Jari adalah = %.2f\n", volume_silinder_jari_jari);
        printf("\t\t\t\t\tVolume Silinder berdasar Diameter adalah = %.2f\n", volume_silinder_diameter);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda Ingin Melanjutkan Program? (y/n): ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}
int volume_limas()
{
    char user_input;
    float sisiPersegi, lebarAlasSegitiga, tinggiSegitiga, jariLingkaran, diameterLingkaran, tinggiLimas;
    float volumeLimasPersegi, volumeLimasSegitiga, volumeLimasSilinderJari, volumeLimasSilinderDiameter;
    do
    {

        // meminta input dari pengguna
        printf("\t\t\t\t\tMasukkan Sisi Persegi : ");
        scanf("%f", &sisiPersegi);
        printf("\t\t\t\t\tMasukkan Lebar Alas Segitiga : ");
        scanf("%f", &lebarAlasSegitiga);
        printf("\t\t\t\t\tMasukkan Tinggi Segitiga : ");
        scanf("%f", &tinggiSegitiga);
        printf("\t\t\t\t\tMasukkan Jari-Jari Lingkaran : ");
        scanf("%f", &jariLingkaran);
        printf("\t\t\t\t\tMasukkan Diameter Lingkaran : ");
        scanf("%f", &diameterLingkaran);
        printf("\t\t\t\t\tMasukkan Tinggi Limas : ");
        scanf("%f", &tinggiLimas);

        // menghitung volume limas persegi
        volumeLimasPersegi = (sisiPersegi * sisiPersegi * tinggiLimas) / 3;

        // menghitung volume limas segitiga
        volumeLimasSegitiga = (lebarAlasSegitiga * tinggiSegitiga * tinggiLimas) / 6;

        // menghitung volume limas silinder berdasarkan jari-jari
        volumeLimasSilinderJari = (PI * jariLingkaran * jariLingkaran * tinggiLimas) / 3;

        // menghitung volume limas silinder berdasarkan diameter
        float jariDiameter = diameterLingkaran / 2;
        volumeLimasSilinderDiameter = (PI * jariDiameter * jariDiameter * tinggiLimas) / 3;

        // menampilkan hasil perhitungan
        printf("\t\t\t\t\tVolume Limas Persegi adalah = %.2f\n", volumeLimasPersegi);
        printf("\t\t\t\t\tVolume Limas Segitiga adalah = %.2f\n", volumeLimasSegitiga);
        printf("\t\t\t\t\tVolume Limas Silinder berdasar Jari-Jari adalah = %.2f\n", volumeLimasSilinderJari);
        printf("\t\t\t\t\tVolume Limas Silinder berdasar Diameter adalah = %.2f\n", volumeLimasSilinderDiameter);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda Ingin Melanjutkan Program? (y/n): ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}
int volume_bola()
{
    char user_input;
    float a, b, jari_a, diameter_b;
    do
    {

        // Input jari-jari lingkaran
        printf("\t\t\t\t\tMasukkan jari-jari lingkaran: ");
        scanf("%f", &a);

        // Input diameter lingkaran
        printf("\t\t\t\t\tMasukkan diameter lingkaran: ");
        scanf("%f", &b);

        // Hitung volume bola berdasarkan jari-jari
        jari_a = (4.0 / 3.0) * PI * a * a * a;

        // Hitung volume bola berdasarkan diameter
        diameter_b = (4.0 / 3.0) * PI * (b / 2.0) * (b / 2.0) * (b / 2.0);

        // Output hasil perhitungan
        printf("\t\t\t\t\tHasil volume bola berdasarkan jari-jari adalah = %.2f\n", jari_a);
        printf("\t\t\t\t\tVolume bola berdasarkan diameter adalah %.2f\n", diameter_b);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda Ingin Melanjutkan Program? (y/n): ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");

    return 0;
}

int kuadrat()
{
    char user_input;
    float bilangan, akar;
    do
    {
        // Input bilangan
        printf("\t\t\t\t\tMasukkan bilangan: ");
        scanf("%f", &bilangan);

        // Hitung akar kuadrat
        akar = sqrt(bilangan);

        // Output hasil perhitungan
        printf("\t\t\t\t\tAkar kuadrat dari %.2f adalah %.2f\n", bilangan, akar);
        printf("\t\t\t\t\tPress any key to continue....\n");
        getch();
        printf("\t\t\t\t\tApakah Anda Ingin Melanjutkan Program? (y/n): ");
        scanf(" %c", &user_input);
        system("cls");
    } while (user_input == 'y' || user_input == 'Y');
    system("cls");
}
int main()
{
    int choice, nested, lagi;

    while (1)
    {
        printf("\t\t\t\t\t======================================\n");
        printf("\t\t\t\t\t\tTUGAS KALKULATOR\n");
        printf("\t\t\t\t\t======================================\n");
        printf("\t\t\t\t\t\t1. PingPoroLanSudo\n");
        printf("\t\t\t\t\t\t2. SinCosTan\n");
        printf("\t\t\t\t\t\t3. Hitung Keliling dan Luas\n");
        printf("\t\t\t\t\t\t4. Hitung Akar Kuadrat\n");
        printf("\t\t\t\t\t\t5. Exit\n");
        printf("\t\t\t\t\t\tEnter your choice: ");
        scanf("%d", &choice);
        system("cls");

        switch (choice)
        {
        case 1:
            while (1)
            {
                printf("\t\t\t\t\t1. Perkalian\n");
                printf("\t\t\t\t\t2. Pembagian\n");
                printf("\t\t\t\t\t3. Penjumlahan\n");
                printf("\t\t\t\t\t4. Pengurangan\n");
                printf("\t\t\t\t\t5. Return Menu Utama\n");
                printf("\t\t\t\t\tEnter your choice: ");
                scanf("%d", &nested);
                system("cls");

                switch (nested)
                {
                case 1:
                    perkalian();
                    break;
                case 2:
                    pembagian();
                    break;
                case 3:
                    penjumlahan();
                    break;
                case 4:
                    pengurangan();
                    break;
                case 5:
                    goto main_menu;
                    break;
                default:
                    printf("\t\t\t\t\tMenu Tidak Tersedia!!!\n");
                }
            }
        case 2:
            while (1)
            {
                printf("\t\t\t\t\t1. Sinus\n");
                printf("\t\t\t\t\t2. Cosinus\n");
                printf("\t\t\t\t\t3. Tangen\n");
                printf("\t\t\t\t\t4. Return Menu Utama\n");
                printf("\t\t\t\t\tEnter your choice: ");
                scanf("%d", &nested);
                system("cls");

                switch (nested)
                {
                case 1:
                    sinus();
                    break;
                case 2:
                    cosinus();
                    break;
                case 3:
                    tangen();
                    break;
                case 4:
                    goto main_menu;
                    break;
                default:
                    printf("\t\t\t\t\tMenu Tidak Tersedia!!!\n");
                }
            }
        case 3:
            while (1)
            {
                printf("\t\t\t\t\t1. Hitung Keliling Bangun Datar\n");
                printf("\t\t\t\t\t2. Hitung Luas Bangun Datar\n");
                printf("\t\t\t\t\t3. Hitung Volume Bangun Ruang\n");
                printf("\t\t\t\t\t4. Return Menu Utama\n");
                printf("\t\t\t\t\tEnter your choice: ");
                scanf("%d", &nested);
                system("cls");

                switch (nested)
                {
                case 1:
                    while (1)
                    {
                        printf("\t\t\t\t\t1. Keliling Persegi\n");
                        printf("\t\t\t\t\t2. Keliling Trapesium\n");
                        printf("\t\t\t\t\t3. Keliling Layang-Layang\n");
                        printf("\t\t\t\t\t4. Keliling Lingkaran\n");
                        printf("\t\t\t\t\t5. Kembali Menu Sebelumnya\n");
                        printf("\t\t\t\t\tEnter your choice: ");
                        scanf("%d", &lagi);
                        system("cls");

                        switch (lagi)
                        {
                        case 1:
                            keliling_persegi();
                            break;
                        case 2:
                            keliling_trapesium();
                            break;
                        case 3:
                            keliling_layang();
                            break;
                        case 4:
                            keliling_lingkaran();
                            break;
                        case 5:
                            goto nested_menu;
                            break;
                            return 0;

                        default:
                            printf("\t\t\t\t\tMenu Tidak Tersedia!!!");
                        }
                    }
                case 2:
                    while (1)
                    {
                        printf("\t\t\t\t\t1. Luas Persegi\n");
                        printf("\t\t\t\t\t2. Luas Trapesium\n");
                        printf("\t\t\t\t\t3. Luas Layang-Layang\n");
                        printf("\t\t\t\t\t4. Luas Lingkaran\n");
                        printf("\t\t\t\t\t5. Kembali Menu Sebelumnya\n");
                        printf("\t\t\t\t\tEnter your choice: ");
                        scanf("%d", &lagi);
                        system("cls");

                        switch (lagi)
                        {
                        case 1:
                            luas_persegi();
                            break;
                        case 2:
                            luas_trapesium();
                            break;
                        case 3:
                            luas_layang();
                            break;
                        case 4:
                            luas_lingkaran();
                            break;
                        case 5:
                            goto nested_menu;
                            break;
                            return 0;

                        default:
                            printf("\t\t\t\t\tMenu Tidak Tersedia!!!");
                        }
                    case 3:
                        while (1)
                        {
                            printf("\t\t\t\t\t1. Volume Kubus\n");
                            printf("\t\t\t\t\t2. Volume Prisma\n");
                            printf("\t\t\t\t\t3. Volume Limas\n");
                            printf("\t\t\t\t\t4. Volume Bola\n");
                            printf("\t\t\t\t\t5. Kembali Ke Menu Sebelumnya\n");
                            printf("\t\t\t\t\t===================================\n");
                            printf("\t\t\t\t\tEnter your choice: ");
                            scanf("%d", &lagi);
                            system("cls");

                            switch (lagi)
                            {
                            case 1:
                                volume_kubus();
                                break;
                            case 2:
                                volume_prisma();
                                break;
                            case 3:
                                volume_limas();
                                break;
                            case 4:
                                volume_bola();
                                break;
                            case 5:
                                goto nested_menu;
                                break;

                            default:
                                printf("\t\t\t\t\tMenu Tidak Tersedia!!!");
                            }
                        case 4:
                            goto main_menu;
                            break;
                        }
                    }
                }
            case 4:
                kuadrat();
                break;

            case 5:
                printf("\n\n\n\n\n\t\t\t\t\tProgram Selesai Terima Kasih!\n");
                printf("\t\t\t\t\tPress any key to continue....\n");
                getch();
                return 0;
                system("cls");
            default:
                printf("\t\t\t\t\tMenu Tidak Tersedia, Mohon Masukkan Input Dengan Benar\n");
                printf("\t\t\t\t\t\tMohon masukkan Input dengan benar!!!\n\n");
                break;
            nested_menu:;
            }
        main_menu:; // label untuk ke main menu
        }
    }
    return 0;
}
