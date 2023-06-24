#include<iostream>       
#include<conio.h>        
#include<fstream>      
#include<stdio.h>	  
#include<windows.h>
#include<string.h>// strcat
#define enter 13 
#define retroceso 8

using namespace std;

void gotoxy(int x,int y){  //funcion de despazamiento del cursor :)
	HANDLE hcon;  
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
	COORD dwPos;  
	dwPos.X = x;  
	dwPos.Y= y;  
	SetConsoleCursorPosition(hcon,dwPos);  
}  
 	
	 										//_______________________________________________
void entrada_de_usuario(ifstream &lec){ 	// ENTRADA DE USUARIOS Y MANTENIMIENTO (:D)--|--<
	int num=0,opcion,fl=2,o_m,in,cas;		//°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°
	lec.open("regis_dt.txt",ios::in);
	/////  varibles de f(x)_techr    **
	char indica,leer;
	char condtn;
	char publi[45];
	int pas_tch,clv[14];
	int o;
	string contr[14],con_tch;   
	string curs[14],nomp[14],noerror[14];
	nomp[1]="Profesor_1";
	nomp[2]="Profesor_2";
	nomp[3]="Profesor_3";
	nomp[4]="Profesor_4";
	nomp[5]="Profesor_5";
	nomp[6]="Profesor_6";
	nomp[7]="Profesor_7";
	nomp[8]="Profesor_8";
	nomp[9]="Profesor_9";
	nomp[10]="Profesor_10";
	nomp[11]="Profesor_11";
	nomp[12]="Profesor_12";
	nomp[13]="Profesor_13";
	nomp[14]="Profesor_14";
	
	curs[1]="Calculo_I";                 
	curs[2]="Matematica_Basica";         
	curs[3]="Matematica_Discreta_I";     
	curs[4]="Matematica_II";             
	curs[5]="Fisica_I";                  
	curs[6]="Base_de_datos_I";           
	curs[7]="Base-de_datos_II";          
	curs[8]="Interfaz_garfica_con_QT_I"; 
	curs[9]="Interfaz_garfica_con_QT_II";
	curs[10]="Arquitectura_de_software_I";  
	curs[11]="Arquitectura_de_software_II"; 
	curs[12]="Fisica_II";                   
	curs[13]="Matematica_Inversa";          
	curs[14]="Lenjuajes_de_programacion";   
	
	clv[1]=321;  
	clv[2]=322;  
	clv[3]=323;  
	clv[4]=324;  
	clv[5]=325;  
	clv[6]=326;  
	clv[7]=327;  
	clv[8]=328;  
	clv[9]=329;  
	clv[10]=3210;
	clv[11]=3211;
	clv[12]=3212;
	clv[13]=3213;
	clv[14]=3214;  
	
	contr[1]="qwe"; 
	contr[2]="qwr"; 
	contr[3]="qwt"; 
	contr[4]="qwy"; 
	contr[5]="qwu"; 
	contr[6]="qwi"; 
	contr[7]="qwo"; 
	contr[8]="qwp"; 
	contr[9]="qwa"; 
	contr[10]="qws";
	contr[11]="qwd";
	contr[12]="qwf";
	contr[13]="qwg";
	contr[14]="qwh";
	char p='s',ext[3],extt[3];
	char cass='s',tarea;
	int caso;
	string nom_ar;
	char opcio; 
	/////
	string user,cus,cco,c_m,c_c="17062020",cont="";
	char opci,ope,pu,oper='s',ver,com[1000],pub[30],axi;
	bool enc=false;
	cout<<"     - Ingrese el usuario : ";
	cin>>user;	 
	strcpy(pub,user.c_str());
	strcat(pub,".txt");
	cout<<"\n    - Ingrese su contraseña : ";
	axi=getch();
	while (axi != enter){
		if (axi != retroceso) {
			cont.push_back(axi);
			cout<<"*";
		}else{
			if(cont.length()>0){
				cout<<"\b \b";
				cont=cont.substr(0,cont.length()-1);
			}
		}
		axi=getch();
	}
	cout<<"\n";
	while(!lec.eof() && !enc){
		lec>>cus;
		lec>>cco;	
		if( user == cus && cco ==cont ){
			cout<<"el usuario fue encontrado..::";
			getch();
			system("cls");
			ver='s';char r='s';
			do{
			strcpy(pub,user.c_str());//de string a char 
			strcat(pub,".txt");//otro para crear un el archivo de cadausuario
			system("cls");
			cout<<"\n\n\t  ======================================\n"
                <<"\n\n\t |    BIENVENIDO A SU CUENTA PERSONAL   |\n"
                <<"\n\n\t  ======================================\n";
            cout<<"Usuario Activo :"<<user<<endl;
            cout<<"\n1) Ver publicaciones de amigos\n";
            cout<<"2) Ver mis publicaciones\n";
            cout<<"3) Hacer una publicacion\n";
            cout<<"4) Ver las Asignaturas y tareas que dejo el docente\n";
            cout<<"5) Cambiar color de fondo y de letra \n";
            cout<<"6) Cerrar cesion y volver a Learning\n";
            cout<<"7) Salir del Programa\n";
        	cout<<"eliga una opcion : ";cin>>cas;
            switch(cas){
            	case 1:
    				if(pu=='s'){
    					cout<<"Usted va ingresar a publiciones\n";
            			cout<<"Cerrar el archivo para continuar\n";           
            			system("pause");
    					system("public.txt");
    					cout<<"hola\n";
					}else{
						cout<<"Por el momento nose publico ninguna publicacion\n";
					}
            		break;
            	case 2:
    				if(pu=='s'){
    					cout<<"Usted va ingresar a publiciones\n";
            			cout<<"Cerrar el archivo para continuar\n";
            			system("pause");
    					system(pub);
					}else{
						cout<<"Por el momento no hay nada :)\n";
						cout<<"volver mas adelante ... \n";
					}
            		break;
            	case 3:
					//se guarda en el publicaciones privadas (8I)-|-<
					cin.getline(com,0,'\n');
            		FILE*docu; 
					docu=fopen(pub,"a+");
					strcpy(pub,user.c_str());//para saver quien lo publica 	
					fprintf(docu,"%s : \n",pub);
					cout<<"\n - Ingrese lo que va publicar ( EL LIMITE DE CARACTERES A INGRESAR ES 100 ) : \n";
					cout<<" - ";
					cin.getline(com,1000,'\n');
					fprintf(docu,"%s\n",com);
					//se guarda en el publicaciones publicas :)
					fclose(docu);
					docu=fopen("public.txt","a+");
					fprintf(docu,"%s : \n",pub);
					fprintf(docu,"%s\n",com);
					fclose(docu);
					cout<<"-------------------------------------------------------------------------\n";
					cout<<"\nSu publicacion se guardo con exito \n";
					pu='s';
					system("pause");
            		break;
            	case 4:
            		// misma logica que el case 3 :v
            		char w;
            		do{
            		system("cls");
            		char qw;
            		cout<<"\n 1)Ver Calculo_I";                 
            		cout<<"\n 2)Ver Matematica_Basica";         
            		cout<<"\n 3)Ver Matematica_Discreta_I";     
            		cout<<"\n 4)Ver Matematica_II";             
            		cout<<"\n 5)Ver Fisica_I";                  
            		cout<<"\n 6)Ver Base_de_datos_I";           
            		cout<<"\n 7)Ver Base-de_datos_II";          
            		cout<<"\n 8)Ver Interfaz_garfica_con_QT_I"; 
            		cout<<"\n 9)Ver Interfaz_garfica_con_QT_II";
            		cout<<"\n 10)Ver Arquitectura_de_software_I";  
            		cout<<"\n 11)Ver Arquitectura_de_software_II"; 
            		cout<<"\n 12)Ver Fisica_II";                   
            		cout<<"\n 13)Ver Matematica_Inversa";          
            		cout<<"\n 14)Ver Lenjuajes_de_programacion";   
            		cout<<"\n 15)volver a atras";
            		cout<<"\n\n - ingrese una opcion : ";cin>>qw;
            		switch (qw){
            			case 1:
            				system("Calculo_I.txt");
            				break;
            			case 2:
            				system("Matematica_Basica.txt");
            				break;
            			case 3:
            				system("Matematica_Discreta_I.txt");
            				break;
            			case 4:
            				system("Matematica_II.txt");
            				break;
            			case 5:
            				system("Fisica_I.txt");
            				break;
            			case 6:
            				system("Base_de_datos_I.txt");
            				break;
            			case 7:
            				system("Base-de_datos_II.txt");
            				break;
            			case 8:
            				system("Interfaz_garfica_con_QT_I.txt");
            				break;
            			case 9:
            				system("Interfaz_garfica_con_QT_II.txt");
            				break;
            			case 10:
            				system("Arquitectura_de_software_I.txt");
            				break;
            			case 11:
            				system("Arquitectura_de_software_II.txt");
            				break;
            			case 12:
            				system("Fisica_II.txt");
            				break;
            			case 13:
            				system("Matematica_Inversa.txt");
            				break;
            			case 14:
            				system("enjuajes_de_programacion.txt");
            				break;
            			case 15:
            				w='n';
            				break;
            			default :
							cout<<"a ingresado una opcion incorrecta :(";            			
					}
					}while(w=='s');//
            		break;
            	case 5:
            		
            		do{
            		system("cls");
    			    cout<<"Estos son los colore que se pueden configurar \n";
    				cout<<"1 ) Fondo : Negro // Letras : Verde claro   \n"<<
    					  "2 ) Fondo : Negro // Letras : Blanco \n"<<
    				      "3 ) Fondo : Azul  // Letras : Negro \n"<<
    				      "4 ) Fondo : Verde // Letras : Gris     \n"<<
    				      "5 ) Fondo : Aguamarina // Letras : Blanco\n"<<
    				      "6 ) Fondo : Rojo // Letras : Amarillo claro\n"<<
    				      "7 ) Fondo : Púrpura // Letras : Azul claro\n"<<  
    				      "8 ) Fondo : Amarillo // Letras : Blanco\n"<<
    					  "9 ) Fondo : Blanco // Letras : Rojo \n"<<
    					  "10 ) volver atras\n";
    				cout<<"Eliga una opcion :";cin>>fl;
    				switch(fl){
    					case 1 :
    						system("color 0A");break;
    					case 2 :
    						system("color 0F");break;
    					case 3 :
    						system("color 10");break;
    					case 4:
						 	system("color 28");break;
    					case 5 :
    						system("color 3F");break;
    					case 6 :
    						system("color 4E");break;
    					case 7 :
    						system("color 59");break;
    					case 8:
    						system("color 6F");break;
    					case 9:
    						system("color F4");break;
    					case 10:
    						r='n';break;
    					default :
    						cout<<"Usted a elegido una opcion incorrecta\n";break;
					}
					}while(r=='s');
            		break;
            	case 6:
            		cout<<"Usted esta saliendo  de su cuenta\n";
            		cout<<"Gracias por elegir LEARING\n";
            		ver='n';
            		break;
            	case 7:
            		cout<<"Usted esta saliendo  de su cuenta y del programa\n";
            		cout<<"Gracias por elejir LEARING\n";
            		cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n";
            		exit (0);
            		break;
            	
				case 123:
					do{
					char as;
					system("cls");
					cout<<"continuar(s) o volver atras(n)";cin>>opcio;
					if(opcio=='s'){
					system("cls");
					cout<<"______________________________________________\n";
					cout<<"Ingrese la clave de docente : ";cin>>pas_tch;
					cout<<"Ingrese contraseña generica : ";cin>>con_tch;
					int ind=1;
					for(ind;ind<=14;ind++){
						if( pas_tch == clv[ind]){
							condtn='s';
							break;
						}
					}
					//cout<<ind<<"\n";
					if(condtn=='s'){
						
						if(con_tch==contr[ind]){
							do{
							system("cls");
							cout<<"Bienvenido "<<nomp[ind]<<"  :)\n";
							cout<<"\t 1) Escribir una asingnatura o tarea .\n";
							cout<<"\t 2) Crear un Archivo** para la tarea dejada . \n";
							cout<<"\t 3) Subir o redactar un archivo \n";
							cout<<"\t 4) Volver a atras";
							cout<<"\n\n**  el archivo puede ser txt , docx , cpp , py , mpp , pptx , xlsx , etc ...\n";
							cout<<" - Eliga una opcion : ";cin>>o;
							switch (o){
								case 1:
									strcpy(publi,curs[ind].c_str());
									strcat(publi,".txt");
				            		FILE*docu;
									docu=fopen(publi,"a+");
									fclose(docu);
									system(publi);
									indica = 's';
									getch();
									break;
								case 2:
									cout<<"Primero escribir el . por favor\n";
									cout<<"\n - Escriva la extencion del archivo ( * son 3 maximos ) :";
									cin>>ext;
									tarea='s';
									break;
								case 3:
									do{
									FILE*open; 
									system("cls");
									cout<<"\n 1) Crear un documento word\n";
									cout<<" 2) Crear un hoja de calculo\n";
									cout<<" 3) Crear un presentacion en power point\n";
									cout<<" 4) Crear otro archivo\n";
									cout<<" 5) Volver atras\n";
									cout<<" - Eliga una opcion : ";cin>>caso;
									switch (caso){
										case 1:
											strcpy(publi,curs[ind].c_str());
											strcat(publi,"art.doc");
											open=fopen(publi,"a+");
											fclose(open);
											system(publi);
											getch();
											break;
										case 2:
											strcpy(publi,curs[ind].c_str());
											strcat(publi,"art.xlsx");
											open=fopen(publi,"a+");
											fclose(open);
											system(publi);
											getch();
											break;
										case 3:
											strcpy(publi,curs[ind].c_str());
											strcat(publi,"art.pptx");
											open=fopen(publi,"a+");
											fclose(open);
											system(publi);
											getch();
											break;
										case 4:
											strcpy(publi,curs[ind].c_str());
											cout<<"Primero escribir el . por favor\n";
											cout<<"Cual es la extencion del archivo (3 caracteres ) :";cin>>extt;
											strcat(publi,extt);
											open=fopen(publi,"a+");
											fclose(open);
											system(publi);
											getch();
											break;
										case 5:
											cass='n';
											getch();
											break;
										default:
											cout<<"la opcion que esribio no es correcta :(\n";
											getch();
											break;
									leer='s';
									}
									}while( cass == 's');
									break;
								case 4:
									p='n';
									opcio='s';
									break;
								default: 
									cout<<"la opcion que eligio no es correcta :(";
									getch();
									break;
							}
							}while(p=='s');
						}else{
							for(int rep=1;rep<=123;rep++){
								cout<<"¦ ° ERROR - ¦ \n";
								cout<<"º  BUG - 404  ¦\n";
								cout<<"  ð USUARIO DENEGADO ðN ûc ¦\n";
							}
						}
					}else{
						for(int rep=1;rep<=123;rep++){
						cout<<"¦ ° ERROR - ¦ \n";
						cout<<"º  BUG - 404  ¦\n";
						cout<<"  ð USUARIO DENEGADO ðN ûc ¦\n";
						}
					}if(opcio=='n'){
						
					cout<<" s : para volver a ingresar user y pass\n";
					cout<<" Cualquier letra : Salir\n";
					cout<<"\t\t\t Opcion : ";cin>>opcio;
					}
					}
					} while(opcio=='s');
					getch();
					break;
					
				case 12345:
            		cout<<"Mantenimiento de Programa\n";
            		cout<<"Introduzca Contraseña Maestra :";cin>>c_m;
            		if(c_m==c_c){
            			system("color 02");
            			while(num<200){
            				cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n";
            				num++;
						}
						num=0;
						system("cls");
						switch(fl){                      
							case 1 :                     
								system("color 0A");break;
							case 2 :                     
								system("color 0F");break;
							case 3 :                     
								system("color 10");break;
							case 4:                      
							 	system("color 28");break;
							case 5 :                     
								system("color 3F");break;
							case 6 :                     
								system("color 4E");break;
							case 7 :                     
								system("color 59");break; 	
							case 8:                      
								system("color 6F");break;
							case 9:                      
								system("color F4");break;
						}
						char re='s';
						while(re=='s'){ //poner un while pára ver este menu de nuevo
            			cout<<"\tBIENVENIDO AL SERVIDOR DE MANTENIMIENTO\n";
            			cout<<"1) Ver codigo para corregir errores u otro\n";
            			cout<<"2) Canbiar clave maestra\n";
            			cout<<"3) Salir del programa para actualizar\n";
            			cout<<"Eliga una opcion : ";cin>>o_m;
            			switch (o_m){
            				case 1:
            					//aca sepuede pedir otra contraseña por seguridad para abrir el avance.cppp
            					system("AVANCE.cpp");
            					cout<<"Cerrar la compilacion (s/n):";cin>>opci;
            					if(opci=='s'){
            						getch();
								}
								system("pause");
            					break;
            				case 2:
            					cout<<"Dijite la nueva clave : ";cin>>c_c;
            					break;
            				case 3:
            					exit(0);
            					break;
            				default:
            					cout<<"La opcion que escribio no es valida , vuelva a ingresar la opcion\n";
            					break;	
						}
						cout<<"desea volver a opciones de mantenimiento : ";cin>>re;
						system("cls");
						}
					}else{
						while(num<89){
							cout<<"ERROR DE SERVIDOR\n";
							cout<<"USO INDEVIDO DEL SISTEMA\n";
							cout<<"°°  OPCION  NO  VALIDA   °°\N";
							num++;
						}
						exit(1);
					}
            		break;
            	default:
            		cout<<"No es una opcion correcta la que eligio\n";
            		system("pause");
            		break;
			}		
		}while(ver=='s');
	enc = true ;	
	}////
	}
	lec.close(); 
	if(enc == false){ 
  	cout<<"Usuario no encontraso\nLo sentimos no se encontro el usuario :'(\nVolver a ingresar usuario y contraseña\nPor favor\n"; 
  	getch();
 	}	 
	system("pause");	
}

