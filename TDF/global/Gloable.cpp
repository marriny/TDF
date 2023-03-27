#include "Gloable.h"
//炮塔的子弹和敌人的初始坐标，传入炮塔的坐标，传入敌人的随机坐标
position::position(int x, int y) {
	this->x = x;
	this->y = y;
	
}
//基地的位置
position::position() {
	this->x = 0;
	this->y = 0;
}
bool position::isEqual(int x, int y) {
	return this->x == x && this->y == y;
}
bool position::isEqual(const position& pos) {
	return this->x == pos.x && this->y == pos.y;
}
void position :: addX(int x)
{
	this->x += x;
}

void position::addY(int y)
{
	this->y += y;
}

void position::addXY(int x, int y)
{
	addX(x);
	addY(y);
}

//炮塔与敌人
enemy::enemy(int x,int y) {
	this->P.x = x;
	this->P.y = y;
	this->life = Elife;
	this->espeed = speed;
	this->turn = 0;
}

tower::tower(int x,int y) {
	this->x = x;
	this->y = y;
	this->HitNum = 3;
}
void tower::up() {

}
void tower::down() {

}
//动态数据
GameRunTimeData::GameRunTimeData() {
	score = 0;
	money = 100;
	life = 3;
	gameOver = false;
	isPass = false;
	isRestart = false;
}