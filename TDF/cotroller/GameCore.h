#pragma once
// 游戏设置：设置游戏运行过程中不变动的设置
void setup();
// 游戏初始化
void init();
// 接收输入：接收用户输入的控制塔防的安装与升级
void revInput();
// 生成敌人
void makeEnemy();
//生成子弹,开始坐标(x,y) 终点坐标(i,j)
void makebullets(int x ,int y,int i,int j);
//生成可以安装炮塔的区域,!!!!!!!!!!!!!!!!!!!!!!!如何获取一张图片坐标？？敌人/塔坐标的重要性
void makeFiled();
//安装炮塔，要写 是否可以安装，金币扣减行为
void setTower();
//炮塔的攻击 
//范围，子弹的移动和消失!!!!!!!
void TowerHit();
// 敌人的移动过程逻辑处理：敌人的移动，敌人的死亡
void moveEnemy();
// 重新开始游戏
void restart();
// 开始游戏
void start();
// 重新开始游戏
void restart();
//区域的判断
bool MesrArea(int x1, int y1, int x2, int y2);
//转弯判断
bool isTurn(enemy E);