void cargar(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
	cout<<"\t\t    _                           _             \n"
		<<"\t\t   | |                         (_)            \n"
		<<"\t\t   | |     ___  __ _ _ __ _ __  _ _ __   __ _ \n"
		<<"\t\t   | |    / _ \\/ _` | '__| '_ \\| | '_ \\ / _` |\n"
		<<"\t\t   | |___|  __/ (_| | |  | | | | | | | | (_| |\n"
		<<"\t\t   |______\\___|\\__,_|_|  |_| |_|_|_| |_|\\__, |\n"
		<<"\t\t                                         __/ |\n"
		<<"\t\t                                        |___/ \n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);		
	cout<<"--------------------------------"    
		<<"\n---------------°°°°°°°°°°-------"    
		<<"\n--------------°°°°°°°°°°°°------"   
		<<"\n--------------°°--------°°------"    
		<<"\n--------------°°_________°------"    
		<<"\n--------------°°¯°°°-°°°¯°------"    
		<<"\n°-------------¯°--------°¯------"    
		<<"\n°°------------------¦-----------"    
		<<"\n-°--------------°|-----|°------ "    
		<<"\n°_------------°°°|-°°--|°°°     "    
		<<"\n-_|°°°°°°°°°°°°°|--°°--|°°°°° --"    
		<<"\n---|°°°°°°°°°°°°|--°°--|°°°°°°°° "    
		<<"\n-------------°°°|--°°-|°°°°--°°°"    
		<<"\n--------------°°|--°°-|°°°°--°°°"    
		<<"\n--------------°°|-----|°°°|°°°°° "    
		<<"\n--------------°|-----|°°°°|°°°¯  "    
		<<"\n----------------°°°°°°°°°°      "    
		<<"\n----------------°°°°°°°°°°      "    
		<<"\n-----------------°°°°°°°°       "    
		<<"\n------------------°°°°°°°°°°__  "    
		<<"\n--------------------°°°°°°°°°¯  "    
		<<"\n---------------------°°°°--°°°  "    
		<<"\n--------------------_°°°°_--°°  "    
		<<"\n--------------------°°°°°°---¯  "    
		<<"\n--------------------¯____¯      ";    
	int num;
	int milesima_de_segundo=120;
	for(num=0;num<=54;num++){
	gotoxy(56,20);cout<<"            ";
	gotoxy(56,21);cout<<" ,dP'       ";       
	gotoxy(56,22);cout<<"a8'         ";        
	gotoxy(56,23);cout<<"8b        ad";
	gotoxy(56,24);cout<<"'8a,     ,a";
	gotoxy(56,25);cout<<"  'Ybbd8''";
	gotoxy(56,27);cout<<"CARGANDO .         ";
	Sleep(milesima_de_segundo); 
	gotoxy(56,20);cout<<"           ";
	gotoxy(56,21);cout<<"        ba,";  
	gotoxy(56,22);cout<<"         '8a";  
	gotoxy(56,23);cout<<"b         ad";  
	gotoxy(56,24);cout<<"8a,      ,a";  
 	gotoxy(56,25);cout<<"  'Ybbd8''";
	gotoxy(56,27);cout<<"CARGANDO . .       ";   
	Sleep(milesima_de_segundo);
	gotoxy(56,20);cout<<"   ,abda,";     
	gotoxy(56,21);cout<<"        ba;"; 
	gotoxy(56,22);cout<<"         '8a";
	gotoxy(56,23);cout<<"          ad";
 	gotoxy(56,24);cout<<"         ,a"; 
    gotoxy(56,25);cout<<"    .ad8''";
    gotoxy(56,27);cout<<"CARGANDO . . .     ";    
	Sleep(milesima_de_segundo); 
	gotoxy(56,20);cout<<"   ,abb' ";
	gotoxy(56,21);cout<<" ,dP'       ";       
	gotoxy(56,22);cout<<"a8'         ";        
	gotoxy(56,23);cout<<"8b          ";
	gotoxy(56,24);cout<<"'8a,       ";
	gotoxy(56,25);cout<<"  'Yb.     ";
	gotoxy(56,27);cout<<"CARGANDO . . . .    ";    
    Sleep(milesima_de_segundo);
	}
	system("cls");
	cout<<"\n\n\n\n\n";
	cout<<"\n----------------------°°°°°°°°°°°                        "
		<<"\n--------------------°°           °°                     "
		<<"\n------°°°°°------°°                °°                   "
		<<"\n-----°     °----°°     °°    °°      °°                 "
		<<"\n-----°     °---°°      °°    °°       °°                "
		<<"\n-----°    °--°°        °°    °°        °°               "
		<<"\n-----°   °---°                          °°              "
		<<"\n----°°°°°°°°°°°°                         °°             "
		<<"\n---°            ° °°              °°     °°             "
		<<"\n--°°            °  °°            °°      °°             "
		<<"\n-°°   °°°°°°°°°°°    °°        °°       °°             "
		<<"\n-°               °     °°°°°°°°        °°              "
		<<"\n-°°              °                    °°               "
		<<"\n--°    °°°°°°°°°°°                   °°                "
		<<"\n--°°           °--°°                °°                 "
		<<"\n---°°°°°°°°°°°°-----°°            °°                   "
		<<"\n----------------------°°°°°°°°°°°°                     \n";
	
	cout<<" ____  _____    ____    _    ____   ____  ___     ____ ___  _   _    \n";
	cout<<"/ ___|| ____|  / ___|  / \\  |  _ \\ / ___|/ _ \\   / ___/ _ \\| \\ | |   \n";
	cout<<"\\___ \\|  _|   | |     / _ \\ | |_) | |  _| | | | | |  | | | |  \\| |   \n";
	cout<<" ___) | |___  | |___ / ___ \\|  _ <| |_| | |_| | | |__| |_| | |\\  |   \n"; 
	cout<<"|____/|_____|  \\____/_/   \\_\\_| \\_\\\\____|\\___/   \\____\\___/|_| \_|   \n";  
	cout<<" _______  _____ _____ ___    ____  ____  _____ ____  ___ ___  _   _ _____   _   _ _   _    _     \n";   
	cout<<"| ____\\ \\/ /_ _|_   _/ _ \\  |  _ \\|  _ \\| ____/ ___||_ _/ _ \\| \\ | | ____| | | | | \\ | |  / \\    \n";   
	cout<<"|  _|  \\  / | |  | || | | | | |_) | |_) |  _| \\___ \\ | | | | |  \\| |  _|   | | | |  \\| | / _ \\   \n";  
	cout<<"| |___ /  \\ | |  | || |_| | |  __/|  _ <| |___ ___)  | | |_| | |\\  | |___  | |_| | |\\  |/ ___ \\  \n";  
	cout<<"|_____/_/\\_\\___| |_| \\___/  |_|   |_| \\_\\_____|____/|___\\___/|_| \\_|_____|  \\___/|_| \\_/_/   \\_\\ \n";  
	                                                                                                                                                                        
	cout<<" _____ _____ ____ _        _      ____   _    ____      _         ____ ___  _   _ _____ ___ _   _ _   _   _    ____           \n";
	cout<<"|_   _| ____/ ___| |      / \\    |  _ \\ / \\  |  _ \\    / \\       / ___/ _ \\| \\ | |_   _|_ _| \\ | | | | | / \\  |  _ \\                           \n";
	cout<<"  | | |  _|| |   | |     / _ \\   | |_) / _ \\ | |_) |  / _ \\     | |  | | | |  \\| | | |  | ||  \\| | | | |/ _ \\ | |_) |                       \n";
	cout<<"  | | | |__| |___| |___ / ___ \\  |  __/ ___ \\|  _ <  / ___ \\    | |__| |_| | |\\  | | |  | || |\\  | |_| / ___ \\|  _ <                      \n";
	cout<<"  |_| |_____\\____|_____/_/   \\_\\ |_| /_/   \\_\\_| \\_\\/_/   \\_\\    \\____\\___/|_| \\_| |_| |___|_| \\_|\\___/_/   \\_\\_| \\_\\                    \n";                                                                                                                                                                                                                  
	
	getch();
	system("cls");
}

