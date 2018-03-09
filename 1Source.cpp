#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <io.h>
#include<ctime>
#include<iomanip>
#include "ConsoleLib.h"
#include <conio.h>
using namespace std;

const int sizeRow = 10, sizeCol = 10;

struct
{
	int *strPalubKorabl;//адрес первой палубы
	int pologKorabliy;//положение кораб.
	int palubu;//количество палуб
}Chet, Try1, Try2, Dwa1, Dwa2, Dwa3, ChetP, Try1P, Try2P, Dwa1P, Dwa2P, Dwa3P;

int *adresaKorabl[sizeRow*sizeCol];//адреса кораблей пользователя
int *adresaKorablPC[sizeRow*sizeCol];
int *adresaHodovPC[sizeRow*sizeCol];
int index = 0;//идекс дла адресов пользователя
int indexPC = 0, indexHodPC = 0;//индекс адресов кораб.РС    -----   индекс адресов ходов РС

// стрельба по 1 ручная

//void Mouse(int Pole[][10])
//{
//	HANDLE hStdin, h;
//	DWORD cNumRead, fdwMode, fdwSaveOldMode, i;
//	INPUT_RECORD irInBuf[128];
//
//	// Получим стандартный дескриптор ввода.
//
//	hStdin = GetStdHandle(STD_INPUT_HANDLE);
//	h = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	// Сохраним текущий режим ввода для будущего восстановления при
//	// выходе из программы.
//
//	GetConsoleMode(hStdin, &fdwSaveOldMode);
//
//	// Включим события ввода от мыши и окна.
//
//	fdwMode = ENABLE_MOUSE_INPUT;
//
//	SetConsoleMode(hStdin, fdwMode);
//	bool check;
//	int x, y;
//	// Цикл чтения и обработки событий ввода.
//	check = 0;
//
//	// Ожидание событий.
//
//	ReadConsoleInput(
//		hStdin,      // дескриптор буфера ввода
//		irInBuf,     // буфер, в котором читаем
//		128,         // размер буфера чтения
//		&cNumRead)  // число прочитанных записей
//		;
//
//	// Направляем события соответствующим обработчикам.
//
//	for (i = 0; i < cNumRead; i++)
//	{
//		if (irInBuf[i].Event.MouseEvent.dwEventFlags == DOUBLE_CLICK)
//		{
//			x = irInBuf[i].Event.MouseEvent.dwMousePosition.X;
//			y = irInBuf[i].Event.MouseEvent.dwMousePosition.Y;
//			cout << x << "     " << y << endl;
//			if (x >= 3 && x <= 43 && y >= 3 && y <= 23)
//			{
//				int tempx, tempy;
//				if (y == 4)
//					tempy = 0;
//				else
//					tempy = (y - 4) / 2;
//				if (x == 5)
//					tempx = 0;
//				else
//					tempx = (x - 4) / 4;
//
//				if (Pole[tempy][tempx] == 0)
//				{
//					Pole[tempy][tempx] = 2;
//					system("cls");
//					PaintPole1(Pole);
//					break;
//				}
//				else if (Pole[tempy][tempx] == 1)
//				{
//					Pole[tempy][tempx] = 3;
//					system("cls");
//					PaintPole1(Pole);
//					break;
//				}
//				else
//					continue;
//			}
//		}
//		break;
//	}
//	for (int k = 0; i < sizeRow; k++)
//	{
//		for (int j = 0; j < sizeCol; j++)
//		{
//			if (Pole[k][j] == 1)
//			{
//				check = 1;
//				return;
//			}
//		}
//	}
//} // стрельба по 1

//стрельба по 2 ручная

