#pragma once

struct position
{	
	//���˻����ӵ�����������
	int x;
	int y;
	
	//���˻��ӵ��ĳ�ʼ����
	position(int x, int y);
	//�����������ǻ��ص�λ��
	position();
	//�Ƚ��Ƿ����
	bool isEqual(int x, int y);
	//�Ƚϵ����Ƿ�������
	bool isEqual(const position& pos);
	//��������ļӼ�
	//x,y��speed
	void addX(int x);
	void addY(int y);
	void addXY(int x, int y);//��һ����Ҫ����ӵ����ƶ�
};
//���˵�����
struct enemy
{
	enemy(int x ,int y);
	int life;
	int espeed;
	position P;
	//turn ==0�����ߣ�turn==1������
	int turn;
};
//����������
struct tower
{
	tower(int x ,int y);
	int x, y;
	int HitNum;
	void up();//����
	void down();//���
};
struct GameRunTimeData
{

	//�÷�
	int score;
	//��Ǯ��
	int money;
	//����
	int life;
	//��Ϸ�Ƿ����
	bool gameOver;
	//��Ϸ�Ƿ����¿�ʼ
	bool isRestart;
	//��Ϸ�Ƿ�ͨ��
	bool isPass;
	//�������г�ʼֵ
	GameRunTimeData();
};
//��Ϸ���ڵĿ��
#define WIDTH 1024
//��Ϸ���ڵĸ߶�
#define HEIGHT 768
//�ӵ�������time
#define DLT 1000
//·�Ŀ��
#define WidOFRd 140
//�ӵ��İ뾶
#define BR 36
//���˰뾶
#define ER 50
//�����뾶
#define TR 70
//�����ƶ��ٶ�
#define speed 3
//���˵�����ֵ
#define Elife 10 
// ����һ������ʱ����ȫ�ֱ���
extern GameRunTimeData runtimeData;
const position& pos;