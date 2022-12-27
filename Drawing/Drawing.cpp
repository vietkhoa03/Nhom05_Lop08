#include "graphics.h"
#include <dos.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


void createTree()
{
    line(500, 200, 400, 260);//AB
    line(400, 260, 330, 340);//BD
    line(600, 260, 520, 340);//CE
    line(500, 200, 600, 260);//AC
    line(600, 260, 700, 340);//CF
    line(700, 340, 640, 420);//FH
    line(700, 340, 770, 420);//FJ
    line(520, 340, 560, 420);//EG

    circle1(500, 200, 40);//A
    drawText(485, 183, "A");
    circle1(400, 260, 40);//B
    drawText(385, 243, "B");
    circle1(600, 260, 40);//C
    drawText(585, 243, "C");
    circle1(330, 340, 40);//D
    drawText(315, 322, "D");
    circle1(520, 340, 40);//E
    drawText(507, 322, "E");
    circle1(700, 340, 40);//F
    drawText(685, 322, "F");
    circle1(560, 420, 40);//G
    drawText(544, 402, "G");
    circle1(640, 420, 40);//H
    drawText(623, 402, "H");
    circle1(770, 420, 40);//J
    drawText(755, 402, "J");
}

void unThreadInorder()
{
    //ve hang doi
    rectangle1(330, 540, 370, 500);
    rectangle1(380, 540, 420, 500);
    rectangle1(430, 540, 470, 500);
    rectangle1(480, 540, 520, 500);
    rectangle1(530, 540, 570, 500);
    rectangle1(580, 540, 620, 500);
    rectangle1(630, 540, 670, 500);
    rectangle1(680, 540, 720, 500);
    rectangle1(730, 540, 770, 500);

    //inorder    D B A E G C H F J
    circle2(330, 340, 40);//D
    drawText(315, 322, "D");
    Sleep(500);
    drawText(335, 503, "D");
    Sleep(1000);

    circle2(400, 260, 40);//B
    drawText(385, 243, "B");
    Sleep(500);
    drawText(385, 503, "B");
    Sleep(1000);

    circle2(500, 200, 40);//A
    drawText(485, 183, "A");
    Sleep(500);
    drawText(435, 503, "A");
    Sleep(1000);

    circle2(520, 340, 40);//E
    drawText(507, 322, "E");
    Sleep(500);
    drawText(485, 503, "E");
    Sleep(1000);

    circle2(560, 420, 40);//G
    drawText(544, 402, "G");
    Sleep(500);
    drawText(535, 503, "G");
    Sleep(1000);

    circle2(600, 260, 40);//C
    drawText(585, 243, "C");
    Sleep(500);
    drawText(585, 503, "C");
    Sleep(1000);

    circle2(640, 420, 40);//H
    drawText(623, 402, "H");
    Sleep(500);
    drawText(635, 503, "H");
    Sleep(1000);

    circle2(700, 340, 40);//F
    drawText(685, 322, "F");
    Sleep(500);
    drawText(685, 503, "F");
    Sleep(1000);

    circle2(770, 420, 40);//J
    drawText(755, 402, "J");
    Sleep(500);
    drawText(735, 503, "J");
    Sleep(1000);

}

void unThreadPreorder()
{
    //ve hang doi
    rectangle1(330, 540, 370, 500);
    rectangle1(380, 540, 420, 500);
    rectangle1(430, 540, 470, 500);
    rectangle1(480, 540, 520, 500);
    rectangle1(530, 540, 570, 500);
    rectangle1(580, 540, 620, 500);
    rectangle1(630, 540, 670, 500);
    rectangle1(680, 540, 720, 500);
    rectangle1(730, 540, 770, 500);

    //Preorder: A B D C E G F H J

    circle3(500, 200, 40);//A
    drawText(485, 183, "A");
    Sleep(500);
    drawText(335, 503, "A");
    Sleep(1000);

    circle3(400, 260, 40);//B
    drawText(385, 243, "B");
    Sleep(500);
    drawText(385, 503, "B");
    Sleep(1000);

    circle3(330, 340, 40);//D
    drawText(315, 322, "D");
    Sleep(500);
    drawText(435, 503, "D");
    Sleep(1000);

    circle3(600, 260, 40);//C
    drawText(585, 243, "C");
    Sleep(500);
    drawText(485, 503, "C");
    Sleep(1000);

    circle3(520, 340, 40);//E
    drawText(507, 322, "E");
    Sleep(500);
    drawText(535, 503, "E");
    Sleep(1000);

    circle3(560, 420, 40);//G
    drawText(544, 402, "G");
    Sleep(500);
    drawText(585, 503, "G");
    Sleep(1000);

    circle3(700, 340, 40);//F
    drawText(685, 322, "F");
    Sleep(500);
    drawText(635, 503, "F");
    Sleep(1000);

    circle3(640, 420, 40);//H
    drawText(623, 402, "H");
    Sleep(500);
    drawText(685, 503, "H");
    Sleep(1000);

    circle3(770, 420, 40);//J
    drawText(755, 402, "J");
    Sleep(500);
    drawText(735, 503, "J");
    Sleep(1000);
}

