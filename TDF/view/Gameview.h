#pragma once
//��ʼ����Ļ���
struct BeginView
{
	void drawBBtom();
	void drawFBtom();
};
//��ͼ����Ļ���
//���������Ͻǵ���������
//Ҳ���е�ͼ��ѡ��
struct MapView
{
	void drawSBtom();
	void drawGBtom();
};
struct GameView
{
	//��Щ��һֱ������ʧ��
	void drawMBtom();
	void drawLBtom();
	void drawBack();
	void drawTower();
	//��Щ����ʧ��
	void drawenemy();
	void drawbullet();
};
