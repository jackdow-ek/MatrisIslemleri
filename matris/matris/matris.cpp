/****************************************************************************
* 
*                MATRIS ISLEMLERI
* 
****************************************************************************/
#include <iostream>
#include <iomanip>
#include <locale.h>
#include <string>

using namespace std;

void menu()//menu bir kaç kez kullanacağımız için fonksiyon olarak yazdım
{
	cout << "______________________________________________________________________________________" << endl
		<< "|" << setw(85) << "|" << endl
		<< "|" << setw(50) << "MATRİS İŞLEMLERİ" << setw(35) << "|" << endl
		<< "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|  MATRİS TOPLAMA" << setw(60) << "[1]" << setw(9) << "|" << endl
		<< "|" << setw(85) << "|" << endl
		<< "|  MATRİS ÇIKARMA" << setw(60) << "[2]" << setw(9) << "|" << endl
		<< "|" << setw(85) << "|" << endl
		<< "|  MATRİS ÇARPMA" << setw(61) << "[3]" << setw(9) << "|" << endl
		<< "|" << setw(85) << "|" << endl
		<< "|  MATRİS TRANSPOZE ALMA" << setw(53) << "[4]" << setw(9) << "|" << endl
		<< "|" << setw(85) << "|" << endl
		<< "|  MATRİS DETERMİNANT ALMA" << setw(51) << "[5]" << setw(9) << "|" << endl
		<< "|" << setw(85) << "|" << endl
		<< "|  MATRİS İZİ BULMA" << setw(58) << "[6]" << setw(9) << "|" << endl
		<< "|" << setw(85) << "|" << endl
		<< "|  MATRİS KÖŞESİ BULMA" << setw(55) << "[7]" << setw(9) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl;
}

void topla()
{
	system("cls");
	int deger_1[100][100], deger_2[100][100], cevap[100][100], satir = 0, sutun = 0, kosul = 0;

	cout << "______________________________________________________________________________________" << endl
		<< "|" << setw(85) << "|" << endl
		<< "|" << setw(50) << "MATRİS TOPLAMA" << setw(35) << "|" << endl
		<< "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	do {
		if (kosul != 0)
		{
			cout << "|" << setw(65) << "BOYUT DEĞERLERİ UYGUN DEĞİL TEKRAR DENEYİN" << setw(20) << "|" << endl
				<< "--------------------------------------------------------------------------------------" << endl;
		}
		cout << "|  TOPLANACAK MATRİSLERİN SATIR SAYINI GİRİN :  ";
		cin >> satir;
		cout << "|  TOPLANACAK MATRİSLERİN SÜTUN SAYINI GİRİN :  ";
		cin >> sutun;
		kosul++;
	} while (satir < 2 || sutun < 2);
	//toplanacak matrislerin satır sütun boyutu kullanıcı tarafından girilir
	cout << "--------------------------------------------------------------------------------------" << endl;
	for (int b = 1; b <= satir; b++)//ilk matrisin değerlerinin tek tek kullanıcı tarafından girilmesini sağlayan for döngüsü
	{
		for (int c = 1; c <= sutun; c++)
		{
			cout << "|  İLK MATRİSİN " << b << ".SATIR " << c << ".SÜTUNDAKİ ELEMANININ DEĞERİNİ GİR :       ";
			cin >> deger_1[b][c];//değer girilir
		}
	}
	cout << "--------------------------------------------------------------------------------------" << endl;
	for (int b = 1; b <= satir; b++)//ikinci matrisin değerlerinin kullanıcıdan tek tek alınmasını sağlayan for döngüsü
	{
		for (int c = 1; c <= sutun; c++)
		{
			cout << "|  İKİNCİ MATRİSİN " << b << ".SATIR " << c << ".SÜTUNDAKİ ELEMANININ DEĞERİNİ GİR :    ";
			cin >> deger_2[b][c];//değerler diziye atanır
		}
	}
	cout << "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(50) << "İLK MATRİS" << setw(35) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= satir; b++)//ilk matris ekrana yazılır
	{
		cout << "|" << setw(15) << "|";
		for (int c = 1; c <= sutun; c++)
		{
			deger_1[b][c];
			cout << setw(4) << deger_1[b][c] << "  ";
		}
		cout << "|" << endl;
	}
	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(51) << "İKİNCİ MATRİS" << setw(34) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= satir; b++)//ikinci matris ekrana yazılır
	{
		cout << "|" << setw(15) << "|";
		for (int c = 1; c <= sutun; c++)
		{
			deger_2[b][c];
			cout << setw(4) << deger_2[b][c] << "  ";
		}
		cout << "|" << endl;
	}
	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(54) << "MATRİSLERİN TOPLAMI" << setw(31) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= satir; b++)//her iki matrisin değerlerinin tek tek toplanıp ekrana yazdırılır
	{
		cout << "|" << setw(15) << "|";
		for (int c = 1; c <= sutun; c++)
		{
			cevap[b][c] = deger_1[b][c] + deger_2[b][c];
			cout << setw(4) << cevap[b][c] << "  ";
		}
		cout << "|" << endl;
	}
	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl;
}