void unThreadPostorder()
{
    //ve hang doi
    rectangle1(330, 540, 370, 500);
    rectangle1(380, 540, 420, 500);
    rectangle1(430, 540, 470, 500);
    rectangle1(480, 540, 520, 500);
    rectangle1(530, 540, 570, 500);
    rectangle1(580, 540, 620, 500);
    rectangle1(630, 540, 670, 500);
    rectangle1(680, 540, 720, 500);
    rectangle1(730, 540, 770, 500);

    //Postorder : D B G E H J F C A

    circle4(330, 340, 40);//D
    drawText(315, 322, "D");
    Sleep(500);
    drawText(335, 503, "D");
    Sleep(1000);

    circle4(400, 260, 40);//B
    drawText(385, 243, "B");
    Sleep(500);
    drawText(385, 503, "B");
    Sleep(1000);

    circle4(560, 420, 40);//G
    drawText(544, 402, "G");
    Sleep(500);
    drawText(435, 503, "G");
    Sleep(1000);

    circle4(520, 340, 40);//E
    drawText(507, 322, "E");
    Sleep(500);
    drawText(485, 503, "E");
    Sleep(1000);

    circle4(640, 420, 40);//H
    drawText(623, 402, "H");
    Sleep(500);
    drawText(535, 503, "H");
    Sleep(1000);

    circle4(770, 420, 40);//J
    drawText(755, 402, "J");
    Sleep(500);
    drawText(585, 503, "J");
    Sleep(1000);

    circle4(700, 340, 40);//F
    drawText(685, 322, "F");
    Sleep(500);
    drawText(635, 503, "F");
    Sleep(1000);

    circle4(600, 260, 40);//C
    drawText(585, 243, "C");
    Sleep(500);
    drawText(685, 503, "C");
    Sleep(1000);

    circle4(500, 200, 40);//A
    drawText(485, 183, "A");
    Sleep(500);
    drawText(735, 503, "A");
    Sleep(1000);
}

