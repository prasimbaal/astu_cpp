
//GRAPHIC CALCULATOR

#include<fstream.h>         //INCLUDES <iostream>
#include<conio.h>
#include<iomanip.h>


	void load()
	{
		clrscr() ;
		int i, o ;

		gotoxy(33,9) ; cout << "_________________" ;    //	TO
		gotoxy(32,10) ; cout << "/" ;                   //   PRINT
		gotoxy(49,10) ; cout << "/" ;                   //        BOX
		gotoxy(35,8) ;cout << "LOADING..." ;

		for(o=0; o<3; o++)       // LOOP TO ANIMATE LOADING
		{

			for(i=0; i<800; i++){ gotoxy(33,10) ; cout << "\f" ; }
			for(i=0; i<800; i++){ gotoxy(34,10) ; cout << "\f" ; }
			for(i=0; i<800; i++){ gotoxy(35,10) ; cout << "\f" ; }
			for(i=0; i<800; i++){ gotoxy(36,10) ; cout << "\f" ; }
			for(i=0; i<800; i++){ gotoxy(37,10) ; cout << "\f" ; }
			for(i=0; i<800; i++){ gotoxy(38,10) ; cout << "\f" ; }
			for(i=0; i<800; i++){ gotoxy(39,10) ; cout << "\f" ; }
			for(i=0; i<800; i++){ gotoxy(40,10) ; cout << "\f" ; }
			for(i=0; i<800; i++){ gotoxy(41,10) ; cout << "\f" ; }
			for(i=0; i<800; i++){ gotoxy(42,10) ; cout << "\f" ; }
			for(i=0; i<800; i++){ gotoxy(43,10) ; cout << "\f" ; }
			for(i=0; i<800; i++){ gotoxy(44,10) ; cout << "\f" ; }
			for(i=0; i<800; i++){ gotoxy(45,10) ; cout << "\f" ; }
			for(i=0; i<800; i++){ gotoxy(46,10) ; cout << "\f" ; }
			for(i=0; i<800; i++){ gotoxy(47,10) ; cout << "\f" ; }
			for(i=0; i<800; i++){ gotoxy(48,10) ; cout << "\f" ; }

			for(i=0; i<800; i++){ gotoxy(34,10) ; cout << "\b_" ; }
			for(i=0; i<800; i++){ gotoxy(35,10) ; cout << "\b_" ; }
			for(i=0; i<800; i++){ gotoxy(36,10) ; cout << "\b_" ; }
			for(i=0; i<800; i++){ gotoxy(37,10) ; cout << "\b_" ; }
			for(i=0; i<800; i++){ gotoxy(38,10) ; cout << "\b_" ; }
			for(i=0; i<800; i++){ gotoxy(39,10) ; cout << "\b_" ; }
			for(i=0; i<800; i++){ gotoxy(40,10) ; cout << "\b_" ; }
			for(i=0; i<800; i++){ gotoxy(41,10) ; cout << "\b_" ; }
			for(i=0; i<800; i++){ gotoxy(42,10) ; cout << "\b_" ; }
			for(i=0; i<800; i++){ gotoxy(43,10) ; cout << "\b_" ; }
			for(i=0; i<800; i++){ gotoxy(44,10) ; cout << "\b_" ; }
			for(i=0; i<800; i++){ gotoxy(45,10) ; cout << "\b_" ; }
			for(i=0; i<800; i++){ gotoxy(46,10) ; cout << "\b_" ; }
			for(i=0; i<800; i++){ gotoxy(47,10) ; cout << "\b_" ; }
			for(i=0; i<800; i++){ gotoxy(48,10) ; cout << "\b_" ; }
			for(i=0; i<800; i++){ gotoxy(49,10) ; cout << "\b_" ; }
		}

		clrscr();

	}

	void main()
	{


		char dummychar ; int o ;
		cout << "\n\n\t\t\t\tBYPASS CODE : " ;   // BYPASS FOR LOADING
		dummychar  = getch() ;
		  if(dummychar == '+')
			goto main ;
		  else
			goto loading ;

		loading:
		for( o=0; o<1; o++)	load() ;

		cout << "\n\n\n\n\n\n\n\n\t\t\t\t  BYPASS CODE IS +" ;
		cout << "\n\n\t\t\t    PRESS ENTER TO CONTINUE..." ;
		getch() ;
		clrscr() ;

		main:

		ofstream output ;
		output.open("graph.xlsx" , ios::app ) ;

		int loop ; const float size = 10 ; char ch ;

		clrscr() ;
		cout << "\n" ; for( loop=0; loop<80; loop++)	cout <<"\f" ;
		cout << "\n    ______________________________________________________________________\n" ;
		cout << "    | 								         |\n" ;
		cout << "    | «««««««««««««««««««««   GRAPHIC CALCULATOR   »»»»»»»»»»»»»»»»»»»»» |\n" ;
		cout << "    | 								         |\n" ;
		cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
		cout << "\n" ; for( loop=0; loop<80; loop++)	cout <<"\f" ;
		cout << "\n\n" ;
		cout << " \n\n\t A--> LINEAR EQUATION \t\t D--> DELETE EXISTING DATA" ;
		cout << " \n\n\t B--> QUADRATIC EQUATION \t R--> READ-ME" ;
		cout << " \n\n\t C--> CUBIC EQUATION \t\t X--> Exit" ;

		ch = getch() ;

		if((ch=='a')||(ch=='A'))

		{
			linear :
			clrscr() ; 																						// REFRESHING PAGE
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
			cout << "    ______________________________________________________________________\n" ;
			cout << "    | 								         |\n" ;
			cout << "    | :::::::::::::::::::::    LINEAR  EQUATION    ::::::::::::::::::::: |\n" ;
			cout << "    | 								         |\n" ;
			cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n" ;
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤\n" ;

				float x, y, a, b ;

			cout <<	"\n Enter coefficient of 'x'\t: " ;
				cin >> a ;
			cout << "\n Enter Constant ('0' if None)\t: " ;
				cin >> b ;

			cout << "\n Your Equation : y = " << a << "(x^1) + " << b << " \n\n\n"  ;

			if(a==0)       			   // LINEAR EQUATION VERIFICATION
			{
				cout << "\n\n  ::::::::::::::ERROR: Co-efficient Of 'x^1' Cannot Be Zero::::::::::::::	\n\n" ;
				cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;

			}
			output << "\n\n\n				Your Equation\t: y = " << a << "(x^1) + " << b << "\n\tZOOM-OUT FOR BETTER VIEW OF CURVE \n\n\n" ;
			float nsize = (-1*size) ;
			for(x=nsize; x<size ; x++) // LOOP TO PRINT * AT CO-ORDINATES
			{
				y = (x*a) + b ;
				output << "	|" <<setfill('-') <<  setw(y+200) << "¤                                    " << "( " << x << " , " << y << " ) \n" ;
			}

			cout << "\n		Please Check For The Output File In (.xls) Format \n\n" ;			cout << "\n\tPress Any Key To Go To Main Menu "  ;			getch() ;
			goto main ;
		}

		else if((ch=='b')||(ch=='B'))

		{
			quadratic :
			clrscr() ;
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
			cout << "    ______________________________________________________________________\n" ;
			cout << "    | 								         |\n" ;
			cout << "    | :::::::::::::::::::::   QUADRATIC EQUATION   ::::::::::::::::::::: |\n" ;
			cout << "    | 								         |\n" ;
			cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤\n" ;

				float a ,b, c, x ,y ;

			cout <<	"\n\tEnter coefficient of 'x^2'\t: " ;
				cin >> a ;
			cout <<	"\n\tEnter coefficient of 'x'\t: " ;
				cin >> b ;
			cout << "\n\tEnter Constant ('0' If None)\t: " ;
				cin >> c ;
			cout << "\n\tYour Equation\t: y = " << a << "(x^2) + " << b << "(x^1) + " << c <<" \n\n\n";

			if(a==0) 					   // QUADRATIC EQUATION VERIFICATION
			{
				cout << "\n\n  ::::::::::::::ERROR: Co-efficient Of 'x^2' Cannot Be Zero::::::::::::::	\n\n" ;
				cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;
			}

			output << "\n\n\n				Your Equation : y = " << a << "(x^2) + " << b << "(x^1) + " << c <<"\n\tZOOM-OUT FOR BETTER VIEW OF CURVE \n\n\n" ;
			float nsize = (-1*size) ;
			for(x=nsize; x<=size; x+=0.5)
			{
				y = (a*x*x) + (b*x) + c ;
				output << "	|"<<setfill('-') <<  setw(y+100) << "¤                                    ( " << x << " , " << y << " ) \n" ;
			}

			cout << "\t    Please Check For The Output File In (.xls) Format \n\n" ;			cout << "\n\tPress Any Key To Go To Main Menu "  ;			getch() ;
			goto main ;
		}

		else if((ch=='c')||(ch=='C'))

		{
			cubic :
			clrscr() ;
			cout << "\n¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
			cout << "    ______________________________________________________________________\n" ;
			cout << "    | 								         |\n" ;
			cout << "    | :::::::::::::::::::::     CUBIC EQUATION     ::::::::::::::::::::: |\n" ;
			cout << "    | 								         |\n" ;
			cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" ;
			cout << "¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
				float a, b, c, d , x, y ;

			cout <<  "\n\tEnter coefficient of 'x^3'\t: " ;
				cin >> a ;
			cout <<  "\n\tEnter coefficient of 'x^2'\t: " ;
				cin >> b ;
			cout <<	"\n\tEnter coefficient of 'x'\t: " ;
				cin >> c ;
			cout << "\n\tEnter Constant ('0' If None)\t: " ;
				cin >> d ;
			cout << "\n\tYour Equation\t: y = " << a << "(x^3) + " << b << "(x^2) + " << c << "(x^1) + " << d << "\n\n\n" ;

			if(a==0)							// CUBIC EQUATION VERIFICATION
			{
				cout << "\n\n\t\tERROR: Co-efficient Of 'x^3' Cannot Be Zero\n\n" ;
				cout << "\n\tPress Any Key To Go To Main Menu "  ;
			getch() ;
			goto main ;
			}

			output << "\n\n\n Your Equation : y = " << a << "(x^3) + " << b << "(x^2) + " << c << "(x^1) + " << d << "\n\tZOOM-OUT FOR BETTER VIEW OF CURVE \n\n\n" ;
			float nsize = (-1*size) ;
			for(x=nsize; x<=size; x+=0.5)
			{
				y = (a*x*x*x) + (b*x*x) + (c*x) + d ;
				output << "\t|" <<setfill('-')<< setw(y+500) << "¤                                    " << "( " << x << " , " << y << " ) \n" ;
			}

			cout << "		Please Check For The Output File In (.xls) Format \n\n" ;			cout << "\n\tPress Any Key To Go To Main Menu "  ;			getch() ;
			goto main ;

		}

		else if(ch=='d'||ch=='D')
		{
			output.close() ;           // CLOSES EXISTING FILE
			clrscr() ;
			cout << "\n\n\n\n\n\n\n\n\n\t\t\t\tDATA CLEARED" ;
			ofstream output ;	output.open("graph.xlsx" , ios::trunc) ;output.close() ;
			clrscr() ;                  //NEW FILE CREATED TO REPLACE OLD
			cout << "\n\n\n\n\n\n\n\n\t\t\t\tDATA CLEARED" ;
			getch() ; goto main ;       // GETS USER INPUT AND PROCEEDS
		}

		else if(ch=='r'||ch=='R')
		{
			clrscr() ;
			cout << "\n\n\n\n\t\t\tREAD-ME FILE HAS ALREADY BEEN CREATED" ;
			ofstream read_me ;
			read_me.open("Read-Me.html" , ios::out) ;
			read_me << "<html>\n " ;
			read_me << "<body style=\"background-color:White;\">\n " ;
			read_me << "<h2 style=\"background-color:skyblue;\" align =\"center\">GRAPHIC CALCULATOR</h2>\n " ;
			read_me << "<h3 style=\"background-color:lightgreen;\"  align =\"center\">READ-ME</h3>\n " ;
			read_me << "\n                                                                         " ;
			read_me << "<p>*   The Bypass Code allows the user to skip the loading animation.</p>\n " ;
			read_me << "<p>*   If You Do Not know the Bypass Code, just press Enter. </p>\n   " ;
			read_me << "<p>*   All Graphs Are Plotted in Spreadsheet Format Only</p>\n   " ;
			read_me << "\n                                                            " ;
			read_me << "<p align =\"center\"> SYSTEM REQUIREMENTS</p>	\n       " ;
			read_me << "\n                                                      " ;
			read_me << "<p>Operating System(s): 	\n                            " ;
			read_me << "<p>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspWindows 98 (DOS)\n " ;
			read_me << "<p>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspWindows xp\n    " ;
			read_me << "<p>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspWindows Vista (or higher versions) 32-bit</p>\n " ;
			read_me << "<p>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspLINUX (any version)\n " ;
			read_me << "<p>Processor(s):\n                                                        " ;
			read_me << "<p>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspPentium 166 (or higher)\n  " ;
			read_me << "<p>RAM:\n                                                            " ;
			read_me << "<p>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp2GB\n            " ;
			read_me << "<p>Disk Space:\n                                                      " ;
			read_me << "<p>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp1MB\n            " ;
			read_me << "<p>Utility Application(s):\n                                           " ;
			read_me << "<p>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspMicrosoft Excel\n  " ;
			read_me << "<P>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspOpen Office Calculator\n " ;
			read_me << "<p>Compiler (programmers):\n                                           " ;
			read_me << "<P>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspDOSBox\n         " ;
			read_me << "<P>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspTurbo C++\n       " ;
			read_me << "<P>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspGNU GCC\n         " ;
			read_me << "<P>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspBORLAND C++\n     " ;
			read_me << "<h3 style=\"background-color:skyblue;\"  align =\"center\"> A Program By W.I.N.G.M.A.N</h3>\n  " ;
			read_me << "<h3 style=\"background-color:lightgreen;\"  align =\"center\">CREDITS</h3>\n   " ;
			read_me << "<P>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp*&nbsp&nbsp&nbsp&nbsp&nbspMICROSOFT WINDOWS\n " ;
			read_me << "<P>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp*&nbsp&nbsp&nbsp&nbsp&nbspBORLAND C++\n " ;
			read_me << "<P>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp*&nbsp&nbsp&nbsp&nbsp&nbspDOSBox\n   " ;
			read_me << "</body>\n  " ;
			read_me << "</html>\n " ;

			getch() ; read_me.close() ; goto main ;
		}

		else if(ch=='x'||ch=='X')     // CREDITS
		{
      	clrscr() ;
			cout << "\n\n\n\n\n\n\n" ;
			cout << "\t\t\t\f\f\f\f\f\f	\f\f\f       \f\f\f	\f\f\f\f\f\f  \f\f\f\f\f\f  \n" ;
			cout << "\t\t\t\f\f\f\f\f\f	 \f\f\f     \f\f\f    \f\f\f\f\f\f  \f\f\f\f\f\f \n" ;
			cout << "\t\t\t\f\f        \f\f\f   \f\f\f       \f\f      \f\f   \n" ;
			cout << "\t\t\t\f\f         \f\f\f \f\f\f        \f\f      \f\f   \n" ;
			cout << "\t\t\t\f\f\f\f\f\f      \f\f\f\f\f         \f\f      \f\f   \n" ;
			cout << "\t\t\t\f\f         \f\f\f \f\f\f        \f\f      \f\f   \n" ;
			cout << "\t\t\t\f\f        \f\f\f   \f\f\f       \f\f      \f\f   \n" ;
			cout << "\t\t\t\f\f\f\f\f\f   \f\f\f     \f\f\f    \f\f\f\f\f\f    \f\f   \n" ;
			cout << "\t\t\t\f\f\f\f\f\f  \f\f\f       \f\f\f   \f\f\f\f\f\f    \f\f   \n" ;
			getch() ;
			clrscr() ;
			cout << "\n¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
			cout << "\n" ; for( loop=0; loop<80; loop++)	cout <<"\f" ;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n" ;
			cout << "\n\t\tPARTNERS\tBORLAND® C++\tMICROSOFT©" ;
			cout << "\n" ; for( loop=0; loop<80; loop++)	cout <<"\f" ;
			cout << "\n¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤¸¸.¤°¨°¤" ;
			getch() ;
			clrscr() ;
		}

		else    	  						  	// ROBUSTNESS
			{
				cout 	<< "\a\n\n :::::::::::::::::::::::  ERROR:  Invalid Choice  :::::::::::::::::::::::\n\n";

				goto main ;
			}

			output.close() ;
	}