void cikarma()
{
	system("cls");
	int deger_1[100][100], deger_2[100][100], cevap[100][100], satir = 0, sutun = 0, kosul = 0;
	cout << "______________________________________________________________________________________" << endl
		<< "|" << setw(85) << "|" << endl
		<< "|" << setw(50) << "MATRİS ÇIKARMA" << setw(35) << "|" << endl
		<< "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	do {
		if (kosul != 0)
		{
			cout << "|" << setw(65) << "BOYUT DEĞERLERİ UYGUN DEĞİL TEKRAR DENEYİN" << setw(20) << "|" << endl
				<< "--------------------------------------------------------------------------------------" << endl;
		}
		cout << "|  TOPLANACAK MATRİSLERİN SATIR SAYI :" << setw(30) << " ";
		cin >> satir;//ÇIKARILACAK matrislerin satır sütun boyutu kullanıcı tarafından girilir
		cout << "|  TOPLANACAK MATRİSLERİN SÜTUN SAYI :" << setw(30) << " ";
		cin >> sutun;
		kosul++;
	} while (sutun <= 0 || satir <= 0);
	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= satir; b++)//ilk matrisin değerlerinin tek tek kullanıcı tarafından girilmesini sağlayan for döngüsü
	{
		for (int c = 1; c <= sutun; c++)
		{
			cout << "|  İLK MATRİSİN " << b << ".SATIR " << c << ".SÜTUNDAKİ ELEMANININ DEĞERİNİ GİR :       ";
			cin >> deger_1[b][c];//değer girilir
		}
	}
	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= satir; b++)//ikinci matrisin değerlerinin kullanıcıdan tek tek alınmasını sağlayan for döngüsü
	{
		for (int c = 1; c <= sutun; c++)
		{
			cout << "|  İKİNCİ MATRİSİN " << b << ".SATIR " << c << ".SÜTUNDAKİ ELEMANININ DEĞERİNİ GİR :    ";
			cin >> deger_2[b][c];//değerler diziye atanır
		}
	}
	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(50) << "İLK MATRİS" << setw(35) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= satir; b++)//ilk matris ekrana yazılır
	{
		cout << "|" << setw(15) << "|";
		for (int c = 1; c <= sutun; c++)
		{
			cout << setw(4) << deger_1[b][c] << "  ";
		}
		cout << "|" << endl;
	}
	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(51) << "İKİNCİ MATRİS" << setw(34) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= satir; b++)//ikinci matris ekrana yazılır
	{
		cout << "|" << setw(15) << "|";
		for (int c = 1; c <= sutun; c++)
		{
			cout << setw(4) << deger_2[b][c] << "  ";
		}
		cout << "|" << endl;
	}

	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(51) << "SONUC  MATRİS" << setw(34) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= satir; b++)//işlem yapılır ve çıkan sonuc ekrana yazılır
	{
		cout << "|" << setw(15) << "|";
		for (int c = 1; c <= sutun; c++)
		{
			cevap[b][c] = deger_1[b][c] - deger_2[b][c];
			cout << setw(4) << cevap[b][c] << "  ";
		}
		cout << "|" << endl;
	}
	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl;
}