void threadInorder()
{
    //ve hang doi
    rectangle1(330, 540, 370, 500);
    rectangle1(380, 540, 420, 500);
    rectangle1(430, 540, 470, 500);
    rectangle1(480, 540, 520, 500);
    rectangle1(530, 540, 570, 500);
    rectangle1(580, 540, 620, 500);
    rectangle1(630, 540, 670, 500);
    rectangle1(680, 540, 720, 500);
    rectangle1(730, 540, 770, 500);

    //ve nhanh cay
    line(470, 200, 390, 260);//AB
    line(370, 260, 320, 340);//BD
    line(560, 260, 510, 340);//CE
    line(540, 200, 610, 260);//AC
    line(640, 260, 700, 340);//CF
    line(660, 340, 660, 420);//FH
    line(740, 340, 790, 420);//FJ
    line(560, 340, 540, 420);//EG
    line(570, 140, 490, 200);//T->A

    line(660, 130, 680, 130);//rT->T
    line(680, 130, 680, 100);
    line(680, 100, 640, 100);
    line(640, 100, 640, 130);

    line(570, 140, 490, 200);//T->A
    line(289, 340, 289, 110);//D->T
    line(289, 110, 600, 110);
    line(600, 110, 600, 125);

    line(371, 340, 400, 340);//D->B
    line(400, 340, 400, 260);

    line(441, 260, 500, 260);//B->A
    line(500, 260, 500, 200);

    line(500, 420, 520, 340);//G->E
    line(480, 340, 500, 200);//E->A
    line(830, 420, 830, 140);//J->T
    line(830, 140, 640, 140);

    line(700, 420, 700, 340);//H->F
    line(750, 420, 700, 340);//J->F
    line(622, 420, 600, 260);//H->C
    line(578, 420, 600, 260);//G->C

    //ve cac node
    rectangle1(580, 125, 620, 155);
    drawText(585, 123, "T");
    rectangle1(540, 125, 578, 155);
    rectangle1(622, 125, 660, 155);

    rectangle1(480, 185, 520, 215);//A
    drawText(485, 183, "A");
    rectangle1(440, 185, 478, 215);
    rectangle1(522, 185, 560, 215);

    rectangle1(380, 245, 420, 275);//B
    drawText(385, 243, "B");
    rectangle1(340, 245, 378, 275);
    rectangle1(422, 245, 460, 275);

    rectangle1(580, 245, 620, 275);//C
    drawText(585, 243, "C");
    rectangle1(540, 245, 578, 275);
    rectangle1(622, 245, 660, 275);

    rectangle1(310, 325, 350, 355);//D
    drawText(315, 322, "D");
    rectangle1(270, 325, 308, 355);
    rectangle1(352, 325, 390, 355);

    rectangle1(500, 325, 540, 355);//E
    drawText(507, 322, "E");
    rectangle1(460, 325, 498, 355);
    rectangle1(542, 325, 580, 355);

    rectangle1(680, 325, 720, 355);//F
    drawText(685, 322, "F");
    rectangle1(640, 325, 678, 355);
    rectangle1(722, 325, 760, 355);

    rectangle1(520, 405, 560, 435);//G
    drawText(524, 402, "G");
    rectangle1(480, 405, 518, 435);
    rectangle1(562, 405, 595, 435);

    rectangle1(640, 405, 680, 435);//H
    drawText(643, 402, "H");
    rectangle1(605, 405, 638, 435);
    rectangle1(682, 405, 720, 435);

    rectangle1(770, 405, 810, 435);//J
    drawText(775, 402, "J");
    rectangle1(730, 405, 768, 435);
    rectangle1(812, 405, 850, 435);

    //duyet theo Inorder

    Sleep(2000);
    setcolor(8);
    line(570, 140, 490, 200);//T->A
    Sleep(1000);

    rectangle3(480, 185, 520, 215);//A
    drawText(485, 183, "A");
    Sleep(1000);

    line(470, 200, 390, 260);//AB
    Sleep(1000);

    rectangle3(380, 245, 420, 275);//B
    drawText(385, 243, "B");
    Sleep(1000);

    line(370, 260, 320, 340);//BD
    Sleep(1000);

    rectangle3(310, 325, 350, 355);//D
    drawText(315, 322, "D");
    Sleep(1000);

    rectangle2(310, 325, 350, 355);//D
    drawText(315, 322, "D");
    Sleep(500);
    drawText(335, 503, "D");
    Sleep(1000);

    line(289, 340, 289, 110);//D->T
    line(289, 110, 600, 110);
    line(600, 110, 600, 125);
    Sleep(1000);

    line(371, 340, 400, 340);//D->B
    line(400, 340, 400, 260);
    Sleep(1000);

    rectangle2(380, 245, 420, 275);//B
    drawText(385, 243, "B");
    Sleep(500);
    drawText(385, 503, "B");
    Sleep(1000);

    line(441, 260, 500, 260);//B->A
    line(500, 260, 500, 200);
    Sleep(1000);

    rectangle2(480, 185, 520, 215);//A
    drawText(485, 183, "A");
    Sleep(500);
    drawText(435, 503, "A");
    Sleep(1000);

    line(540, 200, 610, 260);//AC
    Sleep(1000);

    rectangle3(580, 245, 620, 275);//C
    drawText(585, 243, "C");
    Sleep(1000);

    line(560, 260, 510, 340);//CE
    Sleep(1000);

    rectangle3(500, 325, 540, 355);//E
    drawText(507, 322, "E");
    Sleep(1000);

    rectangle2(500, 325, 540, 355);//E
    drawText(507, 322, "E");
    Sleep(500);
    drawText(485, 503, "E");
    Sleep(1000);

    line(480, 340, 500, 200);//E->A
    Sleep(1000);

    line(560, 340, 540, 420);//EG
    Sleep(1000);

    rectangle3(520, 405, 560, 435);//G
    drawText(524, 402, "G");
    Sleep(1000);

    rectangle2(520, 405, 560, 435);//G
    drawText(524, 402, "G");
    Sleep(500);
    drawText(535, 503, "G");
    Sleep(1000);

    line(500, 420, 520, 340);//G->E
    Sleep(1000);

    line(578, 420, 600, 260);//G->C
    Sleep(1000);

    rectangle2(580, 245, 620, 275);//C
    drawText(585, 243, "C");
    Sleep(500);
    drawText(585, 503, "C");
    Sleep(1000);

    line(640, 260, 700, 340);//CF
    Sleep(1000);

    rectangle3(680, 325, 720, 355);//F
    drawText(685, 322, "F");
    Sleep(1000);

    line(660, 340, 660, 420);//FH
    Sleep(1000);

    rectangle3(640, 405, 680, 435);//H
    drawText(643, 402, "H");
    Sleep(1000);

    rectangle2(640, 405, 680, 435);//H
    drawText(643, 402, "H");
    Sleep(500);
    drawText(635, 503, "H");
    Sleep(1000);

    line(622, 420, 600, 260);//H->C
    Sleep(1000);

    line(700, 420, 700, 340);//H->F
    Sleep(1000);

    rectangle2(680, 325, 720, 355);//F
    drawText(685, 322, "F");
    Sleep(500);
    drawText(685, 503, "F");
    Sleep(1000);

    line(740, 340, 790, 420);//FJ
    Sleep(1000);

    rectangle3(770, 405, 810, 435);//J
    drawText(775, 402, "J");
    Sleep(1000);

    rectangle2(770, 405, 810, 435);//J
    drawText(775, 402, "J");
    Sleep(500);
    drawText(735, 503, "J");
    Sleep(1000);

    line(750, 420, 700, 340);//J->F
    Sleep(1000);

    line(830, 420, 830, 140);//J->T
    line(830, 140, 640, 140);
    Sleep(1000);

    line(660, 130, 680, 130);//rT->T
    line(680, 130, 680, 100);
    line(680, 100, 640, 100);
    line(640, 100, 640, 130);
}