//void Mouse(int Pole[][10])
//{
//	HANDLE hStdin, h;
//	DWORD cNumRead, fdwMode, fdwSaveOldMode, i;
//	INPUT_RECORD irInBuf[128];
//
//	// Получим стандартный дескриптор ввода.
//
//	hStdin = GetStdHandle(STD_INPUT_HANDLE);
//	h = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	// Сохраним текущий режим ввода для будущего восстановления при
//	// выходе из программы.
//
//	GetConsoleMode(hStdin, &fdwSaveOldMode);
//
//	// Включим события ввода от мыши и окна.
//
//	fdwMode = ENABLE_MOUSE_INPUT;
//
//	SetConsoleMode(hStdin, fdwMode);
//	bool check;
//	int x, y;
//	// Цикл чтения и обработки событий ввода.
//	check = 0;
//
//	// Ожидание событий.
//
//	ReadConsoleInput(
//		hStdin,      // дескриптор буфера ввода
//		irInBuf,     // буфер, в котором читаем
//		128,         // размер буфера чтения
//		&cNumRead)  // число прочитанных записей
//		;
//
//	// Направляем события соответствующим обработчикам.
//
//	for (i = 0; i < cNumRead; i++)
//	{
//		if (irInBuf[i].Event.MouseEvent.dwEventFlags == DOUBLE_CLICK)
//		{
//			x = irInBuf[i].Event.MouseEvent.dwMousePosition.X;
//			y = irInBuf[i].Event.MouseEvent.dwMousePosition.Y;
//			cout << x << "     " << y << endl;
//			if (x >= 77 && x <= 117 && y >= 3 && y <= 23)
//			{
//				int tempx, tempy;
//				if (y == 4)
//					tempy = 0;
//				else
//					tempy = (y - 4) / 2;
//				if (x == 79)
//					tempx = 0;
//				else
//					tempx = (x - 78) / 4;
//
//				if (Pole[tempy][tempx] == 0)
//				{
//					Pole[tempy][tempx] = 2;
//					system("cls");
//					PaintPolePC(Pole);
//					break;
//				}
//				else if (Pole[tempy][tempx] == 1)
//				{
//					Pole[tempy][tempx] = 3;
//					system("cls");
//					PaintPolePC(Pole);
//					break;
//				}
//				else
//					continue;
//			}
//		}
//		break;
//	}
//	for (int k = 0; i < sizeRow; k++)
//	{
//		for (int j = 0; j < sizeCol; j++)
//		{
//			if (Pole[k][j] == 1)
//			{
//				check = 1;
//				Mouse(Pole);
//				return;
//			}
//		}
//	}
//}

//рисовка конечная

void PaintPolePC(int PolePC[][10])
{
	SetColor(LightGreen, Black);
	WriteStr(95, 0, "Поле ПК");
	SetColor(White, Black);
	WriteStr(74, 2, "     a   b   c   d   e   f   g   h   i   j\n");
	WriteStr(74, 3, "   + - + - + - + - + - + - + - + - + - + - +\n");
	int k = 4, h = 2, w = 5, y = 4;
	for (int i = 0; i < sizeRow; i++)
	{
		GotoXY(74, k);
		cout << i + 1;
		for (int j = 0; j < sizeCol; j++)
		{
			if (!(PolePC[i][j]) || PolePC[i][j] == 1)
			{
				GotoXY(h + 75, y);
				cout << "| ";
				SetColor(White, Black);
			}
			else if (PolePC[i][j] == 3)
			{
				WriteStr(h + 75, y, "| ");
				SetColor(Red, Black);
				GotoXY(h + 77, y);
				cout << 'x';
				SetColor(White, Black);
			}
			else if (PolePC[i][j] == 2)
			{
				WriteStr(h + 75, y, "| ");
				SetColor(Yellow, Black);
				GotoXY(h + 77, y);
				cout << 'x';
				SetColor(White, Black);
			}
			if (j == 9)
			{
				GotoXY(117, k);
				cout << "|";
			}
			h += 4;
		}
		GotoXY(74, w);
		cout << "   + - + - + - + - + - + - + - + - + - + - +\n";
		y += 2;
		k += 2;
		w += 2;
		h = 2;
	}
}

void PaintPole1(int PoleIgroka[][10])
{
	SetColor(LightGreen, Black);
	cout << "\t\t Поле Игрока";
	cout << endl << endl;
	SetColor(White, Black);
	cout << "     a   b   c   d   e   f   g   h   i   j\n";
	cout << "   + - + - + - + - + - + - + - + - + - + - +\n";
	for (int i = 0; i < sizeRow; i++)
	{
		cout << setw(2) << i + 1 << " ";
		for (int j = 0; j < sizeCol; j++)
		{
			if (!(PoleIgroka[i][j]))
			{
				cout << "| " << "  ";
				SetColor(White, Black);
			}
			else if (PoleIgroka[i][j] == 1)//если 1 нарисовать корабль
			{
				cout << "|";
				SetColor(Green, Green);
				cout << '0' << "  ";
				SetColor(White, Black);
			}
			else if (PoleIgroka[i][j] == 2)//если 2 мимо желтый крест
			{
				cout << "| ";
				SetColor(Yellow, Black);
				cout << 'x' << " ";
				SetColor(White, Black);
			}
			else if (PoleIgroka[i][j] == 3)//если 3 ранен или убит крас крест
			{
				cout << "|";
				SetColor(LightRed, Black);
				cout << " " << 'X' << " ";
				SetColor(White, Black);
			}
			if (j == 9)
				cout << "|";
		}
		cout << endl;
		cout << "   + - + - + - + - + - + - + - + - + - + - +\n";
	}
}

