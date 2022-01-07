#include<stdio.h>
#include<easyx.h>
#include<graphics.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

typedef struct Position
{
	int x;
	int y;
}position;

void num_to_char(long num, char* string);			//	数字转化为字符
void End();											//结束界面
int issame1(int* arr, int num, int i);						//判断数组中的数是否相同
int issame2(int *arr,int num,int i);						//判断数组中的数是否相同
void Creatrandarr(int *randarr);			//生成随机数组
int isin3();					//对图片部分的判断
int isClick3();					//对图片点击的判断
void BeginBGM();				//开始音乐
void ChangeBGM();				//改变音乐
void EndBGM();					//结束音乐
int isin2();					//设置界面的判定
int isClick2();					//设置界面的判定
void start();					//开始游戏界面
void setting();					//设置界面
void help();					//帮助界面
int isin1();					//判断鼠标是否在框内
int isClick1();					//判断鼠标是否点击
void menu();				//创建菜单画面

ExMessage msg;
clock_t start_t, end_t;
int main(void)
{
	initgraph(1536,864);
	BeginBGM();
	menu();
	return 0;
}

void menu()
{
	int h, w;
	IMAGE img1;
	loadimage(&img1, "./20.png", 1536,864);
	putimage(0, 0, &img1);
	setfillcolor(WHITE);
	setbkmode(TRANSPARENT);
	setlinecolor(RGB(38,155,185));
	settextstyle(50,20, "Consolas");
	fillrectangle(690, 300, 830, 360);
	fillrectangle(690, 420, 830, 480);
	fillrectangle(690, 540, 830, 600);
	fillrectangle(690, 660, 830, 720);
	settextcolor(RGB(49,34,238));
	char arr1[] = "开始";
	char arr2[] = "设置";
	char arr3[] = "帮助";
	char arr4[] = "退出";
	h = (60-textheight(arr1))/2;
	w = (140 - textwidth(arr1))/2;
	outtextxy(690 + w, 300 + h, arr1);

	h = (60 - textheight(arr2)) / 2;
	w = (140 - textwidth(arr2)) / 2;
	outtextxy(690 + w, 420 + h, arr2);

	h = (60 - textheight(arr3)) / 2;
	w = (140 - textwidth(arr3)) / 2;
	outtextxy(690 + w, 540 + h, arr3);

	h = (60 - textheight(arr4)) / 2;
	w = (140 - textwidth(arr4)) / 2;
	outtextxy(690 + w, 660 + h, arr4);
	int op = 0;
	while (1)
	{
		msg.message = WM_RBUTTONDOWN;
		peekmessage(&msg, EM_MOUSE);
		op = isClick1();
		switch (op)
		{
		case 1:start(); break;
		case 2:setting(); break;
		case 3:help(); break;
		case 4:exit(0); break;
		}
	}
}
int isin1()
{
	if (msg.x > 690 && msg.x < 830 && msg.y>300 && msg.y < 360)
	{
		return 1;
	}
	else if (msg.x > 690 && msg.x < 830 && msg.y>420 && msg.y < 480)
	{
		return 2;
	}
	else if (msg.x > 690 && msg.x < 830 && msg.y>540 && msg.y < 600)
	{
		return 3;
	}
	else if (msg.x > 690 && msg.x < 830 && msg.y>660 && msg.y < 720)
	{
		return 4;
	}
	else
		return 0;
}
int isClick1()
{
	if (isin1())
		if (msg.message == WM_LBUTTONDOWN)
		return isin1();
}
void start()
{
	msg.message = WM_RBUTTONDOWN;
	cleardevice();
	position pos[16];
	int pos1 = 0;
	for (int x1 = 618; x1 < 1438; x1 += 205)
	{
		for (int y1 = 18; y1 < 838; y1 += 205)
		{
			pos[pos1].x = x1;
			pos[pos1].y = y1;
			pos1++;
		}
	}
	IMAGE img4;
	loadimage(&img4, "./26.png", 1536, 864);
	putimage(0, 0, &img4);
	setlinecolor(BLACK);
	rectangle(618, 18, 1438, 838);
	line(823, 18, 823, 838);
	line(1028, 18, 1028, 838);
	line(1233, 18, 1233, 838);

	line(618, 223, 1438, 223);
	line(618, 428, 1438, 428);
	line(618, 633, 1438, 633);
	

	IMAGE p1;
	char* s1[8];
	char arr1[] = "./1.jpg";
	char arr2[] = "./2.jpg";
	char arr3[] = "./3.jpg";
	char arr4[] = "./4.jpg";
	char arr5[] = "./5.jpg";
	char arr6[] = "./6.jpg";
	char arr7[] = "./7.jpg";
	char arr8[] = "./8.jpg";
	s1[0] = arr1;
	s1[1] = arr2;
	s1[2] = arr3;
	s1[3] = arr4;
	s1[4] = arr5;
	s1[5] = arr6;
	s1[6] = arr7;
	s1[7] = arr8;
	char* s2[16];
	char arr31[] = "./31.gif";
	char arr32[] = "./32.gif";
	char arr33[] = "./33.gif";
	char arr34[] = "./34.gif";
	char arr35[] = "./35.gif";
	char arr36[] = "./36.gif";
	char arr37[] = "./37.gif";
	char arr38[] = "./38.gif";
	char arr39[] = "./39.gif";
	char arr40[] = "./40.gif";
	char arr41[] = "./41.gif";
	char arr42[] = "./42.gif";
	char arr43[] = "./43.gif";
	char arr44[] = "./44.gif";
	char arr45[] = "./45.gif";
	char arr46[] = "./46.gif";
	s2[0] = arr31;
	s2[1] = arr32;
	s2[2] = arr33;
	s2[3] = arr34;
	s2[4] = arr35;
	s2[5] = arr36;
	s2[6] = arr37;
	s2[7] = arr38;
	s2[8] = arr39;
	s2[9] = arr40;
	s2[10] = arr41;
	s2[11] = arr42;
	s2[12] = arr43;
	s2[13] = arr44;
	s2[14] = arr45;
	s2[15] = arr46;
	int x, y;				//记录第一次点击图片的xy坐标
	int temp = -1;			//记录上一次的随机图片的标号
	int flag = 0;			//判断鼠标点击次数
	int i = 0;
	int count = 0;			//用于判断结束条件
	int tan = -1;				//记录上次的格子编号
	int randarr[16] = {0};
	start_t = clock();
	Creatrandarr(randarr);
	int op = 0;
	while (1)
	{
		//count = 8;			测试用
		peekmessage(&msg, EM_MOUSE);
		op = isClick3();
		switch (op)
		{
		case 1:
			flag++; loadimage(&p1, s1[randarr[0]-1], 205, 205); putimage(pos[0].x, pos[0].y, &p1);
			if (flag % 2 == 0)
			{
				if (randarr[0] != temp)
				{
					Sleep(1000);
					loadimage(&p1, "./cover.png", 205, 205); putimage(x, y, &p1); putimage(pos[0].x, pos[0].y, &p1);
				}
				else
				{
					count++;
					Sleep(1000);
					loadimage(&p1, s2[tan], 205, 205); putimage(x, y, &p1);
					loadimage(&p1, s2[0], 205, 205); putimage(pos[0].x, pos[0].y, &p1);
				}
			}
			else
			{
				temp = randarr[0];
				x = pos[0].x;
				y = pos[0].y;
				tan = 0;
			}
			break;
		case 2:
			flag++; loadimage(&p1, s1[randarr[1]-1], 205, 205); putimage(pos[1].x, pos[1].y, &p1);
			if (flag % 2 == 0)
			{
				if (randarr[1] != temp)
				{
					Sleep(1000);
					loadimage(&p1, "./cover.png", 205, 205); putimage(x, y, &p1); putimage(pos[1].x, pos[1].y, &p1);
				}
				else
				{
					count++;
					Sleep(1000);
					loadimage(&p1, s2[tan], 205, 205); putimage(x, y, &p1);
					loadimage(&p1, s2[1], 205, 205); putimage(pos[1].x, pos[1].y, &p1);
				}
			}
			else
			{
				temp = randarr[1];
				x = pos[1].x;
				y = pos[1].y;
				tan = 1;
			}
			break;
		case 3:
			flag++; loadimage(&p1, s1[randarr[2]-1], 205, 205); putimage(pos[2].x, pos[2].y, &p1);
			if (flag % 2 == 0)
			{
				if (randarr[2] != temp)
				{
					Sleep(1000);
					loadimage(&p1, "./cover.png", 205, 205); putimage(x, y, &p1); putimage(pos[2].x, pos[2].y, &p1);
				}
				else
				{
					count++;
					Sleep(1000);
					loadimage(&p1, s2[tan], 205, 205); putimage(x, y, &p1);
					loadimage(&p1, s2[2], 205, 205); putimage(pos[2].x, pos[2].y, &p1);
				}
			}
			else
			{
				temp = randarr[2];
				x = pos[2].x;
				y = pos[2].y;
				tan = 2;
			}
			break;
		case 4:
			flag++; loadimage(&p1, s1[randarr[3]-1], 205, 205); putimage(pos[3].x, pos[3].y, &p1);
			if (flag % 2 == 0)
			{
				if (randarr[3] != temp)
				{
					Sleep(1000);
					loadimage(&p1, "./cover.png", 205, 205); putimage(x, y, &p1); putimage(pos[3].x, pos[3].y, &p1);
				}
				else
				{
					count++;
					Sleep(1000);
					loadimage(&p1, s2[tan], 205, 205); putimage(x, y, &p1);
					loadimage(&p1, s2[3], 205, 205); putimage(pos[3].x, pos[3].y, &p1);
				}
			}
			else
			{
				temp = randarr[3];
				x = pos[3].x;
				y = pos[3].y;
				tan = 3;
			}
			break;
		case 5:
			flag++; loadimage(&p1, s1[randarr[4]-1], 205, 205); putimage(pos[4].x, pos[4].y, &p1);
			if (flag % 2 == 0)
			{
				if (randarr[4] != temp)
				{
					Sleep(1000);
					loadimage(&p1, "./cover.png", 205, 205); putimage(x, y, &p1); putimage(pos[4].x, pos[4].y, &p1);
				}
				else
				{
					count++;
					Sleep(1000);
					loadimage(&p1, s2[tan], 205, 205); putimage(x, y, &p1);
					loadimage(&p1, s2[4], 205, 205); putimage(pos[4].x, pos[4].y, &p1);
				}
			}
			else
			{
				temp = randarr[4];
				x = pos[4].x;
				y = pos[4].y;
				tan = 4;
			}
			break;
		case 6:
			flag++; loadimage(&p1, s1[randarr[5]-1], 205, 205); putimage(pos[5].x, pos[5].y, &p1);
			if (flag % 2 == 0)
			{
				if (randarr[5] != temp)
				{
					Sleep(1000);
					loadimage(&p1, "./cover.png", 205, 205); putimage(x, y, &p1); putimage(pos[5].x, pos[5].y, &p1);
				}
				else
				{
					count++;
					Sleep(1000);
					loadimage(&p1, s2[tan], 205, 205); putimage(x, y, &p1);
					loadimage(&p1, s2[5], 205, 205); putimage(pos[5].x, pos[5].y, &p1);
				}
			}
			else
			{
				temp = randarr[5];
				x = pos[5].x;
				y = pos[5].y;
				tan = 5;
			}
			break;
		case 7:
			flag++; loadimage(&p1, s1[randarr[6]-1], 205, 205); putimage(pos[6].x, pos[6].y, &p1);
			if (flag % 2 == 0)
			{
				if (randarr[6] != temp)
				{
					Sleep(1000);
					loadimage(&p1, "./cover.png", 205, 205); putimage(x, y, &p1); putimage(pos[6].x, pos[6].y, &p1);
				}
				else
				{
					count++;
					Sleep(1000);
					loadimage(&p1, s2[tan], 205, 205); putimage(x, y, &p1);
					loadimage(&p1, s2[6], 205, 205); putimage(pos[6].x, pos[6].y, &p1);
				}
			}
			else
			{
				temp = randarr[6];
				x = pos[6].x;
				y = pos[6].y;
				tan = 6;
			}
			break;
		case 8:
			flag++; loadimage(&p1, s1[randarr[7]-1], 205, 205); putimage(pos[7].x, pos[7].y, &p1);
			if (flag % 2 == 0)
			{
				if (randarr[7] != temp)
				{
					Sleep(1000);
					loadimage(&p1, "./cover.png", 205, 205); putimage(x, y, &p1); putimage(pos[7].x, pos[7].y, &p1);
				}
				else
				{
					count++;
					Sleep(1000);
					loadimage(&p1, s2[tan], 205, 205); putimage(x, y, &p1);
					loadimage(&p1, s2[7], 205, 205); putimage(pos[7].x, pos[7].y, &p1);
				}
			}
			else
			{
				temp = randarr[7];
				x = pos[7].x;
				y = pos[7].y;
				tan = 7;
			}
			break;
		case 9:
			flag++; loadimage(&p1, s1[randarr[8]-1], 205, 205); putimage(pos[8].x, pos[8].y, &p1);
			if (flag % 2 == 0)
			{
				if (randarr[8] != temp)
				{
					Sleep(1000);
					loadimage(&p1, "./cover.png", 205, 205); putimage(x, y, &p1); putimage(pos[8].x, pos[8].y, &p1);
				}
				else
				{
					count++;
					Sleep(1000);
					loadimage(&p1, s2[tan], 205, 205); putimage(x, y, &p1);
					loadimage(&p1, s2[8], 205, 205); putimage(pos[8].x, pos[8].y, &p1);
				}
			}
			else
			{
				temp = randarr[8];
				x = pos[8].x;
				y = pos[8].y;
				tan = 8;
			}
			break;
		case 10:
			flag++; loadimage(&p1, s1[randarr[9]-1], 205, 205); putimage(pos[9].x, pos[9].y, &p1);
			if (flag % 2 == 0)
			{
				if (randarr[9] != temp)
				{
					Sleep(1000);
					loadimage(&p1, "./cover.png", 205, 205); putimage(x, y, &p1); putimage(pos[9].x, pos[9].y, &p1);
				}
				else
				{
					count++;
					Sleep(1000);
					loadimage(&p1, s2[tan], 205, 205); putimage(x, y, &p1);
					loadimage(&p1, s2[9], 205, 205); putimage(pos[9].x, pos[9].y, &p1);
				}
			}
			else
			{
				temp = randarr[9];
				x = pos[9].x;
				y = pos[9].y;
				tan = 9;
			}
			break;
		case 11:
			flag++; loadimage(&p1, s1[randarr[10]-1], 205, 205); putimage(pos[10].x, pos[10].y, &p1);
			if (flag % 2 == 0)
			{
				if (randarr[10] != temp)
				{
					Sleep(1000);
					loadimage(&p1, "./cover.png", 205, 205); putimage(x, y, &p1); putimage(pos[10].x, pos[10].y, &p1);
				}
				else
				{
					count++;
					Sleep(1000);
					loadimage(&p1, s2[tan], 205, 205); putimage(x, y, &p1);
					loadimage(&p1, s2[10], 205, 205); putimage(pos[10].x, pos[10].y, &p1);
				}
			}
			else
			{
				temp = randarr[10];
				x = pos[10].x;
				y = pos[10].y;
				tan = 10;
			}
			break;
		case 12:
			flag++; loadimage(&p1, s1[randarr[11]-1], 205, 205); putimage(pos[11].x, pos[11].y, &p1);
			if (flag % 2 == 0)
			{
				if (randarr[11] != temp)
				{
					Sleep(1000);
					loadimage(&p1, "./cover.png", 205, 205); putimage(x, y, &p1); putimage(pos[11].x, pos[11].y, &p1);
				}
				else
				{
					count++;
					Sleep(1000);
					loadimage(&p1, s2[tan], 205, 205); putimage(x, y, &p1);
					loadimage(&p1, s2[11], 205, 205); putimage(pos[11].x, pos[11].y, &p1);
				}
			}
			else
			{
				temp = randarr[11];
				x = pos[11].x;
				y = pos[11].y;
				tan = 11;
			}
			break;
		case 13:
			flag++; loadimage(&p1, s1[randarr[12]-1], 205, 205); putimage(pos[12].x, pos[12].y, &p1);
			if (flag % 2 == 0)
			{
				if (randarr[12] != temp)
				{
					Sleep(1000);
					loadimage(&p1, "./cover.png", 205, 205); putimage(x, y, &p1); putimage(pos[12].x, pos[12].y, &p1);
				}
				else
				{
					count++;
					Sleep(1000);
					loadimage(&p1, s2[tan], 205, 205); putimage(x, y, &p1);
					loadimage(&p1, s2[12], 205, 205); putimage(pos[12].x, pos[12].y, &p1);
				}
			}
			else
			{
				temp = randarr[12];
				x = pos[12].x;
				y = pos[12].y;
				tan = 12;
			}
			break;
		case 14:
			flag++; loadimage(&p1, s1[randarr[13]-1], 205, 205); putimage(pos[13].x, pos[13].y, &p1);
			if (flag % 2 == 0)
			{
				if (randarr[13] != temp)
				{
					Sleep(1000);
					loadimage(&p1, "./cover.png", 205, 205); putimage(x, y, &p1); putimage(pos[13].x, pos[13].y, &p1);
				}
				else
				{
					count++;
					Sleep(1000);
					loadimage(&p1, s2[tan], 205, 205); putimage(x, y, &p1);
					loadimage(&p1, s2[13], 205, 205); putimage(pos[13].x, pos[13].y, &p1);
				}
			}
			else
			{
				temp = randarr[13];
				x = pos[13].x;
				y = pos[13].y;
				tan = 13;
			}
			break;
		case 15:
			flag++; loadimage(&p1, s1[randarr[14]-1], 205, 205); putimage(pos[14].x, pos[14].y, &p1);
			if (flag % 2 == 0)
			{
				if (randarr[14] != temp)
				{
					Sleep(1000);
					loadimage(&p1, "./cover.png", 205, 205); putimage(x, y, &p1); putimage(pos[14].x, pos[14].y, &p1);
				}
				else
				{
					count++;
					Sleep(1000);
					loadimage(&p1, s2[tan], 205, 205); putimage(x, y, &p1);
					loadimage(&p1, s2[14], 205, 205); putimage(pos[14].x, pos[14].y, &p1);
				}
			}
			else
			{
				temp = randarr[14];
				x = pos[14].x;
				y = pos[14].y;
				tan = 14;
			}
			break;
		case 16:
			flag++; loadimage(&p1, s1[randarr[15]-1], 205, 205); putimage(pos[15].x, pos[15].y, &p1);
			if (flag % 2 == 0)
			{
				if (randarr[15] != temp)
				{
					Sleep(1000);
					loadimage(&p1, "./cover.png", 205, 205); putimage(x, y, &p1); putimage(pos[15].x, pos[15].y, &p1);
				}
				else
				{
					count++;
					Sleep(1000);
					loadimage(&p1, s2[tan], 205, 205); putimage(x, y, &p1);
					loadimage(&p1, s2[15], 205, 205); putimage(pos[15].x, pos[15].y, &p1);
				}
			}
			else
			{
				temp = randarr[15];
				x = pos[15].x;
				y = pos[15].y;
				tan = 15;
			}
			break;
		}
		msg.message = WM_RBUTTONDOWN;
		if (count == 8)
		{
			end_t = clock();
			Sleep(1000);
			End();
		}
	}
}
void setting()
{
	msg.message = WM_RBUTTONDOWN;
	int h, w;
	cleardevice();
	IMAGE img2;
	loadimage(&img2, "./24.png", 1536, 864);
	putimage(0, 0, &img2);
	settextcolor(RGB(153, 217, 234));
	settextstyle(40, 18, "Consolas");
	char arr1[] = "切换音乐";
	char arr2[] = "暂停音乐";
	char arr3[] = "返回主界面";
	fillrectangle(670, 340, 850, 430);
	fillrectangle(670, 500, 850, 590);
	fillrectangle(670, 660, 850, 750);
	h = (90 - textheight(arr1)) / 2;
	w = (180 - textwidth(arr1)) / 2;
	outtextxy(670 + w, 340 + h, arr1);

	h = (90 - textheight(arr2)) / 2;
	w = (180 - textwidth(arr2)) / 2;
	outtextxy(670 + w, 500 + h, arr2);

	h = (90 - textheight(arr3)) / 2;
	w = (180 - textwidth(arr3)) / 2;
	outtextxy(670 + w, 660 + h, arr3);
	int op = 0;
	while (1)
	{
		peekmessage(&msg, EM_MOUSE);
		op = isClick2();
		switch (op)
		{
		case 1:ChangeBGM(); break;
		case 2:EndBGM(); break;
		case 3:menu(); break;
		}
	}
}
void help()
{
	msg.message = WM_RBUTTONDOWN;
	cleardevice();
	IMAGE img3;
	loadimage(&img3, "./22.png", 1536, 864);
	putimage(0, 0, &img3);
	setlinecolor((RGB(44, 35, 203)));
	fillrectangle(885, 40, 1385, 240);
	char arr1[] = "游戏说明";
	int w = (500 - textwidth(arr1)) / 2;
	outtextxy(885 + w, 50, arr1);
	int h1 = textheight(arr1)+30;
	settextcolor(BLACK);
	settextstyle(25, 10, "Consolas");
	outtextxy(885 + 20, 50 + h1 + 2, "该游戏由dl设计，玩法为点击两张图片，如果相同就进");
	int h2 = textheight("该游戏由dl设计，玩法为点击两张图片，如果相同就进");
	outtextxy(885 , 50 + h1 + 2+h2, "行消除,消除完所有图片即为胜利");
	fillrectangle(1050, 680, 1220, 756);
	settextcolor(BLUE);
	settextstyle(50, 30, "Consolas");
	char arr2[] = "返回";
	h1 = (76 - textheight(arr2)) / 2;
	w = (170 - textwidth(arr2)) / 2;
	outtextxy(1050 + w, 680 + h1, arr2);
	while (1)
	{
		peekmessage(&msg, EM_MOUSE);
		if (msg.x > 1050 && msg.x < 1220 && msg.y>680&& msg.y < 756)
		{
			if (msg.message == WM_LBUTTONDOWN)
				menu();
		}
	}
}
int isin2()
{
	if (msg.x > 670 && msg.x < 850 && msg.y>340 && msg.y < 430)
		return 1;
	else if (msg.x > 670 && msg.x < 850 && msg.y>500 && msg.y < 590)
		return 2;
	else if (msg.x > 670 && msg.x < 850 && msg.y>660 && msg.y < 750)
		return 3;
	return 0;
}
int isClick2()
{
	if (isin2())
		if (msg.message == WM_LBUTTONDOWN)
			return isin2();
}
void ChangeBGM()
{
	mciSendString("close ./3.mp3", 0, 0, 0);
	mciSendString("open ./2.mp3 ", 0, 0, 0);
	mciSendString("play ./2.mp3 repeat", 0, 0, 0);

}
void EndBGM()
{
	mciSendString("close ./3.mp3", 0, 0, 0);
	mciSendString("close ./2.mp3 ", 0, 0, 0);
}
void BeginBGM()
{
	mciSendString("open ./3.mp3 alias BGM1", 0, 0, 0);
	mciSendString("play BGM1 repeat", 0, 0, 0);
}
int isin3()
{
	if (msg.x > 618 && msg.x < 823 && msg.y>18 && msg.y < 223)
		return 1;
	else if (msg.x > 618 && msg.x < 823 && msg.y>223 && msg.y < 428)
		return 2;
	else if (msg.x > 618 && msg.x < 823 && msg.y>428 && msg.y < 633)
		return 3;
	else if (msg.x > 618 && msg.x < 823 && msg.y>633 && msg.y < 838)
		return 4;
	else if (msg.x > 823 && msg.x < 1028 && msg.y>18 && msg.y < 223)
		return 5;
	else if (msg.x > 823 && msg.x < 1028 && msg.y>223 && msg.y < 428)
		return 6;
	else if (msg.x > 823 && msg.x < 1028 && msg.y>428 && msg.y < 633)
		return 7;
	else if (msg.x > 823 && msg.x < 1028 && msg.y>633 && msg.y < 838)
		return 8;
	else if (msg.x > 1028 && msg.x < 1233 && msg.y>18 && msg.y < 223)
		return 9;
	else if (msg.x > 1028 && msg.x < 1233 && msg.y>223 && msg.y < 428)
		return 10;
	else if (msg.x > 1028 && msg.x < 1233 && msg.y>428 && msg.y < 633)
		return 11;
	else if (msg.x > 1028 && msg.x < 1233 && msg.y>633 && msg.y < 838)
		return 12;
	else if (msg.x > 1233 && msg.x < 1438 && msg.y>18 && msg.y < 223)
		return 13;
	else if (msg.x > 1233 && msg.x < 1438 && msg.y>223 && msg.y < 428)
		return 14;
	else if (msg.x > 1233 && msg.x < 1438 && msg.y>428 && msg.y < 633)
		return 15;
	else if (msg.x > 1233 && msg.x < 1438 && msg.y>633 && msg.y < 838)
		return 16;
	else
		return 0;
}
int isClick3()
{
	if (isin3())
	{
		if (msg.message == WM_LBUTTONDOWN)
			return isin3();
	}
}
void Creatrandarr(int* randarr)
{
	srand((unsigned)time(NULL));
	int i = 0, a;
	for (i = 0; i < 8; i++)
	{
		a = 1+rand() % 8;
		if (issame1(randarr,a,i))
		{
			i--;
		}
		else
		{
			randarr[i] = a;
		}
	}
	for (i = 8; i < 16; i++)
	{
		a = 1+rand() % 8;
		if (issame2(randarr,a,i))
		{
			i--;
		}
		else
		{
			randarr[i] = a;
		}
	}
}
int issame1(int *arr,int num,int i)
{
	int flag = 0;
	for (int j = 0; j < 8; j++)
	{
		if (j == i)
			continue;
		if (num == arr[j])
			flag = 1;
	}
	return flag;
}
int issame2(int* arr, int num, int i)
{
	int flag = 0;
	for (int j = 8; j < 16; j++)
	{
		if (j == i)
			continue;
		if (num == arr[j])
			flag = 1;
	}
	return flag;
}
void num_to_char(long num, char* string)
{
	int len;
	int i = 0;
	while (num)
	{
		string[i++] = (num % 10) + '0';
		num = num / 10;
	}
	len = strlen(string) - 1;
	char* hstring = string;
	char* tstring = string + len;
	char temp;
	while (hstring < tstring)
	{
		temp = *hstring;
		*hstring = *tstring;
		*tstring = temp;
		hstring++;
		tstring--;
	}
}
void End()
{
	msg.message = WM_RBUTTONDOWN;
	cleardevice();
	IMAGE img5;
	loadimage(&img5, "./25.png", 1536, 864);
	putimage(0, 0, &img5);
	setlinecolor(RGB(153, 217, 234));
	settextcolor(RGB(223, 87, 217));
	fillrectangle(236, 77, 663, 200);
	fillrectangle(350, 720, 488, 815);
	int h, w;
	char arr1[] = "嘁";
	char arr2[] = "恭喜通过";
	char arr3[] = "返回";
	settextstyle(50, 20, "Consolas");
	h = textheight(arr1);
	w = (427-textwidth(arr1))/2;
	outtextxy(236 + w, 77 + 5, arr1);
	w = (427 - textwidth(arr2)) / 2;
	outtextxy(236 + w, 77 + 5 + h + 10, arr2);
	h = (95 - textheight(arr3)) / 2;
	w = (138 - textwidth(arr3))/2;
	outtextxy(350 + w, 720 + h, arr3);
	IMAGE img6;
	loadimage(&img6, "./0.jfif", 429, 241);
	putimage(236, 250, &img6);						//236+429=665   250+241=491
	char arr[] = "此次用时 ";
	w = (429-textwidth(arr))/2;
	long x = (long)(end_t - start_t)/1000;
	outtextxy(230 + w, 520, arr);
	char ti[32] = "";
	num_to_char(x, ti);
	int len = strlen(ti);
	ti[len] = 'S';
	h = textheight(arr);
	outtextxy(230 + w+50 , 530+h, ti);
	while (1)
	{
		peekmessage(&msg, EM_MOUSE);
		if (msg.x > 350 && msg.x < 488 && msg.y>720 && msg.y < 815)
			if (msg.message == WM_LBUTTONDOWN)
				menu();
	}
	system("pause");
}