void carpma()
{
	system("cls");
	int deger_1[5][5], deger_2[5][5], sonuc[5][5], boyut = 3;
	cout << "______________________________________________________________________________________" << endl
		<< "|" << setw(85) << "|" << endl
		<< "|" << setw(50) << "MATRİS ÇARPMA" << setw(35) << "|" << endl
		<< "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|        LÜTFEN ÇARPILACAK 3x3'LÜK MATRİSLERİN DEĞERLERİNİ SIRASIYLA GİRİNİZ         |" << endl
		<< "--------------------------------------------------------------------------------------" << endl;
	cout << "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= boyut; b++)//ilk matrisin değerlerinin tek tek kullanıcı tarafından girilmesini sağlayan for döngüsü
	{
		for (int c = 1; c <= boyut; c++)
		{
			cout << "|  İLK MATRİSİN " << b << ".SATIR " << c << ".SÜTUNDAKİ ELEMANININ DEĞERİNİ GİR :       ";
			cin >> deger_1[b][c];//değer girilir
		}
	}
	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= boyut; b++)//ikinci matrisin değerlerinin kullanıcıdan tek tek alınmasını sağlayan for döngüsü
	{
		for (int c = 1; c <= boyut; c++)
		{
			cout << "|  İKİNCİ MATRİSİN " << b << ".SATIR " << c << ".SÜTUNDAKİ ELEMANININ DEĞERİNİ GİR :    ";
			cin >> deger_2[b][c];//değerler diziye atanır
		}
	}
	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(50) << "İLK MATRİS" << setw(35) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= boyut; b++)//ilk matris ekrana yazılır
	{
		cout << "|" << setw(15) << "|";
		for (int c = 1; c <= boyut; c++)
		{
			cout << setw(4) << deger_1[b][c] << "  ";
		}
		cout << "|" << endl;
	}
	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(51) << "İKİNCİ MATRİS" << setw(34) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= boyut; b++)//ikinci matris ekrana yazılır
	{
		cout << "|" << setw(15) << "|";
		for (int c = 1; c <= boyut; c++)
		{
			cout << setw(4) << deger_2[b][c] << "  ";
		}
		cout << "|" << endl;
	}

	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(51) << "SONUC  MATRİS" << setw(34) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;

	for (int b = 1; b <= boyut; b++)
	{
		for (int c = 1; c <= boyut; c++)
		{
			sonuc[b][c] = deger_1[b][1] * deger_2[1][c] + deger_1[b][2] * deger_2[2][c] + deger_1[b][3] * deger_2[3][c];//çarpma işlemi yapılıyor
		}
	}

	for (int b = 1; b <= boyut; b++)
	{
		cout << "|" << setw(15) << "|";
		for (int c = 1; c <= boyut; c++)
		{
			cout << setw(4) << sonuc[b][c] << "  ";//sonuc yazdırılıyor
		}
		cout << "|" << endl;
	}
	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl;
}

void transpoze()
{
	system("cls");
	int deger_1[100][100], satir = 0, sutun = 0, kosul = 0;
	cout << "______________________________________________________________________________________" << endl
		<< "|" << setw(85) << "|" << endl
		<< "|" << setw(50) << "TRANSPOZE ALMA" << setw(35) << "|" << endl
		<< "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl;
	do {
		if (kosul != 0)
		{
			cout << "|" << setw(65) << "BOYUT DEĞERLERİ UYGUN DEĞİL TEKRAR DENEYİN" << setw(20) << "|" << endl
				<< "--------------------------------------------------------------------------------------" << endl;
		}
		cout << "|  TRANSPOZESİ ALINACAK MATRİSİN SATIR SAYINI GİRİN :" << setw(15) << " "; cin >> satir;
		cout << "|  TRANSPOZESİ ALINACAK MATRİSİN SÜTUN SAYINI GİRİN :" << setw(15) << " "; cin >> sutun;//transpoze alma işlemi yapılacak matrisin boyutlarını kullanıcı girer
		cout << "--------------------------------------------------------------------------------------" << endl;
		kosul++;
	} while (satir <= 0 || sutun <= 0);
	for (int b = 1; b <= satir; b++)
	{
		for (int c = 1; c <= sutun; c++)
		{
			cout << "|  MATRİSİN " << b << ".SATIR " << c << ".SÜTUNDAKİ ELEMANININ DEĞERİNİ GİR :           ";//kullanıcı matrisin elemanlarının değerlerini girer
			cin >> deger_1[b][c];
		}
	}
	cout << "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(51) << "GİRİLEN MATRİS" << setw(34) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= satir; b++)
	{
		cout << "|" << setw(15) << "|";
		for (int c = 1; c <= sutun; c++)
		{
			cout << setw(4) << deger_1[b][c] << "  ";//girilen matris ekrana yazılır
		}
		cout << "|" << endl;
	}
	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(54) << "MATRİSİN TRANSPOZESİ" << setw(31) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= sutun; b++)
	{
		cout << "|" << setw(15) << "|";
		for (int c = 1; c <= satir; c++)
		{
			cout << setw(4) << deger_1[c][b] << "  ";//matris transpozesi ekrana yazılır
		}
		cout << "|" << endl;
	}
	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl;
}