//void PaintPolePC(int PolePC[][10])
//{
//	SetColor(LightGreen, Black);
//	WriteStr(95, 0, "Поле ПК");
//	SetColor(White, Black);
//	WriteStr(74, 2, "     a   b   c   d   e   f   g   h   i   j\n");
//	WriteStr(74, 3, "   + - + - + - + - + - + - + - + - + - + - +\n");
//	int k = 4, h = 2, w = 5, y = 4;
//	for (int i = 0; i < sizeRow; i++)
//	{
//		GotoXY(74, k);
//		cout << i + 1;
//		for (int j = 0; j < sizeCol; j++)
//		{
//			if (!(PolePC[i][j]))
//			{
//				GotoXY(h + 75, y);
//				cout << "| ";
//				SetColor(White, Black);
//			}
//			else if (PolePC[i][j] == 1)
//			{
//				WriteStr(h + 75, y, "| ");
//				SetColor(Green, Green);
//				GotoXY(h + 77, y);
//				cout << '0' << "  ";
//				SetColor(White, Black);
//			}
//			else if (PolePC[i][j] == 3)
//			{
//				WriteStr(h + 75, y, "| ");
//				SetColor(Red, Black);
//				GotoXY(h + 77, y);
//				cout << 'x';
//				SetColor(White, Black);
//			}
//			else if (PolePC[i][j] == 2)
//			{
//				WriteStr(h + 75, y, "| ");
//				SetColor(Yellow, Black);
//				GotoXY(h + 77, y);
//				cout << 'x';
//				SetColor(White, Black);
//			}
//			if (j == 9)
//			{
//				GotoXY(117, k);
//				cout << "|";
//			}
//			h += 4;
//		}
//		GotoXY(74, w);
//		cout << "   + - + - + - + - + - + - + - + - + - + - +\n";
//		y += 2;
//		k += 2;
//		w += 2;
//		h = 2;
//	}
//}

void SaveandRestore1()
{
	BOOL fSuccess;
	CHAR_INFO chiBuffer[9999];//количестов копируемы объектов
	COORD coordBufSize;
	COORD coordBufCoord;
	SMALL_RECT srctReadRect;
	SMALL_RECT srctWriteRect;
	coordBufSize.X = 44;//количество элементов в строке
	coordBufSize.Y = 24;//количество строк

	coordBufCoord.X = 0;
	coordBufCoord.Y = 0;

	srctReadRect.Top = 0;//откуда копируем
	srctReadRect.Left = 0;
	srctReadRect.Bottom = 24;
	srctReadRect.Right = 44;

	srctWriteRect.Top = 0;//куда копируем
	srctWriteRect.Left = 0;
	srctWriteRect.Bottom = 24;
	srctWriteRect.Right = 44;

	fSuccess = ReadConsoleOutput(hStdOut, chiBuffer, coordBufSize, coordBufCoord, &srctReadRect);//cкопировали
	system("cls");
	fSuccess = WriteConsoleOutput(hStdOut, chiBuffer, coordBufSize, coordBufCoord, &srctWriteRect);
}

void SaveandRestore2()
{
	BOOL fSuccess;
	CHAR_INFO chiBuffer[9999];//количестов копируемы объектов
	COORD coordBufSize;
	COORD coordBufCoord;
	SMALL_RECT srctReadRect;
	SMALL_RECT srctWriteRect;
	coordBufSize.X = 44;//количество элементов в строке
	coordBufSize.Y = 24;//количество строк

						//x >= 77 && x <= 117 && y >= 3 && y <= 23
	coordBufCoord.X = 0;
	coordBufCoord.Y = 0;

	srctReadRect.Top = 0;//откуда копируем
	srctReadRect.Left = 74;
	srctReadRect.Bottom = 23;
	srctReadRect.Right = 118;

	srctWriteRect.Top = 0;//куда копируем
	srctWriteRect.Left = 74;
	srctWriteRect.Bottom = 23;
	srctWriteRect.Right = 118;

	fSuccess = ReadConsoleOutput(hStdOut, chiBuffer, coordBufSize, coordBufCoord, &srctReadRect);//cкопировали
	fSuccess = WriteConsoleOutput(hStdOut, chiBuffer, coordBufSize, coordBufCoord, &srctWriteRect);
}

