#pragma once

struct position
{	
	//敌人或者子弹的坐标属性
	int x;
	int y;
	
	//敌人或子弹的初始坐标
	position(int x, int y);
	//不传参数就是基地的位置
	position();
	//比较是否相等
	bool isEqual(int x, int y);
	//比较敌人是否进入基地
	bool isEqual(const position& pos);
	//定义坐标的加减
	//x,y是speed
	void addX(int x);
	void addY(int y);
	void addXY(int x, int y);//这一项主要针对子弹的移动
};
//敌人的属性
struct enemy
{
	enemy(int x ,int y);
	int life;
	int espeed;
	position P;
	//turn ==0横着走，turn==1竖着走
	int turn;
};
//炮塔的属性
struct tower
{
	tower(int x ,int y);
	int x, y;
	int HitNum;
	void up();//升级
	void down();//拆毁
};
struct GameRunTimeData
{

	//得分
	int score;
	//金钱数
	int money;
	//生命
	int life;
	//游戏是否结束
	bool gameOver;
	//游戏是否重新开始
	bool isRestart;
	//游戏是否通关
	bool isPass;
	//数据运行初始值
	GameRunTimeData();
};
//游戏窗口的宽度
#define WIDTH 1024
//游戏窗口的高度
#define HEIGHT 768
//子弹的射速time
#define DLT 1000
//路的宽度
#define WidOFRd 140
//子弹的半径
#define BR 36
//敌人半径
#define ER 50
//炮塔半径
#define TR 70
//敌人移动速度
#define speed 3
//敌人的生命值
#define Elife 10 
// 引用一个运行时数据全局变量
extern GameRunTimeData runtimeData;
const position& pos;