void determinant()
{
	system("cls");
	int deger_1[100][100], boyut = 0, kosul = 0, det = 0;
	cout << "______________________________________________________________________________________" << endl
		<< "|" << setw(85) << "|" << endl
		<< "|" << setw(50) << "DETERMİNANT ALMA" << setw(35) << "|" << endl
		<< "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl;
	do {
		if (kosul != 0)//yanlış değer girildiğinde ekrana mesaj çıkarılır
		{
			cout << "|" << setw(65) << "BOYUT DEĞERLERİ UYGUN DEĞİL TEKRAR DENEYİN" << setw(20) << "|" << endl
				<< "--------------------------------------------------------------------------------------" << endl;
		}
		cout << "|  DETERMİNANTI HESAPLANACAK MATRİSİN BOYUTUNU GİR(2/3) :" << setw(11) << " "; cin >> boyut;//kullanıcı matrisin boyutunu girer
		cout << "--------------------------------------------------------------------------------------" << endl;
		kosul++;
	} while (boyut != 2 && boyut != 3);//yanlış değer girildiğinde tekrar giriş yapılması istenir
	for (int b = 1; b <= boyut; b++)
	{
		for (int c = 1; c <= boyut; c++)
		{
			cout << "|  MATRİSİN " << b << ".SATIR " << c << ".SÜTUNDAKİ ELEMANININ DEĞERİNİ GİR :           ";
			cin >> deger_1[b][c];//kullanıcı matris elemanlarının değerlerini girer
		}
	}
	if (boyut == 2)
	{
		det = deger_1[1][1] * deger_1[2][2] - deger_1[1][2] * deger_1[2][1];//determinant hesabı
	}
	else
	{
		det = deger_1[1][1] * deger_1[2][2] * deger_1[3][3] + deger_1[2][1] * deger_1[3][2] * deger_1[1][3] +
			deger_1[3][1] * deger_1[1][2] * deger_1[2][3] - deger_1[1][3] * deger_1[2][2] * deger_1[3][1] -
			deger_1[2][3] * deger_1[3][2] * deger_1[1][1] - deger_1[3][3] * deger_1[1][2] * deger_1[2][1];//determinant hesabı
	}
	cout << "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(49) << "GİRİLEN MATRİS" << setw(36) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= boyut; b++)
	{
		cout << "|" << setw(15) << "|";
		for (int c = 1; c <= boyut; c++)
		{
			cout << setw(5) << deger_1[b][c] << "  ";//matris ekrana yazılır
		}
		cout << "|" << endl;
	}
	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|  MATRİSİN DETERMİNANTI" << setw(45) << det << endl//determinant ekrana yazılır
		<< "--------------------------------------------------------------------------------------" << endl;
}

void iz(){
	system("cls");
	int deger_1[100][100], boyut, iz = 0, kosul = 0;
	cout << "______________________________________________________________________________________" << endl
		<< "|" << setw(85) << "|" << endl
		<< "|" << setw(50) << "MATRİS İZİ BULMA" << setw(35) << "|" << endl
		<< "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl;
	do {
		if (kosul != 0)
		{
			cout << "|" << setw(65) << "BOYUT DEĞERLERİ UYGUN DEĞİL TEKRAR DENEYİN" << setw(20) << "|" << endl
				<< "--------------------------------------------------------------------------------------" << endl;
		}
		cout << "|  İZİ BULUNACAK KARE MATRİSİN BOYUTUNU GİR :" << setw(23) << " "; cin >> boyut;//kullanıcı matrisin boyutunu girer
		cout << "--------------------------------------------------------------------------------------" << endl;
		kosul++;
	} while (boyut <= 0);
	for (int b = 1; b <= boyut; b++)//kullanıcı matrisin elemanlarının değerlerini girer
	{
		for (int c = 1; c <= boyut; c++)
		{
			cout << "|  MATRİSİN " << b << ".SATIR " << c << ".SÜTUNDAKİ ELEMANININ DEĞERİNİ GİR :           ";
			cin >> deger_1[b][c];
			if (b == c)
			{
				iz = iz + deger_1[b][c];//matrisin izi hesaplanır
			}
		}
	}
	cout << "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(49) << "GİRİLEN MATRİS" << setw(36) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= boyut; b++)
	{
		cout << "|" << setw(15) << "|";
		for (int c = 1; c <= boyut; c++)
		{
			cout << setw(5) << deger_1[b][c] << "  ";//matris ekrana yazılır
		}
		cout << "|" << endl;
	}
	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|  MATRİSİN İZİ" << setw(54) << iz << endl//iz ekrana yazılır
		<< "--------------------------------------------------------------------------------------" << endl;
}

