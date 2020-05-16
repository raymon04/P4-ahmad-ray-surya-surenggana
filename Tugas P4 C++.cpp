#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang : 
	cout<<"=====================================================================================================\n";
	cout<<"===========================================SELAMAT DATANG KAUM REBAHAN===============================\n";
	cout<<"===========================================KUIS COVID-19 GAK ADA AKHLAK==============================\n";
	cout<<"=====================================================================================================\n";
	cout<<"                                          Silahkan masukkan data anda!\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t\t Masukkan Email : ";cin>>user;cout<<"\n";
	cout<<"\t\t\t\t Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (user == "ahmadray@gmail.com" && pass == "12345")
			{
				cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Email dan password anda salah silahkan coba kembali \t\t\n";
				cout<<"\t\t\t apakah anda ingin coba lagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	{
    ulangjwb :
	cout<<"                  SILAK PADE PILIH JAWABAN SAK KENAK GATI                \n";
	cout<<"=========================================================================\n";
	cout<<"1. Virus Corona (COVID-19) yang menyerang manusia muncul di negara ... pada awal tahun 2020.??\n";
	string pilgan1[50]={"a. cina","b. indonesia","c. amerika","d. planet mars"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
    cout<<"==========================================================================\n";        
    cout<<"2.  Masa inkubasi COVID-19 selama...\n";
    string pilgan2[50]={"a. 1 bulan","b. 3 hari","c. 1 tahun","d. 14 hari"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
    cout<<"==========================================================================\n";        
	cout<<"3. Sampai saat ini negara manakah yang memiliki jumlah terinfeksi terbanyak??\n";
	string pilgan3[50]={"a. Indonesia","b. Italia","c. Amerika","d. China"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
	cout<<"==========================================================================\n";				
	cout<<"4. Cuci tangan yang paling baik dilakukan dengan menggunakan sabun pada...\n";
	string pilgan4[50]={"a. air kolam ikan","b. air mengalir","c. air got","d. air ketuban"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
    cout<<"==========================================================================\n";       
    cout<<"5. Apa yang dilakukan sekarang untuk membantu pemerintah dalam menghadapi masa pandemi ini?\n";
    string pilgan5[50]={"a. dirumah aja","b. dimall aja","c. didiskotik aja ","d. dipasar aja"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"1) Mencuci tangan minimal 40-60 detik.\n";
	cout<<"2) Berjemur di bawah sinar matahari selama 15-30 menit\n";
	cout<<"3) makan-makanan bergizi\n";
	cout<<"4) istirahat yang cukup\n";
	cout<<"5) pakai masker setiap hari dirumah\n";
	cout<<"6. Upaya untuk menjaga diri terhindar dari COVID-19 di rumah yang tepat terdapat pada nomor....\n";
	string pilgan6[50]={"a. 1-3-4-5-2","b. 1-2-3-4","c. 2-3-4-5-1","d. 4-3-1-5-2"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}     
	cout<<"==========================================================================\n";
	cout<<"7. Tujuan menjaga jarak (Social distancing/Physical distancing) sebagaimana  yang diinstruksikan oleh pemerintah kepada masyarakat yaitu...\n";
	string pilgan7[50]={"a. Agar orang-orang tidak terlalu akrab antara satu sama lain.","b. Membudayakan antri dan disiplin.","c. Mengantisipasi penyebaran COVID-19.","d. isengan doang"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"8. apakah daerah NTB sudah terjangkit Covid-19?\n";
	string pilgan8[50]={"a. sedang proses","b. belum","c. belum tau","d. sudah terjangkit"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"9. Di Indonesia daerah manakah yang paling banyak terinfeksi covid-19??\n";
	string pilgan9[50]={"a. Jakarta","b. Bandung","c. Bali","d. Lombok"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"10. apa yang kita gunakan disaat keluar rumah?\n";
	string pilgan10[50]={"a. tidak menggunakan apa-apa","b. menggunakan jaket","c. menggunakan selimut","d. menggunakan masker"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												       

	}		nilai :
					cout<<"=====================================================\n";
					cout<<"Perolehan Nilai :"<<endl;
            		nilai = benar*10,salah-10;
            		
            		
            		cout<<"    Jumlah Benar : "<<benar<<" soal "<<endl;
            		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai : 
			cout<<"==========================="<<endl;
			cout<<"Kuis rebahan seputaran covid-19 Selesai, Terimakasi\n";
			cout<<"==========================="<<endl;
	
}