void zapAdres(int *pKorabl, int palu, int pologen)//записывает адреса кор. и вокруг них
{
	if (pologen == 1)//если корабль по вертикали
	{
		int *pKorabl1 = &*(pKorabl - 1);
		int *pKorabl2 = &*(pKorabl + 1);
		for (int i = 0; i < palu + 2; i++)//обвод корабля
		{
			adresaKorabl[index] = &*pKorabl;
			index++;
			*(pKorabl -= 12);
			adresaKorabl[index] = &*pKorabl1;
			index++;
			*(pKorabl1 -= 12);
			adresaKorabl[index] = &*pKorabl2;
			index++;
			*(pKorabl2 -= 12);
		}
	}
	else if (pologen == 2)//по горизонтали
	{
		int *pKorabl1 = &*(pKorabl + 12);
		int *pKorabl2 = &*(pKorabl - 12);
		for (int i = 0; i < palu + 2; i++)//обвод корабля
		{
			adresaKorabl[index] = &*pKorabl;
			index++;
			*(pKorabl -= 1);
			adresaKorabl[index] = &*pKorabl1;
			index++;
			*(pKorabl1 -= 1);
			adresaKorabl[index] = &*pKorabl2;
			index++;
			*(pKorabl2 -= 1);
		}
	}
}

