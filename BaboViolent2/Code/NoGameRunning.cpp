#ifndef CONSOLE
#include "NoGameRunning.h"
#include "GameVar.h"



// 
// Constructor
//
NoGameRunning::NoGameRunning(Menu * pRootMenu)
{
	rootMenu = pRootMenu;
	font = dkfCreateFont("main/fonts/babo.tga");

	add(new Label(CVector2i(400,250),gameVar.lang_noGameRunning, font, 25, JUSTIFY_CENTER));
	add(btn_ok = new Button(CVector2i(400,300),gameVar.lang_back,font,50,JUSTIFY_CENTER,this));
}



//
// Destructor
//
NoGameRunning::~NoGameRunning()
{
	dkfDeleteFont(&font);
}



//
// Si on clic sur un bouton
//
void NoGameRunning::onClick(Control * control)
{
	if (control == btn_ok)
	{
		rootMenu->currentMenu = MENU_MAIN;
	}
}
#endif

