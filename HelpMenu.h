#pragma once
#include ".\\T_Engine\\T_Menu.h"
#include "MyConfig.h"
class HelpMenu : public T_Menu
{
public:
	HelpMenu();
	~HelpMenu();
	void init();
	void initBackToMainMenu();
	//重载父类函数
	void MenuMouseMove(int x, int y);
	int MenuMouseClick(int x, int y);
	int GetMenuIndex(int x, int y);
	void DrawMenu(HDC hdc, BYTE btnTrans = 255, bool startState = true);
private :
	vector<MYSTARTMENUINFO> myMenuItems;		// 菜单项目
	T_Graph *helpInfo;							//绘制帮助信息图片
};

