#include <iostream>
#include <string>
#include <cstdlib>
#include <stdlib.h> 
#include <time.h>   
#include <stdio.h> 
using namespace std;
string rezultat;

void oczysc()
	{
		system("pause>null");
		system("cls");
	}
	
int main(int argc, char** argv) {
	srand (time(NULL));

	menu_gra:
		system("cls");
	string plansza_gracz[7][7] {

			{ "X", " ", "1", "2", "3", "4", "5" },
			{ " ", " ", " ", " ", " ", " ", " " },
			{ "A", " ", "~", "~", "~", "~", "~" },
			{ "B", " ", "~", "~", "~", "~", "~" },
			{ "C", " ", "~", "~", "~", "~", "~" },
			{ "D", " ", "~", "~", "~", "~", "~" },
			{ "E", " ", "~", "~", "~", "~", "~" }
					
			};
	
	int menu_opcja;
	int ruch_gracz1;
	string ruch_gracz2;
	int ruch_npc1;
	int ruch_npc2;
	int strzal;
	int stan_pola[25];
	

	cout<<"--------------"<<endl;
	cout<<"-   Witaj!   -"<<endl;
	cout<<"--------------"<<endl;
	cout<<"- KROPECZKI  -"<<endl;
	cout<<"--------------"<<endl;
	cout<<"- 1.Nowa gra -"<<endl;
	cout<<"--------------"<<endl;
	cout<<"- 2.Jak grac -"<<endl;
	cout<<"--------------"<<endl;
	cout<<"- 3.Wyjscie  -"<<endl;
	cout<<"--------------"<<endl;
	cout<<">>";
	cin>>menu_opcja;
	

	
if(menu_opcja == 2){ cout<<"2"; }

if(menu_opcja == 3){ goto koniec; }
	
if(	menu_opcja != 1	&&	menu_opcja != 2	&&	menu_opcja != 3	) 
		{
			cout<<"Zly wybor!"<<endl; 
			oczysc();
			goto menu_gra;
		}	
nowa_gra:	
if(menu_opcja == 1)
	{//poczatek if == 1
		//faza 1
		
		string plansza_gracz[7][7] {

			{ "X", " ", "1", "2", "3", "4", "5" },
			{ " ", " ", " ", " ", " ", " ", " " },
			{ "A", " ", "~", "~", "~", "~", "~" },
			{ "B", " ", "~", "~", "~", "~", "~" },
			{ "C", " ", "~", "~", "~", "~", "~" },
			{ "D", " ", "~", "~", "~", "~", "~" },
			{ "E", " ", "~", "~", "~", "~", "~" }
					
			};
			
		string plansza_npc[7][7] {

			{ "X", " ", "1", "2", "3", "4", "5" },
			{ " ", " ", " ", " ", " ", " ", " " },
			{ "A", " ", "~", "~", "~", "~", "~" },
			{ "B", " ", "~", "~", "~", "~", "~" },
			{ "C", " ", "~", "~", "~", "~", "~" },
			{ "D", " ", "~", "~", "~", "~", "~" },
			{ "E", " ", "~", "~", "~", "~", "~" }
					
			};
			
	string plansza_gracz_gra[7][7] {

			{ "X", " ", "1", "2", "3", "4", "5" },
			{ " ", " ", " ", " ", " ", " ", " " },
			{ "A", " ", "~", "~", "~", "~", "~" },
			{ "B", " ", "~", "~", "~", "~", "~" },
			{ "C", " ", "~", "~", "~", "~", "~" },
			{ "D", " ", "~", "~", "~", "~", "~" },
			{ "E", " ", "~", "~", "~", "~", "~" }
					
			};
		
		int ruch = 1;
		int kropki = 10;
	    int iksy = 10;
	    
	    for(int i=0; i<25; i++)
			{
				stan_pola[i] = 0;
			}
		
		int stan_pola_npc[25];
	
		for(int i=0; i<25; i++)
			{
				stan_pola_npc[i] = 0;
			}
	    
	    
		//losowanie gracz
			int kropki_plansza[10];
			
			for (int i=0; i<10; i++)
				{
					kropki_plansza[i] = rand() %25 + 1;
				}
				
			sprawdz_losy:	
			for (int i=0; i<10; i++)
				{
					for (int j=0; j<10; j++)
						{
							if (j != i) { if ( kropki_plansza[i] == kropki_plansza[j] ) {kropki_plansza[i] = rand() %25 + 1; goto sprawdz_losy;} }
						}
					
				}
			
			for (int i=0; i<10; i++)
				{
					if ( kropki_plansza[i]==1 ) { plansza_gracz[2][2] = "T"; }
					if ( kropki_plansza[i]==2 ) { plansza_gracz[2][3] = "T"; }
					if ( kropki_plansza[i]==3 ) { plansza_gracz[2][4] = "T"; }
					if ( kropki_plansza[i]==4 ) { plansza_gracz[2][5] = "T"; }
					if ( kropki_plansza[i]==5 ) { plansza_gracz[2][6] = "T"; }
					
					if ( kropki_plansza[i]==6 ) { plansza_gracz[3][2] = "T"; }
					if ( kropki_plansza[i]==7 ) { plansza_gracz[3][3] = "T"; }
					if ( kropki_plansza[i]==8 ) { plansza_gracz[3][4] = "T"; }
					if ( kropki_plansza[i]==9 ) { plansza_gracz[3][5] = "T"; }
					if ( kropki_plansza[i]==10) { plansza_gracz[3][6] = "T"; }
					
					if ( kropki_plansza[i]==11) { plansza_gracz[4][2] = "T"; }
					if ( kropki_plansza[i]==12) { plansza_gracz[4][3] = "T"; }
					if ( kropki_plansza[i]==13) { plansza_gracz[4][4] = "T"; }
					if ( kropki_plansza[i]==14) { plansza_gracz[4][5] = "T"; }
					if ( kropki_plansza[i]==15) { plansza_gracz[4][6] = "T"; }
					
					if ( kropki_plansza[i]==16) { plansza_gracz[5][2] = "T"; }
					if ( kropki_plansza[i]==17) { plansza_gracz[5][3] = "T"; }
					if ( kropki_plansza[i]==18) { plansza_gracz[5][4] = "T"; }
					if ( kropki_plansza[i]==19) { plansza_gracz[5][5] = "T"; }
					if ( kropki_plansza[i]==20) { plansza_gracz[5][6] = "T"; }
					
					if ( kropki_plansza[i]==21) { plansza_gracz[6][2] = "T"; }
					if ( kropki_plansza[i]==22) { plansza_gracz[6][3] = "T"; }
					if ( kropki_plansza[i]==23) { plansza_gracz[6][4] = "T"; }
					if ( kropki_plansza[i]==24) { plansza_gracz[6][5] = "T"; }
					if ( kropki_plansza[i]==25) { plansza_gracz[6][6] = "T"; }
					
					
				}
			
			//losowanie przeciwnik
			int iks[10];
			
			for (int i=0; i<10; i++)
				{
					iks[i] = rand() %25 + 1;
				}
				
			sprawdz_losy2:	
			for (int i=0; i<10; i++)
				{
					for (int j=0; j<10; j++)
						{
							if (j != i) { if ( iks[i] == iks[j] ) {iks[i] = rand() %25 + 1; goto sprawdz_losy2;} }
						}
					
				}
			
			for (int i=0; i<10; i++)
				{
					if ( iks[i]==1 ) { plansza_npc[2][2] = "x"; }
					if ( iks[i]==2 ) { plansza_npc[2][3] = "x"; }
					if ( iks[i]==3 ) { plansza_npc[2][4] = "x"; }
					if ( iks[i]==4 ) { plansza_npc[2][5] = "x"; }
					if ( iks[i]==5 ) { plansza_npc[2][6] = "x"; }
					
					if ( iks[i]==6 ) { plansza_npc[3][2] = "x"; }
					if ( iks[i]==7 ) { plansza_npc[3][3] = "x"; }
					if ( iks[i]==8 ) { plansza_npc[3][4] = "x"; }
					if ( iks[i]==9 ) { plansza_npc[3][5] = "x"; }
					if ( iks[i]==10) { plansza_npc[3][6] = "x"; }
					
					if ( iks[i]==11) { plansza_npc[4][2] = "x"; }
					if ( iks[i]==12) { plansza_npc[4][3] = "x"; }
					if ( iks[i]==13) { plansza_npc[4][4] = "x"; }
					if ( iks[i]==14) { plansza_npc[4][5] = "x"; }
					if ( iks[i]==15) { plansza_npc[4][6] = "x"; }
					
					if ( iks[i]==16) { plansza_npc[5][2] = "x"; }
					if ( iks[i]==17) { plansza_npc[5][3] = "x"; }
					if ( iks[i]==18) { plansza_npc[5][4] = "x"; }
					if ( iks[i]==19) { plansza_npc[5][5] = "x"; }
					if ( iks[i]==20) { plansza_npc[5][6] = "x"; }
					
					if ( iks[i]==21) { plansza_npc[6][2] = "x"; }
					if ( iks[i]==22) { plansza_npc[6][3] = "x"; }
					if ( iks[i]==23) { plansza_npc[6][4] = "x"; }
					if ( iks[i]==24) { plansza_npc[6][5] = "x"; }
					if ( iks[i]==25) { plansza_npc[6][6] = "x"; }
					
					
				}			 			 			
				
		//faza 2
		while(true)
		{//while poczatek
			gra: //poczatek gry
			
			if (iksy == 0) { goto win; }
			if (kropki == 0) { goto lose; }
				
			system("cls");
			cout<<"--------------"<<endl;
			cout<<"- Statki: "<<kropki<<" -"<<endl;
			cout<<"--------------"<<endl;
			for(int i=0; i<7; i++)
				{
					for(int i2=0; i2<7; i2++ )
						{
							cout<<" "<<plansza_gracz[i][i2];
						}	
					cout<<endl;
				}	
			cout<<"--------------"<<endl;	
			cout<<rezultat<<endl;
			cout<<"--------------"<<endl;
			cout<<"-  Iksy:  "<<iksy<<" -"<<endl;
			cout<<"--------------"<<endl;
			for(int i=0; i<7; i++)
				{
					for(int i2=0; i2<7; i2++ )
						{
							cout<<" "<<plansza_gracz_gra[i][i2];
						}	
					cout<<endl;
				}
			cout<<"--------------"<<endl;	
			if (ruch == 1)
			{					
				cout<<">>"; 
				cin>>ruch_gracz2;
				cout<<">>"; 
				cin>>ruch_gracz1;
								
				if ( ruch_gracz1 > 5 || ruch_gracz1 < 1 ) { cout<<"Zla liczba! >>klick<<"; system("pause>null"); goto gra; }
				if ( 	ruch_gracz2 != "A" && 
						ruch_gracz2 != "B" && 
						ruch_gracz2 != "C" && 
						ruch_gracz2 != "D" && 
						ruch_gracz2 != "E" &&
						ruch_gracz2 != "a" && 
						ruch_gracz2 != "b" && 
						ruch_gracz2 != "c" && 
						ruch_gracz2 != "d" && 
						ruch_gracz2 != "e"		) { cout<<"Zla liczba! >>klick<<"; system("pause>null"); goto gra; }
				
				if (ruch_gracz2 == "a" && ruch_gracz1 == 1 	|| ruch_gracz2 == "A" && ruch_gracz1 == 1){ if (stan_pola[0] == 0) { strzal = 1;   stan_pola[0] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "a" && ruch_gracz1 == 2 	|| ruch_gracz2 == "A" && ruch_gracz1 == 2){ if (stan_pola[1] == 0) { strzal = 2;   stan_pola[1] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "a" && ruch_gracz1 == 3 	|| ruch_gracz2 == "A" && ruch_gracz1 == 3){ if (stan_pola[2] == 0) { strzal = 3;   stan_pola[2] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "a" && ruch_gracz1 == 4 	|| ruch_gracz2 == "A" && ruch_gracz1 == 4){ if (stan_pola[3] == 0) { strzal = 4;   stan_pola[3] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "a" && ruch_gracz1 == 5 	|| ruch_gracz2 == "A" && ruch_gracz1 == 5){ if (stan_pola[4] == 0) { strzal = 5;   stan_pola[4] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
								
				if (ruch_gracz2 == "b" && ruch_gracz1 == 1 	|| ruch_gracz2 == "B" && ruch_gracz1 == 1){ if (stan_pola[5] == 0) { strzal = 6;   stan_pola[5] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "b" && ruch_gracz1 == 2 	|| ruch_gracz2 == "B" && ruch_gracz1 == 2){ if (stan_pola[6] == 0) { strzal = 7;   stan_pola[6] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "b" && ruch_gracz1 == 3 	|| ruch_gracz2 == "B" && ruch_gracz1 == 3){ if (stan_pola[7] == 0) { strzal = 8;   stan_pola[7] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "b" && ruch_gracz1 == 4 	|| ruch_gracz2 == "B" && ruch_gracz1 == 4){ if (stan_pola[8] == 0) { strzal = 9;   stan_pola[8] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "b" && ruch_gracz1 == 5	|| ruch_gracz2 == "B" && ruch_gracz1 == 5){ if (stan_pola[9] == 0) { strzal = 10;  stan_pola[9] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
								
				if (ruch_gracz2 == "c" && ruch_gracz1 == 1	|| ruch_gracz2 == "C" && ruch_gracz1 == 1){ if (stan_pola[10] == 0) { strzal = 11; stan_pola[10] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "c" && ruch_gracz1 == 2	|| ruch_gracz2 == "C" && ruch_gracz1 == 2){ if (stan_pola[11] == 0) { strzal = 12; stan_pola[11] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "c" && ruch_gracz1 == 3	|| ruch_gracz2 == "C" && ruch_gracz1 == 3){ if (stan_pola[12] == 0) { strzal = 13; stan_pola[12] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "c" && ruch_gracz1 == 4	|| ruch_gracz2 == "C" && ruch_gracz1 == 4){ if (stan_pola[13] == 0) { strzal = 14; stan_pola[13] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "c" && ruch_gracz1 == 5	|| ruch_gracz2 == "C" && ruch_gracz1 == 5){ if (stan_pola[14] == 0) { strzal = 15; stan_pola[14] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				
				if (ruch_gracz2 == "d" && ruch_gracz1 == 1	|| ruch_gracz2 == "D" && ruch_gracz1 == 1){ if (stan_pola[15] == 0) { strzal = 16; stan_pola[15] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "d" && ruch_gracz1 == 2	|| ruch_gracz2 == "D" && ruch_gracz1 == 2){ if (stan_pola[16] == 0) { strzal = 17; stan_pola[16] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "d" && ruch_gracz1 == 3	|| ruch_gracz2 == "D" && ruch_gracz1 == 3){ if (stan_pola[17] == 0) { strzal = 18; stan_pola[17] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "d" && ruch_gracz1 == 4	|| ruch_gracz2 == "D" && ruch_gracz1 == 4){ if (stan_pola[18] == 0) { strzal = 19; stan_pola[18] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "d" && ruch_gracz1 == 5	|| ruch_gracz2 == "D" && ruch_gracz1 == 5){ if (stan_pola[19] == 0) { strzal = 20; stan_pola[19] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
								
				if (ruch_gracz2 == "e" && ruch_gracz1 == 1	|| ruch_gracz2 == "E" && ruch_gracz1 == 1){ if (stan_pola[20] == 0) { strzal = 21; stan_pola[20] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "e" && ruch_gracz1 == 2	|| ruch_gracz2 == "E" && ruch_gracz1 == 2){ if (stan_pola[21] == 0) { strzal = 22; stan_pola[21] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "e" && ruch_gracz1 == 3	|| ruch_gracz2 == "E" && ruch_gracz1 == 3){ if (stan_pola[22] == 0) { strzal = 23; stan_pola[22] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "e" && ruch_gracz1 == 4	|| ruch_gracz2 == "E" && ruch_gracz1 == 4){ if (stan_pola[23] == 0) { strzal = 24; stan_pola[23] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				if (ruch_gracz2 == "e" && ruch_gracz1 == 5	|| ruch_gracz2 == "E" && ruch_gracz1 == 5){ if (stan_pola[24] == 0) { strzal = 25; stan_pola[24] = 1; }else { rezultat = "Juz tu szukales!"; goto gra; } }
				
				if (strzal == 1) 
					{ 
						if (plansza_npc[2][2] == "x") { rezultat = "Znaleziono x!"; iksy -= 1;  plansza_gracz_gra[2][2] = "x"; }
						if (plansza_npc[2][2] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[2][2] = "o";}
						ruch = 2;
					}	
				if (strzal == 2) 
					{ 
						if (plansza_npc[2][3] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[2][3] = "x"; }
						if (plansza_npc[2][3] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[2][3] = "o"; }
						ruch = 2;
					}
				if (strzal == 3) 
					{ 
						if (plansza_npc[2][4] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[2][4] = "x";  }
						if (plansza_npc[2][4] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[2][4] = "o"; }
						ruch = 2;
					}	
				if (strzal == 4) 
					{ 
						if (plansza_npc[2][5] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[2][5] = "x"; }
						if (plansza_npc[2][5] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[2][5] = "o"; }
						ruch = 2;
					}
				if (strzal == 5) 
					{ 
						if (plansza_npc[2][6] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[2][6] = "x"; }
						if (plansza_npc[2][6] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[2][6] = "o"; }
						ruch = 2;
					}
				
				if (strzal == 6) 
					{ 
						if (plansza_npc[3][2] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[3][2] = "x"; }
						if (plansza_npc[3][2] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[3][2] = "o"; }
						ruch = 2;
					}	
				if (strzal == 7) 
					{ 
						if (plansza_npc[3][3] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[3][3] = "x";  }
						if (plansza_npc[3][3] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[3][3] = "o"; } 
						ruch = 2;
					}
				if (strzal == 8) 
					{ 
						if (plansza_npc[3][4] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[3][4] = "x"; }
						if (plansza_npc[3][4] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[3][4] = "o"; }
						ruch = 2;
					}
				if (strzal == 9) 
					{ 
						if (plansza_npc[3][5] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[3][5] = "x"; }
						if (plansza_npc[3][5] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[3][5] = "o"; }
						ruch = 2;
					}	
				if (strzal == 10) 
					{ 
						if (plansza_npc[3][6] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[3][6] = "x"; }
						if (plansza_npc[3][6] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[3][6] = "o"; }
						ruch = 2;
					}
					
				if (strzal == 11) 
					{ 
						if (plansza_npc[4][2] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[4][2] = "x"; }
						if (plansza_npc[4][2] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[4][2] = "o"; }
						ruch = 2;
					}
				if (strzal == 12) 
					{ 
						if (plansza_npc[4][3] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[4][3] = "x"; }
						if (plansza_npc[4][3] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[4][3] = "o"; }
						ruch = 2;
					}	
				if (strzal == 13) 
					{ 
						if (plansza_npc[4][4] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[4][4] = "x";  }
						if (plansza_npc[4][4] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[4][4] = "o"; }
						ruch = 2;
					}	
				if (strzal == 14) 
					{ 
						if (plansza_npc[4][5] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[4][5] = "x"; }
						if (plansza_npc[4][5] != "x") { rezultat = "Pusto :c";plansza_gracz_gra[4][5] = "o"; }
						ruch = 2;
					}	
				if (strzal == 15) 
					{ 
						if (plansza_npc[4][6] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[4][6] = "x"; }
						if (plansza_npc[4][6] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[4][6] = "o"; }
						ruch = 2;
					}
					
				if (strzal == 16) 
					{ 
						if (plansza_npc[5][2] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[5][2] = "x"; }
						if (plansza_npc[5][2] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[5][2] = "o"; }
						ruch = 2;
					}
				if (strzal == 17) 
					{ 
						if (plansza_npc[5][3] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[5][3] = "x"; }
						if (plansza_npc[5][3] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[5][3] = "o"; }
						ruch = 2;
					}
				if (strzal == 18) 
					{ 
						if (plansza_npc[5][4] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[5][4] = "x";  }
						if (plansza_npc[5][4] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[5][4] = "o"; }
						ruch = 2;
					}
				if (strzal == 19) 
					{ 
						if (plansza_npc[5][5] == "x") { rezultat = "Znaleziono x!"; iksy -= 1;  plansza_gracz_gra[5][5] = "x"; }
						if (plansza_npc[5][5] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[5][5] = "o"; }
						ruch = 2;
					}
				if (strzal == 20) 
					{ 
						if (plansza_npc[5][6] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[5][6] = "x"; }
						if (plansza_npc[5][6] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[5][6] = "o"; }
						ruch = 2;
					}
					
				if (strzal == 21) 
					{ 
						if (plansza_npc[6][2] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[6][2] = "x";  }
						if (plansza_npc[6][2] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[6][2] = "o"; }
						ruch = 2;
					}
				if (strzal == 22) 
					{ 
						if (plansza_npc[6][3] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[6][3] = "x"; }
						if (plansza_npc[6][3] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[6][3] = "o"; }
						ruch = 2;
					}
				if (strzal == 23) 
					{ 
						if (plansza_npc[6][4] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[6][4] = "x"; }
						if (plansza_npc[6][4] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[6][4] = "o"; }
						ruch = 2;
					}
				if (strzal == 24) 
					{ 
						if (plansza_npc[6][5] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[6][5] = "x"; }
						if (plansza_npc[6][5] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[6][5] = "o"; }
						ruch = 2;
					}
				if (strzal == 25) 
					{ 
						if (plansza_npc[6][6] == "x") { rezultat = "Znaleziono x!"; iksy -= 1; plansza_gracz_gra[6][6] = "x"; }
						if (plansza_npc[6][6] != "x") { rezultat = "Pusto :c"; plansza_gracz_gra[6][6] = "o"; }
						ruch = 2;
					}
					
									
													
				goto gra;
			}//koniec ruchu gracza 
			
			if (ruch=2)
			{//poczatek ruchu npc
				gra_npc:
				ruch_npc1=rand()%25 + 1;
				
				if (stan_pola_npc[ruch_npc1] == 1 ) { goto gra_npc; }
					
				if (ruch_npc1 == 1) 
					{ 
						if (plansza_gracz[2][2] == "T") { kropki -= 1;  plansza_gracz[2][2] = "X"; }
						else { plansza_gracz[2][2] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 2) 
					{ 
						if (plansza_gracz[2][3] == "T") { kropki -= 1;  plansza_gracz[2][3] = "X"; }
						else { plansza_gracz[2][3] = "o";}
						ruch = 1;
					}	
				if (ruch_npc1 == 3) 
					{ 
						if (plansza_gracz[2][4] == "T") { kropki -= 1;  plansza_gracz[2][4] = "X"; }
						else{ plansza_gracz[2][4] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 4) 
					{ 
						if (plansza_gracz[2][5] == "T") { kropki -= 1;  plansza_gracz[2][5] = "X"; }
						else{ plansza_gracz[2][5] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 5) 
					{ 
						if (plansza_gracz[2][6] == "T") { kropki -= 1;  plansza_gracz[2][6] = "X"; }
						else { plansza_gracz[2][6] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 6) 
					{ 
						if (plansza_gracz[3][2] == "T") { kropki -= 1;  plansza_gracz[3][2] = "X"; }
						else { plansza_gracz[3][2] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 7) 
					{ 
						if (plansza_gracz[3][3] == "T") { kropki -= 1;  plansza_gracz[3][3] = "X"; }
						else { plansza_gracz[3][3] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 8) 
					{ 
						if (plansza_gracz[3][4] == "T") { kropki -= 1;  plansza_gracz[3][4] = "X"; }
						else { plansza_gracz[3][4] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 9) 
					{ 
						if (plansza_gracz[3][5] == "T") { kropki -= 1;  plansza_gracz[3][5] = "X"; }
						else { plansza_gracz[3][5] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 10) 
					{ 
						if (plansza_gracz[3][6] == "T") { kropki -= 1;  plansza_gracz[3][6] = "X"; }
						else{ plansza_gracz[3][6] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 11) 
					{ 
						if (plansza_gracz[4][2] == "T") { kropki -= 1;  plansza_gracz[4][2] = "X"; }
						else { plansza_gracz[4][2] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 12) 
					{ 
						if (plansza_gracz[4][3] == "T") { kropki -= 1;  plansza_gracz[4][3] = "X"; }
						else { plansza_gracz[4][2] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 13) 
					{ 
						if (plansza_gracz[4][4] == "T") { kropki -= 1;  plansza_gracz[4][4] = "X"; }
						else { plansza_gracz[4][4] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 14) 
					{ 
						if (plansza_gracz[4][5] == "T") { kropki -= 1;  plansza_gracz[4][5] = "X"; }
						else { plansza_gracz[4][5] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 15) 
					{ 
						if (plansza_gracz[4][6] == "T") { kropki -= 1;  plansza_gracz[4][6] = "X"; }
						else { plansza_gracz[4][6] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 16) 
					{ 
						if (plansza_gracz[5][2] == "T") { kropki -= 1;  plansza_gracz[5][2] = "X"; }
						else { plansza_gracz[5][2] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 17) 
					{ 
						if (plansza_gracz[5][3] == "T") { kropki -= 1;  plansza_gracz[5][3] = "X"; }
						else { plansza_gracz[5][3] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 18) 
					{ 
						if (plansza_gracz[5][4] == "T") { kropki -= 1;  plansza_gracz[5][4] = "X"; }
						else { plansza_gracz[5][4] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 19) 
					{ 
						if (plansza_gracz[5][5] == "T") { kropki -= 1;  plansza_gracz[5][5] = "X"; }
						else { plansza_gracz[5][5] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 20) 
					{ 
						if (plansza_gracz[5][6] == "T") { kropki -= 1;  plansza_gracz[5][6] = "X"; }
						else { plansza_gracz[5][6] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 21) 
					{ 
						if (plansza_gracz[6][2] == "T") { kropki -= 1;  plansza_gracz[6][2] = "X"; }
						else { plansza_gracz[6][2] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 22) 
					{ 
						if (plansza_gracz[6][3] == "T") { kropki -= 1;  plansza_gracz[6][3] = "X"; }
						else { plansza_gracz[6][3] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 23) 
					{ 
						if (plansza_gracz[6][4] == "T") { kropki -= 1;  plansza_gracz[6][4] = "X"; }
						else { plansza_gracz[6][4] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 24) 
					{ 
						if (plansza_gracz[6][5] == "T") { kropki -= 1;  plansza_gracz[6][5] = "X"; }
						else { plansza_gracz[6][5] = "o";}
						ruch = 1;
					}
				if (ruch_npc1 == 25) 
					{ 
						if (plansza_gracz[6][6] == "T") { kropki -= 1;  plansza_gracz[6][6] = "X"; }
						else { plansza_gracz[6][6] = "o";}
						ruch = 1;
					}
				stan_pola_npc[ruch_npc1] = 1;												
				goto gra;		
			}//koniec ruchu npc
		}//while koniec
		win:	
				system("cls");
				cout<<"--------------"<<endl;
				cout<<"-  Wygrana!  -"<<endl;
				cout<<"--------------"<<endl;
				cout<<"- KROPECZKI  -"<<endl;
				cout<<"--------------"<<endl;
				cout<<"- 1.Nowa gra -"<<endl;
				cout<<"--------------"<<endl;
				cout<<"- 2.Wyjscie  -"<<endl;
				cout<<"--------------"<<endl;
				cout<<">>";
				cin>>menu_opcja;
				if (menu_opcja==1) { goto nowa_gra; }
				if (menu_opcja==2) { goto koniec; }
				
				if(	menu_opcja != 1	&&	menu_opcja != 2	&&	menu_opcja != 3	) 
					{
						cout<<"Zly wybor!"<<endl; 
						oczysc();
						goto win;
					}
			lose:
				system("cls");
				cout<<"--------------"<<endl;
				cout<<"- Przegrana! -"<<endl;
				cout<<"--------------"<<endl;
				cout<<"- KROPECZKI  -"<<endl;
				cout<<"--------------"<<endl;
				cout<<"- 1.Nowa gra -"<<endl;
				cout<<"--------------"<<endl;
				cout<<"- 2.Wyjscie  -"<<endl;
				cout<<"--------------"<<endl;
				cout<<">>";
				cin>>menu_opcja;
				if (menu_opcja==1) { goto nowa_gra; }
				if (menu_opcja==2) { goto koniec; }
				
				if(	menu_opcja != 1	&&	menu_opcja != 2	&&	menu_opcja != 3	) 
					{
						cout<<"Zly wybor!"<<endl; 
						oczysc();
						goto lose;
					}
				
			
				
					
	}//koniec if == 1
	
	if (menu_opcja == 2)
		{	
			system("cls");
			cout<<"Witaj!"<<endl;
			cout<<"Oto jak grac."<<endl;
			cout<<"----------------------------------------------------------------------"<<endl;
			cout<<"gdy widzisz '>>klik<<' nalezy nacisnac dowolny przycisk(z klawiatury)."<<endl;
			cout<<"----------------------------------------------------------------------"<<endl;
			cout<<"                                >>klik<<"<<endl;
			oczysc();
			cout<<"-------------------------------------------------------------------------------"<<endl;
			cout<<"Jest to prosta gra w ktorej trzeba znalezc statki przeciwnika"<<" >>klik<<"<<endl;
			cout<<"-------------------------------------------------------------------------------"<<endl;
					
			system("pause>null");
			cout<<"-------------------------------------------------------------------------------"<<endl;
			cout<<"Jest ich tylesamo co Twoich"<<" >>klik<<"<<endl;
			cout<<"-------------------------------------------------------------------------------"<<endl;
		
			system("pause>null");
			cout<<"-------------------------------------------------------------------------------"<<endl;
			cout<<"Aby sprawdzic pole nalezy wpisac najpierw wiersz nastepnie wcisnac [enter]"<<endl<<"a potem wybrac kolumne i wcisnac [enter]"<<" >>klik<<"<<endl;
			cout<<"-------------------------------------------------------------------------------"<<endl;
		
			system("pause>null");
			cout<<"-------------------------------------------------------------------------------"<<endl;
			cout<<"Spokojnie nie jest to trudne!"<<" >>klik<<"<<endl;
			cout<<"-------------------------------------------------------------------------------"<<endl;
		
			
			system("pause>null");
			cout<<"-------------------------------------------------------------------------------"<<endl;
			cout<<"Tak to powinno wyglac:"<<" >>klik<<"<<endl;
			cout<<"-------------------------------------------------------------------------------"<<endl;
		
			
			system("pause>null");
			cout<<"-------------------------------------------------------------------------------"<<endl;
			cout<<"                                 >>A[enter]"<<" >>klik<<"<<endl;
			cout<<"-------------------------------------------------------------------------------"<<endl;
		
			
			system("pause>null");
			cout<<"-------------------------------------------------------------------------------"<<endl;
			cout<<"                                 >>1[enter]"<<" >>klik<<"<<endl;
			cout<<"-------------------------------------------------------------------------------"<<endl;
		
			
			system("pause>null");
			cout<<"-------------------------------------------------------------------------------"<<endl;
			cout<<"Dzieki temu sprawdzimy pole A1"<<" >>klik<<"<<endl;
			cout<<"-------------------------------------------------------------------------------"<<endl;
		
			
			system("pause>null");
			cout<<"-------------------------------------------------------------------------------"<<endl;
			cout<<"POWODZENIA!"<<" >>klik<<"<<endl;
			cout<<"-------------------------------------------------------------------------------"<<endl;
		
			
			system("pause>null");
			goto menu_gra;
			
		}//koniec samouczka 
	
	koniec:
				system("cls");
				cout<<"--------------------"<<endl;
				cout<<"- Dziekuje za gre! -"<<endl;
				cout<<"--------------------"<<endl;
				cout<<"-     >>klik<<     -"<<endl;
				cout<<"--------------------"<<endl;
				system("pause>null");
				
}