void RastanovkaRuchnaya(int PoleIgroka[][10], int palub, int kolychestvo)
{
	if (kolychestvo == 0)
		return;
	const int Enter = 13;
	const int Space = 32;
	const int Esc = 27;
	bool polog = rand() % 2;
	int key;
	int i = rand() % 10, j = rand() % 10;
	bool check;
	if (polog == 0)
	{
		do
		{
			check = 0;
			for (int k = 0; k < palub; k++)
			{
				if (PoleIgroka[i][j + k] == 1 || PoleIgroka[i][j + k] == 2 || i > 10 || i < 0 || j + palub > 10 || j < 0)
				{
					check = 1;
					i = rand() % 10;
					j = rand() % 10;
				}
			}
		} while (check == 1);
	}
	else if (polog == 1)
	{
		do
		{
			check = 0;
			for (int k = 0; k < palub; k++)
			{
				if (PoleIgroka[i + k][j] == 1 || PoleIgroka[i + k][j] == 2 || i + palub > 10 || i < 0 || j > 10 || j < 0)
				{
					check = 1;
					i = rand() % 10;
					j = rand() % 10;
					break;
				}
			}
		} while (check == 1);
	}
	do
	{
		if (polog == 0) // горизонталь
		{
			for (int k = 0; k < palub; k++)
				PoleIgroka[i][j + k] = 1;
			system("cls");
			PaintPole1(PoleIgroka);
			key = _getch();
			if (key == 0 || key == 0xE0)
			{
				key = _getch();
				switch (key)
				{
				case 72:		// Up
					if (i - 1 < 10 && i - 1 >= 0)
					{
						int y = i;
						i--;
						do
						{
							check = 0;
							for (int k = 0; k < palub; k++)
							{
								if (PoleIgroka[i][j + k] == 1 || PoleIgroka[i][j + k] == 2)
								{
									i--;
									check = 1;
									break;
								}
							}
						} while (check == 1);
						if (i >= 0)
						{
							for (int k = 0; k < palub; k++)
								PoleIgroka[y][j + k] = 0;
						}
						else
						{
							i = y;
						}
					}
					break;
				case 80:		// Down
					if (i + 1 < 10 && i + 1 >= 0)
					{
						int y = i;
						i++;
						do
						{
							check = 0;
							for (int k = 0; k < palub; k++)
							{
								if (PoleIgroka[i][j + k] == 1 || PoleIgroka[i][j + k] == 2)
								{
									i++;
									check = 1;
									break;
								}
							}
						} while (check == 1);
						if (i < 10)
						{
							for (int k = 0; k < palub; k++)
								PoleIgroka[y][j + k] = 0;
						}
						else
						{
							i = y;
						}
					}
					break;
				case 77:		// Right
					if (j + palub - 1 < 10 && j + 1 >= 0)
					{
						int y = j;
						bool check = 0;
						j++;
						while (PoleIgroka[i][j + palub - 1] == 2 || PoleIgroka[i][j + palub - 1] == 1)
						{
							j++;
							check = 1;
						}
						if (check == 1)
						{

							for (int q = 0; q < palub; q++)
							{
								if (PoleIgroka[i][j + q] == 2)
								{
									j += q;
									while (PoleIgroka[i][j] != 0)
									{
										j++;
									}

								}
							}
						}
						if (j + palub - 1 < 10)
						{
							for (int k = 0; k < palub; k++)
								PoleIgroka[i][y + k] = 0;
						}
						else
							j = y;

					}
					break;
				case 75:		// Left
					if (j + palub - 1 < 10 && j - 1 >= 0)
					{
						int y = j;
						bool check = 0;
						j--;
						while (PoleIgroka[i][j] == 2 || PoleIgroka[i][j] == 1)
						{
							j--;
							check = 1;
						}
						if (check == 1)
						{
							j -= palub - 1;
							for (int q = 0; q < palub; q++)
							{
								if (PoleIgroka[i][j + q] == 2 || PoleIgroka[i][j + q] == 1)
								{
									j -= q;
									while (PoleIgroka[i][j] != 0)
									{
										j--;
									}

								}
							}
						}
						if (j >= 0)
						{
							for (int k = 0; k < palub; k++)
								PoleIgroka[i][y + k] = 0;
						}
						else
							j = y;
					}
					break;
				}
			}
			if (key == Space)
			{
				bool check = 0;
				int q = 1;
				do
				{
					if (PoleIgroka[i + q][j] == 1 || PoleIgroka[i + q][j] == 2)
						check = 1;
					q++;
				} while (q < palub && check == 0);
				if (i + palub - 1 < 10 && check == 0)
				{
					for (int k = 0; k < palub; k++)
						PoleIgroka[i][j + k] = 0;
					system("cls");
					PaintPole1(PoleIgroka);
					polog = 1;
				}
			}
			if (key == Enter)
			{
				for (int q = -1; q < 2; q++)
				{
					if (i + q >= 0 && i + q < 10 && j - 1 >= 0)
					{
						PoleIgroka[i + q][j - 1] = 2;
					}
					if (i + q >= 0 && i + q < 10 && j + palub < 10)
					{
						PoleIgroka[i + q][j + palub] = 2;
					}
				}
				for (int q = 0; q < palub; q++)
				{
					if (i + 1 < 10)
					{
						PoleIgroka[i + 1][j + q] = 2;
					}
					if (i - 1 >= 0)
					{
						PoleIgroka[i - 1][j + q] = 2;
					}
				}
				system("cls");
				PaintPole1(PoleIgroka);
				if (kolychestvo == 10)
				{
					ChetP.strPalubKorabl = &PoleIgroka[i][j];
					ChetP.pologKorabliy = 0;
					ChetP.palubu = 4;
					palub--;
					kolychestvo--;
					RastanovkaRuchnaya(PoleIgroka, palub, kolychestvo);
					return;
				}
				else if (kolychestvo == 9 && palub == 3)
				{
					Try1P.strPalubKorabl = &PoleIgroka[i][j];
					Try1P.pologKorabliy = 0;
					Try1P.palubu = 3;
					kolychestvo--;
					RastanovkaRuchnaya(PoleIgroka, palub, kolychestvo);
					return;
				}
				else if (kolychestvo == 8 && palub == 3)
				{
					Try2P.strPalubKorabl = &PoleIgroka[i][j];
					Try2P.pologKorabliy = 0;
					Try2P.palubu = 3;
					palub--;
					kolychestvo--;
					RastanovkaRuchnaya(PoleIgroka, palub, kolychestvo);
					return;
				}
				else if (kolychestvo == 7 && palub == 2)
				{
					Dwa1P.strPalubKorabl = &PoleIgroka[i][j];
					Dwa1P.pologKorabliy = 0;
					Dwa1P.palubu = 2;
					kolychestvo--;
					RastanovkaRuchnaya(PoleIgroka, palub, kolychestvo);
					return;
				}
				else if (kolychestvo == 6 && palub == 2)
				{
					Dwa2P.strPalubKorabl = &PoleIgroka[i][j];
					Dwa2P.pologKorabliy = 2;
					Dwa2P.palubu = 2;
					kolychestvo--;
					RastanovkaRuchnaya(PoleIgroka, palub, kolychestvo);
					return;
				}
				else if (kolychestvo == 5 && palub == 2)
				{
					Dwa3P.strPalubKorabl = &PoleIgroka[i][j];
					Dwa3P.pologKorabliy = 2;
					Dwa3P.palubu = 2;
					kolychestvo--;
					palub--;
					RastanovkaRuchnaya(PoleIgroka, palub, kolychestvo);
					return;
				}
				else if (palub == 1)
				{
					kolychestvo--;
					RastanovkaRuchnaya(PoleIgroka, palub, kolychestvo);
					return;
				}
			}
		}
		else if (polog == 1) //вертикаль
		{
			for (int k = 0; k < palub; k++)
				PoleIgroka[i + k][j] = 1;
			system("cls");
			PaintPole1(PoleIgroka);

			key = _getch();
			if (key == 0 || key == 0xE0)
			{
				key = _getch();
				switch (key)
				{
				case 72:		// Up
					if (i + palub - 1 < 10 && i - 1 >= 0)
					{
						check = 0;
						int y = i--;
						while (PoleIgroka[i][j] == 2 || PoleIgroka[i][j] == 1)
						{
							i--;
							check = 1;
						}
						if (check == 1)
						{
							check = 1;
							i -= palub - 1;
							do
							{
								for (int q = 0; q < palub; q++)
								{
									check = 1;
									if (PoleIgroka[i + q][j] == 2 || PoleIgroka[i + q][j] == 1)
									{
										i--;
										check = 0;
										break;
									}
								}
							} while (check == 0);
						}
						if (i >= 0)
							for (int k = 0; k < palub; k++)
								PoleIgroka[y + k][j] = 0;
						else
							i = y;
					}
					break;
				case 80:		// Down
					if (i + palub - 1 < 10 && i + 1 >= 0)
					{
						check = 0;
						int y = i++;
						if (PoleIgroka[i + palub - 1][j] == 2)
						{
							i += 2 + palub;
							check = 1;
						}
						if (check == 1)
						{
							do
							{
								check = 1;
								for (int q = 0; q < palub; q++)
								{
									if (PoleIgroka[i + q][j] == 2 || PoleIgroka[i + q][j] == 1)
									{
										i++;
										check = 0;
										break;
									}
								}
							} while (check == 0);
						}
						if (i + palub < 11)
							for (int k = 0; k < palub; k++)
								PoleIgroka[y + k][j] = 0;
						else
							i = y;
					}
					break;
				case 77:		// Right
					if (j + 1 < 10 && j + 1 >= 0)
					{
						int y = j++;
						do
						{
							check = 0;
							for (int k = 0; k < palub; k++)
							{
								if (PoleIgroka[i + k][j] == 1 || PoleIgroka[i + k][j] == 2)
								{
									j++;
									check = 1;
									break;
								}
							}
						} while (check == 1);
						if (j < 10)
						{
							for (int k = 0; k < palub; k++)
								PoleIgroka[i + k][y] = 0;
						}
						else
						{
							j = y;
						}
					}
					break;
				case 75:		// Left
					if (j - 1 < 10 && j - 1 >= 0)
					{
						int y = j--;
						do
						{
							check = 0;
							for (int k = 0; k < palub; k++)
							{
								if (PoleIgroka[i + k][j] == 1 || PoleIgroka[i + k][j] == 2)
								{
									j--;
									check = 1;
									break;
								}
							}
						} while (check == 1);
						if (j >= 0)
						{
							for (int k = 0; k < palub; k++)
								PoleIgroka[i + k][y] = 0;
						}
						else
						{
							j = y;
						}
						break;
					}
				}
			}
			if (key == Space)
			{
				bool check = 0;
				int q = 1;
				do
				{
					if (PoleIgroka[i][j + q] == 1 || PoleIgroka[i][j + q] == 2)
						check = 1;
					q++;
				} while (q < palub && check == 0);
				if (j + palub - 1 < 10 && check == 0)
				{
					for (int k = 0; k < palub; k++)
						PoleIgroka[i + k][j] = 0;
					system("cls");
					PaintPole1(PoleIgroka);
					polog = 0;
				}
			}
			if (key == Enter)
			{
				for (int q = -1; q < 2; q++)
				{
					if (i - 1 >= 0 && j + q >= 0 && j + q < 10)
					{
						PoleIgroka[i - 1][j + q] = 2;
					}
					if (i + palub < 10 && j + q >= 0 && j + q < 10)
					{
						PoleIgroka[i + palub][j + q] = 2;
					}
				}
				for (int q = 0; q < palub; q++)
				{
					if (j + 1 < 10)
						PoleIgroka[i + q][j + 1] = 2;
					if (j - 1 >= 0)
						PoleIgroka[i + q][j - 1] = 2;
				}
				if (kolychestvo == 10)
				{
					palub--;
					kolychestvo--;
					RastanovkaRuchnaya(PoleIgroka, palub, kolychestvo);
					return;
				}
				else if (kolychestvo == 8)
				{
					palub--;
					kolychestvo--;
					RastanovkaRuchnaya(PoleIgroka, palub, kolychestvo);
					return;
				}
				else if (kolychestvo == 5)
				{
					palub--;
					kolychestvo--;
					RastanovkaRuchnaya(PoleIgroka, palub, kolychestvo);
					return;
				}
				kolychestvo--;
				RastanovkaRuchnaya(PoleIgroka, palub, kolychestvo);
				return;
			}
		}
	} while (key != Esc);
}