void threadPreorder()
{
    //ve hang doi
    rectangle1(330, 540, 370, 500);
    rectangle1(380, 540, 420, 500);
    rectangle1(430, 540, 470, 500);
    rectangle1(480, 540, 520, 500);
    rectangle1(530, 540, 570, 500);
    rectangle1(580, 540, 620, 500);
    rectangle1(630, 540, 670, 500);
    rectangle1(680, 540, 720, 500);
    rectangle1(730, 540, 770, 500);

    //ve nhanh cay
    line(470, 200, 390, 260);//AB
    line(370, 260, 320, 340);//BD
    line(560, 260, 510, 340);//CE
    line(540, 200, 610, 260);//AC
    line(640, 260, 700, 340);//CF
    line(660, 340, 660, 420);//FH
    line(740, 340, 790, 420);//FJ
    line(560, 340, 540, 420);//EG
    line(570, 140, 490, 200);//T->A

    line(660, 130, 680, 130);//rT->T
    line(680, 130, 680, 100);
    line(680, 100, 640, 100);
    line(640, 100, 640, 130);

    line(289, 350, 289, 220);//lD->B
    line(289, 220, 400, 220);
    line(400, 220, 400, 250);

    line(450, 260, 330, 330);//rBD
    line(390, 325, 595, 210);//rD->C
    line(595, 210, 595, 265);

    line(475, 325, 620, 265);//lE->C


    line(610, 420, 720, 340);//H->F
    line(575, 410, 720, 340);//G->F

    line(700, 420, 700, 460);//rH->J
    line(700, 460, 790, 460);
    line(790, 420, 790, 460);

    line(660, 420, 660, 470);//lJ->H
    line(660, 470, 747, 470);
    line(747, 420, 747, 470);

    line(500, 420, 520, 340);//G->E

    line(830, 420, 830, 140);//J->T
    line(830, 140, 640, 140);

    //ve cac node
    rectangle1(580, 125, 620, 155);
    drawText(585, 123, "T");
    rectangle1(540, 125, 578, 155);
    rectangle1(622, 125, 660, 155);

    rectangle1(480, 185, 520, 215);//A
    drawText(485, 183, "A");
    rectangle1(440, 185, 478, 215);
    rectangle1(522, 185, 560, 215);

    rectangle1(380, 245, 420, 275);//B
    drawText(385, 243, "B");
    rectangle1(340, 245, 378, 275);
    rectangle1(422, 245, 460, 275);

    rectangle1(580, 245, 620, 275);//C
    drawText(585, 243, "C");
    rectangle1(540, 245, 578, 275);
    rectangle1(622, 245, 660, 275);

    rectangle1(310, 325, 350, 355);//D
    drawText(315, 322, "D");
    rectangle1(270, 325, 308, 355);
    rectangle1(352, 325, 390, 355);

    rectangle1(500, 325, 540, 355);//E
    drawText(507, 322, "E");
    rectangle1(460, 325, 498, 355);
    rectangle1(542, 325, 580, 355);

    rectangle1(680, 325, 720, 355);//F
    drawText(685, 322, "F");
    rectangle1(640, 325, 678, 355);
    rectangle1(722, 325, 760, 355);

    rectangle1(520, 405, 560, 435);//G
    drawText(524, 402, "G");
    rectangle1(480, 405, 518, 435);
    rectangle1(562, 405, 595, 435);

    rectangle1(640, 405, 680, 435);//H
    drawText(643, 402, "H");
    rectangle1(605, 405, 638, 435);
    rectangle1(682, 405, 720, 435);

    rectangle1(770, 405, 810, 435);//J
    drawText(775, 402, "J");
    rectangle1(730, 405, 768, 435);
    rectangle1(812, 405, 850, 435);

    //duyet theo Preorder
    Sleep(2000);
    setcolor(8);
    line(570, 140, 490, 200);//T->A
    Sleep(1000);

    rectangle3(480, 185, 520, 215);//A
    drawText(485, 183, "A");
    Sleep(1000);

    rectangle2(480, 185, 520, 215);//A
    drawText(485, 183, "A");
    Sleep(500);
    drawText(335, 503, "A");
    Sleep(1000);

    line(470, 200, 390, 260);//AB
    Sleep(1000);

    rectangle3(380, 245, 420, 275);//B
    drawText(385, 243, "B");
    Sleep(1000);

    rectangle2(380, 245, 420, 275);//B
    drawText(385, 243, "B");
    Sleep(500);
    drawText(385, 503, "B");
    Sleep(1000);

    line(370, 260, 320, 340);//BD
    Sleep(1000);

    rectangle3(310, 325, 350, 355);//D
    drawText(315, 322, "D");
    Sleep(1000);

    rectangle2(310, 325, 350, 355);//D
    drawText(315, 322, "D");
    Sleep(500);
    drawText(435, 503, "D");
    Sleep(1000);

    line(289, 350, 289, 220);//lD->B
    line(289, 220, 400, 220);
    line(400, 220, 400, 250);
    Sleep(1000);

    line(450, 260, 330, 330);//rBD
    Sleep(1000);

    line(540, 200, 610, 260);//AC
    Sleep(1000);
    line(390, 325, 595, 210);//rD->C
    line(595, 210, 595, 265);
    Sleep(1000);

    rectangle3(580, 245, 620, 275);//C
    drawText(585, 243, "C");
    Sleep(1000);

    rectangle2(580, 245, 620, 275);//C
    drawText(585, 243, "C");
    Sleep(500);
    drawText(485, 503, "C");
    Sleep(1000);

    line(560, 260, 510, 340);//CE
    Sleep(1000);

    rectangle3(500, 325, 540, 355);//E
    drawText(507, 322, "E");

    Sleep(1000);
    rectangle2(500, 325, 540, 355);//E
    drawText(507, 322, "E");
    Sleep(500);
    drawText(535, 503, "E");
    Sleep(1000);

    line(475, 325, 620, 265);//lE->C
    Sleep(1000);

    line(560, 340, 540, 420);//EG
    Sleep(1000);

    rectangle3(520, 405, 560, 435);//G
    drawText(524, 402, "G");

    Sleep(1000);
    rectangle2(520, 405, 560, 435);//G
    drawText(524, 402, "G");
    Sleep(500);
    drawText(585, 503, "G");
    Sleep(1000);

    line(500, 420, 520, 340);//G->E
    Sleep(1000);

    line(575, 410, 720, 340);//G->F
    Sleep(1000);

    line(640, 260, 700, 340);//CF
    Sleep(1000);

    rectangle3(680, 325, 720, 355);//F
    drawText(685, 322, "F");
    Sleep(1000);

    rectangle2(680, 325, 720, 355);//F
    drawText(685, 322, "F");
    Sleep(500);
    drawText(635, 503, "F");
    Sleep(1000);

    line(660, 340, 660, 420);//FH
    Sleep(1000);

    rectangle3(640, 405, 680, 435);//H
    drawText(643, 402, "H");
    Sleep(1000);

    rectangle2(640, 405, 680, 435);//H
    drawText(643, 402, "H");
    Sleep(500);
    drawText(685, 503, "H");
    Sleep(1000);

    line(610, 420, 720, 340);//H->F
    Sleep(1000);

    line(700, 420, 700, 460);//rH->J
    line(700, 460, 790, 460);
    line(790, 420, 790, 460);
    Sleep(1000);

    line(740, 340, 790, 420);//FJ
    Sleep(1000);

    rectangle3(770, 405, 810, 435);//J
    drawText(775, 402, "J");

    Sleep(1000);
    rectangle2(770, 405, 810, 435);//J
    drawText(775, 402, "J");
    Sleep(500);
    drawText(735, 503, "J");
    Sleep(1000);

    line(660, 420, 660, 470);//lJ->H
    line(660, 470, 747, 470);
    line(747, 420, 747, 470);
    Sleep(1000);

    line(830, 420, 830, 140);//J->T
    line(830, 140, 640, 140);
    Sleep(1000);

    line(660, 130, 680, 130);//rT->T
    line(680, 130, 680, 100);
    line(680, 100, 640, 100);
    line(640, 100, 640, 130);
    Sleep(1000);
}