void celebracion(){
	int milesima_de_segundo=100;	
    for(int bucl=0;bucl<=8;bucl=bucl+2){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	gotoxy(56,23);cout<<"======================================\n";
    gotoxy(56,24);cout<<"|        BIENVENIDO A LEARNING       |\n";
    gotoxy(56,25);cout<<"======================================\n";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    gotoxy(bucl,0);
    for(int num=0;num<=14;num++){
    if (num==7){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"*;   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
	cout<<";       ,";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	cout<<"     ,   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cout<<" .        ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	cout<<"  ;  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	cout<<"     .   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"  ;      ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"    ,   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<" ;       ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"  .      ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	cout<<"  .   , ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	cout<<" .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"    .    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"  ;    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<" ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"    .     ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<" ;      ,";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cout<<" . ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"      .     ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<" ;     ,";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cout<<"    .    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<" ;      ,";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cout<<"    .   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"  ;      ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<" ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<" .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"    .    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"  ;    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<" ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"    .     ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"     .   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"  ;      ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"    ,   *";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	gotoxy(38+56,23);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	gotoxy(56,23);cout<<"======================================";
    gotoxy(56,24);cout<<"|        BIENVENIDO A LEARNING       |";
    gotoxy(56,25);cout<<"======================================";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	cout<<"      .     ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<" ;     ,";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cout<<"  ;      ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"    ,   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<" .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"    .    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"    ,   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<" ;       ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"  .      ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	cout<<"  ;    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<" ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"    .";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	gotoxy(38+56,24);
	cout<<".  '    *   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"    ;  *";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cout<<"  ;      ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"   ' '   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<" .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"    .    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"    ,   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);//
	cout<<" ;       ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"  .      ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	cout<<"  ;    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<" ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"    .";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	gotoxy(38+56+bucl,25);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);//
	cout<<" ;       ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"  .      ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	cout<<"  ;    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<" ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"    .";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<".  '    *   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"    ;  *";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cout<<"  ;      ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"   ' '   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<" .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"    .    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"    ,   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	}
	else{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<";    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
	cout<<";       ,";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
	cout<<"     ,   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cout<<" .        ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	cout<<"  ;  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	cout<<" ;       ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
	cout<<"  .      ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	cout<<"  .   , ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	cout<<" .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"    .    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<" ;      ,";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cout<<"    .   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"  ;      ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<" ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<" .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"    .    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"  ;    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<" ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"    .     ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<" ;      ,";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cout<<" . ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"      .     ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<" ;     ,";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cout<<" . ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	cout<<"     .   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"  ;      ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"    ,   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<" .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"    .    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<" ;     ,";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cout<<"     .   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"  ;    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<" ;     ,";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cout<<"     .   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"  ;    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<" ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"    .     ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<" ;      ,";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cout<<" .  " ;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	cout<<"   .   ;";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	cout<<"    .     ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<" ;     ,";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cout<<" . ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	cout<<"     .   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"  ;        ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<"    ,   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	cout<<".  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<" ;      ,";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cout<<"      .   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"  ;    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),13);
	cout<<" . ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	cout<<"    .     ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
	cout<<"  ;      ,";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	cout<<" . ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
	cout<<"     .   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	cout<<"   .    ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	}
	Sleep(milesima_de_segundo);
	}
	}
	cout<<"\n\n\t\tFelicitaciones usted se a registrdo con exito :') \n";
}