void kose() {
	system("cls");
	int deger_1[100][100], sutun = 0, satir = 0, kosul = 0;
	cout << "______________________________________________________________________________________" << endl
		<< "|" << setw(85) << "|" << endl
		<< "|" << setw(49) << "KÖŞE BULMA" << setw(36) << "|" << endl
		<< "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl;
	do {
		if (kosul != 0)
		{
			cout << "|" << setw(65) << "BOYUT DEĞERLERİ UYGUN DEĞİL TEKRAR DENEYİN" << setw(20) << "|" << endl
				<< "--------------------------------------------------------------------------------------" << endl;
		}
		cout << "|  KÖŞESİ BULUNACAK MATRİSİN SATIR SAYINI GİRİN :" << setw(19) << " "; cin >> satir;
		cout << "|  KÖŞESİ BULUNACAK MATRİSİN SÜTUN SAYINI GİRİN :" << setw(19) << " "; cin >> sutun;//boyutlar kullanıcı tarafından girilir
		cout << "--------------------------------------------------------------------------------------" << endl;
		kosul++;
	} while (satir <= 0 || sutun <= 0);//matrisin boyutları sıfırdan büyük değilse kullanıcıya yeniden değer girdirilir
	for (int b = 1; b <= satir; b++)
	{
		for (int c = 1; c <= sutun; c++)
		{
			cout << "|  MATRİSİN " << b << ".SATIR " << c << ".SÜTUNDAKİ ELEMANININ DEĞERİNİ GİR :           ";//kullanıcı matrisin elemanlarının değerlerini girer
			cin >> deger_1[b][c];
		}
	}
	cout << "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(52) << "GİRİLEN MATRİS" << setw(33) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= satir; b++)//girilen matris ekrana yazılır
	{
		cout << "|" << setw(15) << "|";
		for (int c = 1; c <= sutun; c++)
		{
			cout << setw(4) << deger_1[b][c] << "  ";
		}
		cout << "|" << endl;
	}

	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(52) << "MATRİSİN KÖŞESİ" << setw(33) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl
		<< "|" << setw(85) << "|" << endl;
	for (int b = 1; b <= satir; b++)//matrisin sadece köşeleri gözükecek şekilde ekrana yazdırılır
	{
		cout << "|" << setw(15) << "|";
		for (int c = 1; c <= sutun; c++)
		{
			if (b == 1 && c == 1)
			{
				cout << setw(4) << deger_1[b][c] << "  ";
			}
			else if (b == 1 && c == sutun)
			{
				cout << setw(4) << deger_1[b][c] << "  ";
			}
			else if (b == satir && c == 1)
			{
				cout << setw(4) << deger_1[b][c] << "  ";
			}
			else if (b == satir && c == sutun)
			{
				cout << setw(4) << deger_1[b][c] << "  ";
			}
			else
			{
				cout << setw(4) << "      ";//eleman köşede değilse ekrana sadece boşluklar yazdırılır
			}
		}
		cout << "|" << endl;
	}
	cout << "|" << setw(85) << "|" << endl
		<< "--------------------------------------------------------------------------------------" << endl;
}

int main()
{
	int secim;
	string cevap;
	setlocale(LC_ALL, "turkish");
	do {
		system("cls");
		menu();
		cout << endl << "SECİMİN:  ";

		cin >> secim;
		if (secim == 1)//matris toplama**
		{
			topla();
		}

		else if (secim == 2)//matris çıkarma**
		{
			cikarma();
		}

		else if (secim == 3)//matris çarpma
		{
			carpma();
		}

		else if (secim == 4)//tranpoze alma**
		{
			transpoze();
		}

		else if (secim == 5)//determinant alma**
		{
			determinant();
		}

		else if (secim == 6)//matris izi bulma**
		{
			iz();
		}
		else if (secim == 7)//KÖŞE BULMA**
		//**************!!!!!!!!!!!!! MATRİSİN KÖŞEGENİNİ BULMA YAZMADIĞINIZ İÇİN SADECE KÖŞEDEKİ DEĞERLERİ BULMA İŞLEMİNİ YAPTIM !!!!!!!!!!!!!!!**********
		{
			kose();
		}

		cout<< "|  BAŞKA İŞLEM YAPACAK MISIN? (e/h)  |" << setw(30) << " "; cin >> cevap;// aşağıdaki while döngüsünün tekrar edip etmeyeceğine karar veren kullanıcının girdiği cevap değişkeni
		cout << "\n--------------------------------------------------------------------------------------" << endl;
	}while (cevap == "e" || cevap == "E");//kullanıcı başka işlem yapmak istediğinde yeniden programı kapatıp açmadan yapmasını sağlayan while döngüsü
	system("pause");
	return 0;
};