void threadPostorder()
{
    //ve hang doi
    rectangle1(330, 540, 370, 500);
    rectangle1(380, 540, 420, 500);
    rectangle1(430, 540, 470, 500);
    rectangle1(480, 540, 520, 500);
    rectangle1(530, 540, 570, 500);
    rectangle1(580, 540, 620, 500);
    rectangle1(630, 540, 670, 500);
    rectangle1(680, 540, 720, 500);
    rectangle1(730, 540, 770, 500);

    //ve nhanh
    line(470, 200, 390, 260);//AB
    line(370, 260, 320, 340);//BD
    line(560, 260, 510, 340);//CE
    line(540, 200, 610, 260);//AC
    line(640, 260, 700, 340);//CF
    line(660, 340, 660, 420);//FH
    line(740, 340, 790, 420);//FJ
    line(560, 340, 670, 410);//EH       
    line(570, 140, 490, 200);//T->A

    line(660, 130, 680, 130);//rT->T
    line(680, 130, 680, 100);
    line(680, 100, 640, 100);
    line(640, 100, 640, 130);

    line(371, 340, 400, 340);//D->B
    line(400, 340, 400, 260);

    line(440, 260, 440, 450);//lB->G
    line(440, 450, 540, 450);
    line(540, 450, 540, 415);

    line(410, 260, 410, 470);//lG->B
    line(410, 470, 500, 470);
    line(500, 470, 500, 415);

    line(474, 340, 540, 415);//lE->G
    line(585, 410, 510, 345);//rG->E
    line(630, 410, 510, 345);//lH->E

    line(700, 420, 700, 460);//rH->J
    line(700, 460, 790, 460);
    line(790, 420, 790, 460);

    line(289, 340, 289, 110);//D->T
    line(289, 110, 600, 110);
    line(600, 110, 600, 125);

    line(660, 420, 660, 470);//lJ->H
    line(660, 470, 747, 470);
    line(747, 420, 747, 470);

    line(830, 420, 830, 300);//J->F
    line(830, 300, 700, 300);
    line(700, 330, 700, 300);

    //ve cac node
    rectangle1(580, 125, 620, 155);
    drawText(585, 123, "T");
    rectangle1(540, 125, 578, 155);
    rectangle1(622, 125, 660, 155);


    rectangle1(480, 185, 520, 215);//A
    drawText(485, 183, "A");
    rectangle1(440, 185, 478, 215);
    rectangle1(522, 185, 560, 215);

    rectangle1(380, 245, 420, 275);//B
    drawText(385, 243, "B");
    rectangle1(340, 245, 378, 275);
    rectangle1(422, 245, 460, 275);

    rectangle1(580, 245, 620, 275);//C
    drawText(585, 243, "C");
    rectangle1(540, 245, 578, 275);
    rectangle1(622, 245, 660, 275);

    rectangle1(310, 325, 350, 355);//D
    drawText(315, 322, "D");
    rectangle1(270, 325, 308, 355);
    rectangle1(352, 325, 390, 355);

    rectangle1(500, 325, 540, 355);//E
    drawText(507, 322, "E");
    rectangle1(460, 325, 498, 355);
    rectangle1(542, 325, 580, 355);

    rectangle1(680, 325, 720, 355);//F
    drawText(685, 322, "F");
    rectangle1(640, 325, 678, 355);
    rectangle1(722, 325, 760, 355);

    rectangle1(520, 405, 560, 435);//G
    drawText(524, 402, "G");
    rectangle1(480, 405, 518, 435);
    rectangle1(562, 405, 595, 435);

    rectangle1(640, 405, 680, 435);//H
    drawText(643, 402, "H");
    rectangle1(605, 405, 638, 435);
    rectangle1(682, 405, 720, 435);

    rectangle1(770, 405, 810, 435);//J
    drawText(775, 402, "J");
    rectangle1(730, 405, 768, 435);
    rectangle1(812, 405, 850, 435);

    //duyet theo Postorder 
    Sleep(2000);
    setcolor(8);

    line(570, 140, 490, 200);//T->A
    Sleep(1000);

    rectangle3(480, 185, 520, 215);//A
    drawText(485, 183, "A");
    Sleep(1000);

    line(470, 200, 390, 260);//AB
    Sleep(1000);

    rectangle3(380, 245, 420, 275);//B
    drawText(385, 243, "B");
    Sleep(1000);

    line(370, 260, 320, 340);//BD
    Sleep(1000);

    rectangle3(310, 325, 350, 355);//D
    drawText(315, 322, "D");
    Sleep(1000);

    rectangle2(310, 325, 350, 355);//D
    drawText(315, 322, "D");
    Sleep(500);
    drawText(335, 503, "D");
    Sleep(1000);

    line(289, 340, 289, 110);//D->T
    line(289, 110, 600, 110);
    line(600, 110, 600, 125);
    Sleep(1000);

    line(371, 340, 400, 340);//D->B
    line(400, 340, 400, 260);
    Sleep(1000);

    rectangle2(380, 245, 420, 275);//B
    drawText(385, 243, "B");
    Sleep(500);
    drawText(385, 503, "B");
    Sleep(1000);

    line(440, 260, 440, 450);//lB->G
    line(440, 450, 540, 450);
    line(540, 450, 540, 415);
    Sleep(1000);

    line(540, 200, 610, 260);//AC
    Sleep(1000);

    rectangle3(580, 245, 620, 275);//C
    drawText(585, 243, "C");
    Sleep(1000);

    line(560, 260, 510, 340);//CE
    Sleep(1000);

    rectangle3(500, 325, 540, 355);//E
    drawText(507, 322, "E");
    Sleep(1000);

    line(474, 340, 540, 415);//lE->G
    Sleep(1000);


    rectangle3(520, 405, 560, 435);//G
    drawText(524, 402, "G");
    Sleep(1000);

    rectangle2(520, 405, 560, 435);//G
    drawText(524, 402, "G");
    Sleep(500);
    drawText(435, 503, "G");
    Sleep(1000);

    line(410, 260, 410, 470);//lG->B
    line(410, 470, 500, 470);
    line(500, 470, 500, 415);
    Sleep(1000);

    line(585, 410, 510, 345);//rG->E
    Sleep(1000);

    rectangle2(500, 325, 540, 355);//E
    drawText(507, 322, "E");
    Sleep(500);
    drawText(485, 503, "E");
    Sleep(1000);

    line(560, 340, 670, 410);//EH       
    Sleep(1000);

    line(640, 260, 700, 340);//CF
    Sleep(1000);

    rectangle3(680, 325, 720, 355);//F
    drawText(685, 322, "F");
    Sleep(1000);

    line(660, 340, 660, 420);//FH
    Sleep(1000);

    rectangle3(640, 405, 680, 435);//H
    drawText(643, 402, "H");
    Sleep(1000);

    rectangle2(640, 405, 680, 435);//H
    drawText(643, 402, "H");
    Sleep(500);
    drawText(535, 503, "H");
    Sleep(1000);

    line(630, 410, 510, 345);//lH->E
    Sleep(1000);

    line(700, 420, 700, 460);//rH->J
    line(700, 460, 790, 460);
    line(790, 420, 790, 460);
    Sleep(1000);

    line(740, 340, 790, 420);//FJ
    Sleep(1000);

    rectangle3(770, 405, 810, 435);//J
    drawText(775, 402, "J");
    Sleep(1000);

    rectangle2(770, 405, 810, 435);//J
    drawText(775, 402, "J");
    Sleep(500);
    drawText(585, 503, "J");
    Sleep(1000);

    line(660, 420, 660, 470);//lJ->H
    line(660, 470, 747, 470);
    line(747, 420, 747, 470);
    Sleep(1000);

    line(830, 420, 830, 300);//rJ->F
    line(830, 300, 700, 300);
    line(700, 330, 700, 300);
    Sleep(1000);

    rectangle2(680, 325, 720, 355);//F
    drawText(685, 322, "F");
    Sleep(500);
    drawText(635, 503, "F");
    Sleep(1000);

    rectangle2(580, 245, 620, 275);//C
    drawText(585, 243, "C");
    Sleep(500);
    drawText(685, 503, "C");
    Sleep(1000);

    rectangle2(480, 185, 520, 215);//A
    drawText(485, 183, "A");
    Sleep(500);
    drawText(735, 503, "A");
    Sleep(1000);

    line(660, 130, 680, 130);//rT->T
    line(680, 130, 680, 100);
    line(680, 100, 640, 100);
    line(640, 100, 640, 130);
}

