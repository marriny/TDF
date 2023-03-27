#pragma once
//开始界面的绘制
struct BeginView
{
	void drawBBtom();
	void drawFBtom();
};
//地图界面的绘制
//包含在左上角的声音开关
//也含有地图的选项
struct MapView
{
	void drawSBtom();
	void drawGBtom();
};
struct GameView
{
	//这些是一直不会消失的
	void drawMBtom();
	void drawLBtom();
	void drawBack();
	void drawTower();
	//这些是消失的
	void drawenemy();
	void drawbullet();
};