int main(){ // INICIO DE SECION :)
	cout<<"\n\n\tANTES DE CONTINUAR POR FAVOR AGRANDAR POR COMPLETO LA VENTA DE COMPILACION  \n";
	getch();
	system("cls");
	cargar();
	char user1[15],con1[15],op;
	char user[15],cont[15],cus[15],cco[15],io,pu='s';
	bool com1,com2;
	int opc,iden,n=1,m=2,in=1,fl=2,rt;
	char coment[100];
	iden=1;
	switch(fl){                      
		case 1 :                     
			system("color 0A");break;
		case 2 :                     
			system("color 0F");break;
		case 3 :                     
			system("color 10");break;
		case 4:                      
		 	system("color 28");break;
		case 5 :                     
			system("color 3F");break;
		case 6 :                     
			system("color 4E");break;
		case 7 :                     
			system("color 59");break;
		case 8:                      
			system("color 6F");break;
		case 9:                      
			system("color F4");break;
	}
	do{
		system("cls");
		system("color 0F");
		int milesima_de_segundo=35,s=1;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
		cout<<"\tBienbenido a\n";
		cout<<"\t ==     =====    ==    ====    ==\   ==  ==  ==\   ==   ======\n"
            <<"\t ||     ||  |   |  |   ||  |   ||\\  ||  ||  ||\\  ||  //      \n"
            <<"\t ||     ||-    ||==||  ||==    || \\ ||  ||  || \\ ||  ||   ===\n"
            <<"\t ||  |  ||  |  |    |  || \\    ||  \\||  ||  ||  \\||  \\      |\n"
            <<"\t =====  =====  =    =  ==  ==  ==   \==  ==  ==   \==   ======\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
		cout<<"\nRECOMENDACION :\n";
		cout<<"Si no tiene cuenta se le recomineda crearse\n";
		cout<<"uno porque sino no va a poder ingresar\n";
		cout<<"\n1) Iniciar Secion\n";
		cout<<"2) Ingresar como invitado\n";
		cout<<"3) Crear cuanta\n";
		cout<<"4) Salir\n";
		cout<<"Eliga una opcion :";
		ifstream lec;
		cin>>opc;
		switch (opc){
			case 1:
				system("cls");
				entrada_de_usuario(lec);
				system("cls");
				break;
			case 2:
				cout<<"Importante :\n";
				cout<<"Cunado usted ingresa como invitado ,tiene acceso limitado\n";
				cout<<"desea continuar (s/n) : ";cin>>io;
				if(io=='s'){
					system("cls");
					op='s';
					while(op=='s'){
					cout<<"\tBIENVENIDO A LEARNIG\n";
					cout<<"1) Ver publicaciones\n";
					cout<<"2) Escribir un publicacion (ANONIMA**) \n";
					cout<<"3) Volver a inicio\n";
					cout<<"4) Salir del programa por completo\n";
					cout<<"Eliga una opcion : ";cin>>rt;
					switch(rt){
						case 1:
							cout<<"Usted va ingresar a publiciones\n";
							cout<<"Cerrar el archivo para continuar\n";
            				system("pause");
    						if(pu=='s'){
    							system("public.txt");
							}else{
								cout<<"Lo sentimos no hay publicaciones por ver \n";
							}
							break;
						case 2:
							FILE*docu;
							docu = fopen("public.txt","a+");
							fprintf(docu,"Anonimo : \n");		
							cout<<"Ingrese lo que va a publicar : \n";
							scanf("%s",coment);
							fprintf(docu,"- %s \n",coment);
							fclose (docu);
							cout<<"\n-----------------------------------------------";
							cout<<"\n\nLa publicaion se guardo como un usuario anonimo\n";
							cout<<"Su publicacion se guardo con exito :)\n";
							break;
						case 3:        
							op='n';
							break;
						case 4:
							cout<<"Usted esta saliendo de Learnig\n";
							system("pause");
							system("cls");
							return 0;
							break;
						default:
							cout<"La opcion que ha elegido no es correcta\n";
					}
					if(op=='s'){
						cout<<"desea volver a inicio de usuario de visita(s/n) ";cin>>op;
					}system("cls");
					}
					system("cls");
				}
				break;
			case 3:
				system("cls");
				FILE*docu;
				printf("\tUsted esta creando una cuenta en Learnig\n\n");
				cout<<"Gracias por elegirnos\n";
				docu = fopen("regis_dt.txt","a+");	
				printf("Ingrese usuario y contraseña : \n");
				printf("\n - Ingrese Usuario : ");
				scanf("%s",user1);	
				fprintf(docu,"%s \n",user1);
				printf("\n - Ingrese Contraseña :");
				scanf("%s",con1);
				fprintf(docu,"%s \n",con1);	
				fclose (docu);
				cout<<"-------------------------------\n";
				cout<<"\nUsted se a registrado son exito\nMuchas gracias por confiar en nosotros\n";
				system("pause");
				system("cls");
				celebracion();
                cout<<"\t\tEl siguiente paso es volver a menu de incio e ingresar los datos y listo :)\n\n";
				getch();
				break;				
			case 4:
				iden=0;
				cout<<"\n::::::::Usted esta saliendo de Learnig::::::::\n";
				cout<<"______________________________________________\n";
				return 0;
				break;
			default:
				cout<<"\nLa opcion que selecciono es incorrecta :'( \nEl programa se reiniciara\n";
				iden=1;
				getch();
		}
		if(iden==0){
			cout<<"\nDesea volver a iniciar el programa? ( 1 si/ 0 no ) : ";
			cin>>iden;
			system("cls");
		}
	}while(iden == 1);
	return 0;
}