void RastanovkaPC(int PolePC[][10], int palub, int kolychestvo)
{
	if (kolychestvo == 0)
		return;
	bool check;
	bool pologeniye = rand() % 2;
	int i = rand() % 10, j = rand() % 10;
	if (pologeniye == 0) // горизонталь
	{
		do
		{
			check = 0;
			for (int k = 0; k < palub; k++)
			{
				if (PolePC[i][j + k] == 1 || PolePC[i][j + k] == 2 || i > 10 || i < 0 || j + palub > 10 || j < 0)
				{
					check = 1;
					i = rand() % 10;
					j = rand() % 10;
				}
			}
		} while (check == 1);
		for (int q = 0; q < palub; q++)
		{
			PolePC[i][j + q] = 1;
		}
		for (int q = -1; q < 2; q++)
		{
			if (i + q >= 0 && i + q < 10 && j - 1 >= 0)
			{
				PolePC[i + q][j - 1] = 2;
			}
			if (i + q >= 0 && i + q < 10 && j + palub < 10)
			{
				PolePC[i + q][j + palub] = 2;
			}
		}
		for (int q = 0; q < palub; q++)
		{
			if (i + 1 < 10)
			{
				PolePC[i + 1][j + q] = 2;
			}
			if (i - 1 >= 0)
			{
				PolePC[i - 1][j + q] = 2;
			}
		}
		if (kolychestvo == 10)
		{
			palub--;
			kolychestvo--;
			RastanovkaPC(PolePC, palub, kolychestvo);
			return;
		}
		else if (kolychestvo == 8)
		{
			palub--;
			kolychestvo--;
			RastanovkaPC(PolePC, palub, kolychestvo);
			return;
		}
		else if (kolychestvo == 5)
		{
			palub--;
			kolychestvo--;
			RastanovkaPC(PolePC, palub, kolychestvo);
			return;
		}
		kolychestvo--;
		RastanovkaPC(PolePC, palub, kolychestvo);
		return;
	}
	else if (pologeniye == 1)  //вертикально
	{
		do
		{
			check = 0;
			for (int k = 0; k < palub; k++)
			{
				if (PolePC[i + k][j] == 1 || PolePC[i + k][j] == 2 || i + palub > 10 || i < 0 || j > 10 || j < 0)
				{
					check = 1;
					i = rand() % 10;
					j = rand() % 10;
				}
			}
		} while (check == 1);
		for (int q = 0; q < palub; q++)
		{
			PolePC[i + q][j] = 1;
		}
		for (int q = -1; q < 2; q++)
		{
			if (i - 1 >= 0 && j + q >= 0 && j + q < 10)
			{
				PolePC[i - 1][j + q] = 2;
			}
			if (i + palub < 10 && j + q >= 0 && j + q < 10)
			{
				PolePC[i + palub][j + q] = 2;
			}
		}
		for (int q = 0; q < palub; q++)
		{
			if (j + 1 < 10)
				PolePC[i + q][j + 1] = 2;
			if (j - 1 >= 0)
				PolePC[i + q][j - 1] = 2;
		}
		if (kolychestvo == 10)
		{
			palub--;
			kolychestvo--;
			RastanovkaPC(PolePC, palub, kolychestvo);
			return;
		}
		else if (kolychestvo == 8)
		{
			palub--;
			kolychestvo--;
			RastanovkaPC(PolePC, palub, kolychestvo);
			return;
		}
		else if (kolychestvo == 5)
		{
			palub--;
			kolychestvo--;
			RastanovkaPC(PolePC, palub, kolychestvo);
			return;
		}
		kolychestvo--;
		RastanovkaPC(PolePC, palub, kolychestvo);
		return;
	}
}

