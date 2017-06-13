#pragma once  //______________________________________ Mayor.h  
#include "Resource.h"
class Mayor: public Win::Dialog
{
public:
	Mayor()
	{
	}
	~Mayor()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label lb2;
	Win::Textbox tbxUno;
	Win::Textbox tbxDos;
	Win::Button btSeparar;
	Win::Label lb3;
	Win::Label lb4;
	Win::Textbox tbxTres;
	Win::Textbox tbxCuatro;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(15.71625);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.93688);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Mayor";
		lb1.CreateX(NULL, L"Input 1", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.47625, 0.76729, 2.03729, 0.60854, hWnd, 1000);
		lb2.CreateX(NULL, L"Input 2", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.42333, 2.14312, 2.11667, 0.60854, hWnd, 1001);
		tbxUno.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 3.09563, 0.74083, 2.56646, 0.60854, hWnd, 1002);
		tbxDos.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 3.20146, 2.14312, 2.40771, 0.60854, hWnd, 1003);
		btSeparar.CreateX(NULL, L"Separar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 6.29708, 0.74083, 3.86292, 1.85208, hWnd, 1004);
		lb3.CreateX(NULL, L"Big", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 10.68917, 0.76729, 1.71979, 0.60854, hWnd, 1005);
		lb4.CreateX(NULL, L"Small", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 10.68917, 1.85208, 1.71979, 0.60854, hWnd, 1006);
		tbxTres.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 13.22917, 0.68792, 2.30187, 0.60854, hWnd, 1007);
		tbxCuatro.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 13.22917, 1.79917, 2.30187, 0.60854, hWnd, 1008);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		tbxUno.Font = fontArial009A;
		tbxDos.Font = fontArial009A;
		btSeparar.Font = fontArial009A;
		lb3.Font = fontArial009A;
		lb4.Font = fontArial009A;
		tbxTres.Font = fontArial009A;
		tbxCuatro.Font = fontArial009A;
	}
	//_________________________________________________
	void btSeparar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btSeparar.IsEvent(e, BN_CLICKED)) {btSeparar_Click(e); return true;}
		return false;
	}
};
