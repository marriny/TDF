#pragma once
// ��Ϸ���ã�������Ϸ���й����в��䶯������
void setup();
// ��Ϸ��ʼ��
void init();
// �������룺�����û�����Ŀ��������İ�װ������
void revInput();
// ���ɵ���
void makeEnemy();
//�����ӵ�,��ʼ����(x,y) �յ�����(i,j)
void makebullets(int x ,int y,int i,int j);
//���ɿ��԰�װ����������,!!!!!!!!!!!!!!!!!!!!!!!��λ�ȡһ��ͼƬ���ꣿ������/���������Ҫ��
void makeFiled();
//��װ������Ҫд �Ƿ���԰�װ����ҿۼ���Ϊ
void setTower();
//�����Ĺ��� 
//��Χ���ӵ����ƶ�����ʧ!!!!!!!
void TowerHit();
// ���˵��ƶ������߼��������˵��ƶ������˵�����
void moveEnemy();
// ���¿�ʼ��Ϸ
void restart();
// ��ʼ��Ϸ
void start();
// ���¿�ʼ��Ϸ
void restart();
//������ж�
bool MesrArea(int x1, int y1, int x2, int y2);
//ת���ж�
bool isTurn(enemy E);