void Zachistka(int Pole[][10])
{
	for (int i = 0; i < sizeRow; i++)
	{
		for (int j = 0; j < sizeCol; j++)
		{
			if (Pole[i][j] == 2)
			{
				Pole[i][j] = 0;
			}
		}
	}
}

int CheckWin(int Pole[][10])
{
	for (int k = 0; k < sizeRow; k++)
	{
		for (int j = 0; j < sizeCol; j++)
		{
			if (Pole[k][j] == 1)
			{
				return 1;
			}
		}
	}
}

//проверка на убил (не работает)

//void CheckUbil(int Pole[][10], int tempx, int tempy)
//{
//
//}

int PlayerShooting(int Pole[][10])
{
	HANDLE hStdin, h;
	DWORD cNumRead, fdwMode, fdwSaveOldMode, i;
	INPUT_RECORD irInBuf[128];

	// Получим стандартный дескриптор ввода.

	hStdin = GetStdHandle(STD_INPUT_HANDLE);
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	// Сохраним текущий режим ввода для будущего восстановления при
	// выходе из программы.

	GetConsoleMode(hStdin, &fdwSaveOldMode);

	// Включим события ввода от мыши и окна.

	fdwMode = ENABLE_MOUSE_INPUT;

	SetConsoleMode(hStdin, fdwMode);
	bool check;
	int x, y;
	// Цикл чтения и обработки событий ввода.
	check = 0;

	// Ожидание событий.

	ReadConsoleInput(
		hStdin,      // дескриптор буфера ввода
		irInBuf,     // буфер, в котором читаем
		128,         // размер буфера чтения
		&cNumRead)  // число прочитанных записей
		;

	// Направляем события соответствующим обработчикам.
	int tempx, tempy;
	for (i = 0; i < cNumRead; i++)
	{
		if (irInBuf[i].Event.MouseEvent.dwEventFlags == DOUBLE_CLICK)
		{
			x = irInBuf[i].Event.MouseEvent.dwMousePosition.X;
			y = irInBuf[i].Event.MouseEvent.dwMousePosition.Y;
			//cout << x << "     " << y << endl;
			if (x >= 77 && x <= 117 && y >= 3 && y <= 23)
			{
				if (y == 4)
					tempy = 0;
				else
					tempy = (y - 4) / 2;
				if (x == 79)
					tempx = 0;
				else
					tempx = (x - 78) / 4;

				if (Pole[tempy][tempx] == 0)
				{
					Pole[tempy][tempx] = 2;
					SaveandRestore1();
					PaintPolePC(Pole);
					return 1;
				}
				else if (Pole[tempy][tempx] == 1)
				{
					Pole[tempy][tempx] = 3;
					SaveandRestore1();
					PaintPolePC(Pole);
					continue;
				}
				else
					continue;
			}
		}
		break;
	}
	return 0;
}