void searchTree(int& x)
{
    line(500, 200, 400, 260);//7->3
    line(400, 260, 330, 340);//3->1
    line(600, 260, 520, 340);//9->8
    line(500, 200, 600, 260);//7->9
    line(600, 260, 700, 340);//9->10
    line(400, 260, 450, 340);//3->2

    circle1(500, 200, 40);//7
    drawText(485, 183, "7");
    circle1(400, 260, 40);//2
    drawText(385, 243, "2");
    circle1(600, 260, 40);//9
    drawText(585, 243, "9");
    circle1(330, 340, 40);//1
    drawText(315, 322, "1");
    circle1(520, 340, 40);//8
    drawText(507, 322, "8");
    circle1(700, 340, 40);//10
    drawText(685, 322, "10");
    circle1(450, 340, 40);//3
    drawText(435, 322, "3");

    drawText(400, 450, "Mau vang: node da xet, mau xanh: node tim thay!");
    drawText(150, 500, "Cach tim kiem: So sanh x va gia tri tai node dang xet, neu x lon hon -> di ve nhanh phai, neu x be hon -> di ve nhanh trai ");

    cout << "Moi nhap node muon tim kiem: ";
    cin >> x;
    if (x == 7)
    {
        circle3(500, 200, 40);//7
        drawText(485, 183, "7");
    }
    else if (x > 7)
    {
        if (x == 9)
        {
            circle2(500, 200, 40);//7
            drawText(485, 183, "7");
            Sleep(1000);
            circle3(600, 260, 40);//9
            drawText(585, 243, "9");
        }
        else if (x > 9)
        {
            if (x == 10)
            {
                circle2(500, 200, 40);//7
                drawText(485, 183, "7");
                Sleep(1000);
                circle2(600, 260, 40);//9
                drawText(585, 243, "9");
                Sleep(1000);
                circle3(700, 340, 40);//10
                drawText(685, 322, "10");
            }
            else
            {
                circle2(500, 200, 40);//7
                drawText(485, 183, "7");
                Sleep(1000);
                circle2(600, 260, 40);//9
                drawText(585, 243, "9");
                Sleep(1000);
                circle2(700, 340, 40);//10
                drawText(685, 322, "10");
                cout << "Khong tim thay node!" << endl;
            }

        }
        else if (x < 9 && x > 7)
        {
            if (x == 8)
            {
                circle2(500, 200, 40);//7
                drawText(485, 183, "7");
                Sleep(1000);
                circle2(600, 260, 40);//9
                drawText(585, 243, "9");
                Sleep(1000);
                circle3(520, 340, 40);//8
                drawText(507, 322, "8");
            }
            else
            {
                circle2(500, 200, 40);//7
                drawText(485, 183, "7");
                Sleep(1000);
                circle2(600, 260, 40);//9
                drawText(585, 243, "9");
                Sleep(1000);
                circle3(520, 340, 40);//8
                drawText(507, 322, "8");
                cout << "Khong tim thay node!" << endl;
            }
        }
    }
    else if (x < 7)
    {
        if (x == 2)
        {
            circle2(500, 200, 40);//7
            drawText(485, 183, "7");
            Sleep(1000);
            circle3(400, 260, 40);//2
            drawText(385, 243, "2");
        }
        else if (x > 2)
        {
            if (x == 3)
            {
                circle2(500, 200, 40);//7
                drawText(485, 183, "7");
                Sleep(1000);
                circle2(400, 260, 40);//2
                drawText(385, 243, "2");
                Sleep(1000);
                circle3(450, 340, 40);//3
                drawText(435, 322, "3");
            }
            else
            {
                circle2(500, 200, 40);//7
                drawText(485, 183, "7");
                Sleep(1000);
                circle2(400, 260, 40);//2
                drawText(385, 243, "2");
                Sleep(1000);
                circle2(450, 340, 40);//3
                drawText(435, 322, "3");
                cout << "Khong tim thay node!" << endl;
            }

        }
        else if (x < 2)
        {
            if (x == 1)
            {
                circle2(500, 200, 40);//7
                drawText(485, 183, "7");
                Sleep(1000);
                circle2(400, 260, 40);//2
                drawText(385, 243, "2");
                Sleep(1000);
                circle3(330, 340, 40);//1
                drawText(315, 322, "1");
            }
            else
            {
                circle2(500, 200, 40);//7
                drawText(485, 183, "7");
                Sleep(1000);
                circle2(400, 260, 40);//2
                drawText(385, 243, "2");
                Sleep(1000);
                circle2(330, 340, 40);//1
                drawText(315, 322, "1");
                cout << "Khong tim thay node!" << endl;
            }
        }
    }
}

