#include "stdafx.h"  //________________________________________ Mayor.cpp
#include "Mayor.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Mayor app;
	return app.BeginDialog(IDI_Mayor, hInstance);
}

void Mayor::Window_Open(Win::Event& e)
{
}

void Mayor::btSeparar_Click(Win::Event& e)
{
	double inpu = tbxDos.DoubleValue;
	double input = tbxUno.DoubleValue;
	if (input >= inpu)
	{
		double resultado = input;
		this->tbxTres.DoubleValue = resultado;
		double result = inpu;
		this->tbxCuatro.DoubleValue = result;
	}
	else
	{
		double resultado = input;
		this->tbxCuatro.DoubleValue = resultado;
		double result = inpu;
		this->tbxTres.DoubleValue = result;
	}
}