void PCShooting(int Pole[][10], int i, int j, int Pole2[][10])
{
	do
	{
		if (Pole[i][j] == 0)
		{
			Pole[i][j] = 2;
			system("cls");
			PaintPole1(Pole);
			PaintPolePC(Pole2);
			return;
		}
		else if (Pole[i][j] == 1)
		{
			system("cls");
			Pole[i][j] = 3;
			PaintPole1(Pole);
			PaintPolePC(Pole2);
			/*int polog = rand() % 2;
			if (polog == 0)
			{
				do
				{
					i += rand() % 3 - 1;
				} while (i > 9 || i < 0);
			}
			else
			{
				do
				{
					j += rand() % 3 - 1;
				} while (j > 9 || j < 0);
			}
			PCShooting(Pole, i, j);*/
			return;
		}
	} while (1);
}

void Igra(int Pole1[][10], int Pole2[][10])
{
	bool check1 = 0, check2 = 0, ch = 0;
	do
	{
		ch = PlayerShooting(Pole2);
		check1 = CheckWin(Pole2);
		if (ch == 1)
		{
			int i = rand() % 10, j = rand() % 10;
			PCShooting(Pole1, i, j, Pole2);
			check2 = CheckWin(Pole1);
		}
	} while (check1 == 1 || check2 == 1);
}

void main()
{
	system("mode con lines=50 cols=180");
	setlocale(LC_CTYPE, "rus");
	srand((unsigned)time(NULL));
	ShowCursor(0);
	int PoleIgroka[sizeRow][sizeCol] = { 0 }; // координаты рисунка 3:3 ... 43:23
	int PolePC[sizeRow][sizeCol] = { 0 };
	int palub = 4;
	int kolychestvo = 10;
	PaintPole1(PoleIgroka);
	RastanovkaRuchnaya(PoleIgroka, palub, kolychestvo);
	Zachistka(PoleIgroka);
	system("cls");
	PaintPole1(PoleIgroka);
	PaintPolePC(PolePC);
	RastanovkaPC(PolePC, palub, kolychestvo);
	Zachistka(PolePC);
	Igra(PoleIgroka, PolePC);
}