void addTree(int& y)
{
    // lien ket cac node
    line(500, 200, 400, 260);//7->3
    line(400, 260, 330, 340);//3->1
    line(600, 260, 520, 340);//9->8
    line(500, 200, 600, 260);//7->9
    line(600, 260, 700, 340);//9->10
    line(400, 260, 450, 340);//3->2

    circle1(500, 200, 40);//7
    drawText(485, 183, "7");
    circle1(400, 260, 40);//2
    drawText(385, 243, "2");
    circle1(600, 260, 40);//9
    drawText(585, 243, "9");
    circle1(330, 340, 40);//1
    drawText(315, 322, "1");
    circle1(520, 340, 40);//8
    drawText(507, 322, "8");
    circle1(700, 340, 40);//10
    drawText(685, 322, "10");
    circle1(450, 340, 40);//3
    drawText(435, 322, "3");

    drawText(350, 450, "Mau vang: node da xet, mau xanh: node vua them / node da ton tai!");
    drawText(150, 500, "Cach them node: So sanh x va gia tri tai node dang xet, neu x lon hon -> di ve nhanh phai, neu x be hon -> di ve nhanh trai ");
    drawText(200, 530, "Neu di den node la ma chua bi trung voi cac node da ton tai thi them node moi ( con cua node la vua xet )");

    cout << "Moi nhap node muon them vao: ";
    cin >> y;

    if (y == 7)
    {
        circle3(500, 200, 40);//7
        drawText(485, 183, "7");
        cout << " Node da ton tai!" << endl;
    }
    else if (y > 7)
    {
        if (y == 9)
        {
            circle2(500, 200, 40);//7
            drawText(485, 183, "7");
            Sleep(1000);
            circle3(600, 260, 40);//9
            drawText(585, 243, "9");
            cout << " Node da ton tai!" << endl;
        }
        else if (y > 9)
        {
            if (y == 10)
            {
                circle2(500, 200, 40);//7
                drawText(485, 183, "7");
                Sleep(1000);
                circle2(600, 260, 40);//9
                drawText(585, 243, "9");
                Sleep(1000);
                circle3(700, 340, 40);//10
                drawText(685, 322, "10");
                cout << " Node da ton tai!" << endl;
            }
            else
            {
                circle2(500, 200, 40);//7
                drawText(485, 183, "7");
                Sleep(1000);
                circle2(600, 260, 40);//9
                drawText(585, 243, "9");
                Sleep(1000);
                circle2(700, 340, 40);//10
                drawText(685, 322, "10");
                Sleep(1000);
                line(700, 340, 770, 420);
                circle2(700, 340, 40);//10
                drawText(685, 322, "10");

                circle3(770, 420, 40);//X
                if(y == 11)
                    drawText(755, 402, "11");
                if (y == 12)
                    drawText(755, 402, "12");
                if(y>12)
                    drawText(755, 402, "X");

            }

        }
        else if (y < 9 && y > 7)
        {
            if (y == 8)
            {
                circle2(500, 200, 40);//7
                drawText(485, 183, "7");
                Sleep(1000);
                circle2(600, 260, 40);//9
                drawText(585, 243, "9");
                Sleep(1000);
                circle3(520, 340, 40);//8
                drawText(507, 322, "8");
                cout << " Node da ton tai!" << endl;
            }
        }
    }
    else if (y < 7)
    {
        if (y == 2)
        {
            circle2(500, 200, 40);//7
            drawText(485, 183, "7");
            Sleep(1000);
            circle3(400, 260, 40);//2
            drawText(385, 243, "2");
            cout << " Node da ton tai!" << endl;
        }
        else if (y > 2)
        {
            if (y == 3)
            {
                circle2(500, 200, 40);//7
                drawText(485, 183, "7");
                Sleep(1000);
                circle2(400, 260, 40);//2
                drawText(385, 243, "2");
                Sleep(1000);
                circle3(450, 340, 40);//3
                drawText(435, 322, "3");
                cout << " Node da ton tai!" << endl;
            }
            else
            {
                circle2(500, 200, 40);//7
                drawText(485, 183, "7");
                Sleep(1000);
                circle2(400, 260, 40);//2
                drawText(385, 243, "2");
                Sleep(1000);
                circle2(450, 340, 40);//3
                drawText(435, 322, "3");
                Sleep(1000);
                line(450, 340, 490, 420);
                circle2(450, 340, 40);//3
                drawText(435, 322, "3");

                circle3(490, 420, 40);//X
                if (y == 4)
                    drawText(475, 402, "4");
                if (y == 5)
                    drawText(475, 402, "5");
                if (y == 6)
                    drawText(475, 402, "6");
            }

        }
        else if (y < 2)
        {
            if (y == 1)
            {
                circle2(500, 200, 40);//7
                drawText(485, 183, "7");
                Sleep(1000);
                circle2(400, 260, 40);//2
                drawText(385, 243, "2");
                Sleep(1000);
                circle3(330, 340, 40);//1
                drawText(315, 322, "1");
                cout << " Node da ton tai!" << endl;
            }
            else
            {
                circle2(500, 200, 40);//7
                drawText(485, 183, "7");
                Sleep(1000);
                circle2(400, 260, 40);//2
                drawText(385, 243, "2");
                Sleep(1000);
                circle2(330, 340, 40);//1
                drawText(315, 322, "1");
                Sleep(1000);
                line(330, 340, 260, 420);
                circle2(330, 340, 40);//1
                drawText(315, 322, "1");

                circle3(260, 420, 40);//X
                if(y<0)
                    drawText(245, 402, "X");
                if(y==0)
                    drawText(245, 402, "0");
            }
        }
    }
}


int main()
{
    int x,y;
    initgraph();
    createTree();

menu:
    cout << "Choose one of them!" << endl;
    cout << "1. UnThread" << endl;
    cout << "2. Thread" << endl;
    cout << "3. Search!" << endl;
    cout << "4. Add Node!" << endl;
    cout << "5. Done!" << endl;
    int choose;
    cin >> choose;
    switch (choose)
    {

    case 1:
        createTree();
    UnThread:
        cout << "Choose one of them!" << endl;
        cout << "1. Inorder" << endl;
        cout << "2. Preorder" << endl;
        cout << "3. Postorder" << endl;
        cout << "4. Done!" << endl;
        int Choose1;
        cin >> Choose1;

        switch (Choose1)
        {
        case 1:
            unThreadInorder();
            goto UnThread;

        case 2:
            unThreadPreorder();
            goto UnThread;

        case 3:
            unThreadPostorder();
            goto UnThread;

        case 4:
            system("cls");
            goto menu;
        }
    case 2:
        system("cls");

    thread:
        cout << "Choose one of them!" << endl;
        cout << "1. Inorder" << endl;
        cout << "2. Preorder" << endl;
        cout << "3. Postorder" << endl;
        cout << "4. Done!" << endl;
        int Choose2;
        cin >> Choose2;
        switch (Choose2)
        {
        case 1:
            system("cls");
            threadInorder();
            goto thread;

        case 2:
            setcolor(15);
            system("cls");
            threadPreorder();
            goto thread;

        case 3:
            setcolor(15);
            system("cls");
            threadPostorder(); 
            goto thread;

        case 4:
            system("cls");
            goto menu;
        }
    case 3:
        setcolor(15);
        system("cls");
        searchTree(x);    
        goto menu;

    case 4:
        setcolor(15);
        system("cls");
        addTree(y); 
        goto menu;

    case 5:
        system("cls");
        exit;
    }

    return 0;
}