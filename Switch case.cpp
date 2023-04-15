#include<iostream>
#include<graphics.h>
#include<cmath>
#define PI 3.1415
using namespace std;

int main()
{
     int d=0,m;
    int x,y;
    int gd=DETECT,gm;
    int i,walk=0;
    initgraph(&gm,&gm," ");
    initwindow(800,800);



    int option;
//name
    line(50,50,50,110);
    line(50,80,70,80);
    line(70,50,70,110);

   line(100,50,80,110);
    line(90,80,110,80);
    line(100,50,120,110);

    line(140,50,140,110);
    line(140,50,160,50);
    line(140,80,160,80);

     line(170,50,170,110);

      line(180,50,200,50);
    line(180,110,200,110);
     line(200,50,180,110);

     line(230,50,210,110);
    line(220,80,240,80);
    line(230,50,250,110);




    //id

        line(50,120,50,170);
    line(45,120,55,120);
    line(45,170,55,170);

     line(60,120,60,170);
    line(60,120,75,120);
    line(75,120,80,125);
    line(80,125,80,165);
    line(80,165,75,170);
    line(75,170,60,170);

     circle(100,130,5);
    circle(100,160,5);

    ellipse(130,145,50,340,10,30);

    line(150,120,170,120);
    line(150,120,150,145);
    line(150,145,170,145);
    line(170,145,170,170);
    line(150,170,170,170);

    line(180,120,200,120);
    line(180,120,180,170);
    line(180,145,200,145);
    line(180,170,200,170);


   line(210,120,230,120);
    line(230,120,230,145);
    line(210,145,230,145);
    line(210,145,210,170);
    line(210,170,230,170);

    circle(260,145,23);
    circle(310,145,23);

      line(340,120,340,170);
   line(340,120,335,125);
   line(335,170,345,170);

   circle(370,145,23);

    line(400,120,400,170);
    line(395,125,400,120);
   line(395,170,405,170);

    ellipse(420,130,5,360,10,12);
     ellipse(426,145,250,450,10,25);

     line(450,120,470,120);
    line(470,120,470,145);
    line(450,145,470,145);
    line(450,145,450,170);
    line(450,170,470,170);

    line(480,120,480,145);
    line(480,145,500,145);
    line(500,120,500,170);

     line(510,120,510,145);
    line(510,145,530,145);
    line(530,120,530,170);






    std::cout << "Choose a shape to draw:" << std::endl;
    std::cout << "1. cicle" << std::endl;
    std::cout << "2. Dorimon" << std::endl;
    std::cout << "3. Flag" << std::endl;
    std::cout << "4. Home" << std::endl;
    std::cout << "5. Emoji" << std::endl;
      std::cout << "6. Star " << std::endl;
      std::cout << "7. Tower " << std::endl;

    std::cout << "Enter your choice: ";
    std::cin >> option;


    switch (option)
    {
    case 1:

    // Move the cycle
    for (i = 0; i < 600; i++) {
        // Upper body of cycle
        line(50 + i, 405, 100 + i, 405);
        line(75 + i, 375, 125 + i, 375);
        line(50 + i, 405, 75 + i, 375);
        line(100 + i, 405, 100 + i, 345);
        line(150 + i, 405, 100 + i, 345);
        line(75 + i, 345, 75 + i, 370);
        line(70 + i, 370, 80 + i, 370);
        line(80 + i, 345, 100 + i, 345);

        // Wheel
        circle(150 + i, 405, 30);
        circle(50 + i, 405, 30);

        // Road
        line(0, 436, getmaxx(), 436);

        // Stone
        rectangle(getmaxx() - i, 436,
                  650 - i, 431);

        // Stop the screen for 20 secs
        delay(20);

        // Clear the screen
        cleardevice();
    }



        break;

    case 2:


        setcolor(15);
        ellipse(200,450,150,390,50,16);
        line(157,441,243,441);
        ellipse(252,448,246,389,50,18);
        line(243,441,297,441);
        setcolor(i);
        ellipse(249,441,90,180,10,15);


        setcolor(12);
        ellipse(155,410,80,280,8,8);

        setcolor(i);
        line(157,441,157,370);
        line(297,441,297,350);



        setcolor(15);
        circle(147,357,16);
        setcolor(i);
        ellipse(137,342,300,330,58,19);
        ellipse(174,348,110,170,29,49);


        setcolor(15);
        circle(327,275,16);
        setcolor(i);
        ellipse(265,260,299,340,74,90);
        ellipse(323,285,110,170,25,19);


        setcolor(12);
        line(163,302,285,302);
        line(163,298,285,298);
        ellipse(163,301,90,270,3,3);
        ellipse(285,300,280,80,4,3);


        setcolor(15);
        ellipse(243,334,143,40,56,48);
        ellipse(244,346,163,15,30,24);
        line(214,340,273,340);


        setcolor(14);
        circle(244,310,8);
        line(238,306,251,306);
        line(236,309,251,309);



        setcolor(i);
        ellipse(220,237,0,180,87,60);
        ellipse(180,237,180,250,47,65);
        ellipse(268,237,290,360,40,65);


        setcolor(15);
        ellipse(263,277,15,90,45,60);
         ellipse(245,210,0,360,19,23);


        ellipse(207,210,0,360,19,23);

         ellipse(202,237,190,243,47,69);
         ellipse(187,254,90,170,32,35);
         circle(216,217,5);
         circle(237,218,5);


         setcolor(12);
         circle(227,236,8);
         ellipse(230,262,180,360,45,30);
         ellipse(232,263,10,190,47,6);

         setcolor(15);
         ellipse(275,253,290,110,10,8);

         line(227,244,227,257);
         line(245,238,269,234);
         line(245,244,269,242);
          line(245,244,269,252);

        line(185,236,210,238);
          line(185,244,210,244);
          line(185,252,210,250);



        break;

    case 3:
setcolor(WHITE);
        circle(345, 325, 40);

        rectangle(250,250,450,400);
        rectangle(245,250,250,600);
         rectangle(235,600,260,610);

          setfillstyle(SOLID_FILL, GREEN);
        floodfill(252, 252, WHITE);
         setfillstyle(SOLID_FILL, RED);
        floodfill(352, 332, WHITE);

         setfillstyle(SOLID_FILL, WHITE);
        floodfill(246, 252, WHITE);

        break;

    case 4:

        	        /* Draw Hut */
        setcolor(WHITE);
        rectangle(150,280,250,400);
        rectangle(250,280,420,400);
        rectangle(180,325,220,400);
        rectangle(320,325,360,400);
        rectangle(270,330,300,360);
        rectangle(380,330,410,360);

        rectangle(310,400,370,410);
        rectangle(315,410,365,420);

         line(310,400,280,500);
         line(370,400,400,500);


        line(200,200,150,280);
        line(200,200,250,280);
        line(200,200,370,200);
        line(370,200,420,280);



        /* Fill colours */
        setfillstyle(SOLID_FILL, BROWN);
        floodfill(152, 282, WHITE);
        floodfill(252, 282, WHITE);
        setfillstyle(SLASH_FILL, BLUE);
        floodfill(182, 352, WHITE);
        setfillstyle(HATCH_FILL, GREEN);
        floodfill(200, 205, WHITE);
        floodfill(210, 205, WHITE);


        break;

      case 5:

   setcolor(RED);
    circle(400,310,100);
    setfillstyle(1,YELLOW);
    floodfill(415,315,RED);

    setcolor(RED);
    ellipse(400,340,180,360,55,50);
    line(345,340,455,340);
    setfillstyle(1,RED);
    floodfill(346,341,RED);

     setcolor(WHITE);
     circle(440,270,20);
     setfillstyle(1,WHITE);
     floodfill(441,271,WHITE);

     setcolor(WHITE);
     circle(360,270,20);
     setfillstyle(1,WHITE);
     floodfill(365,275,WHITE);

      setcolor(BLACK);
     circle(360,270,10);
     setfillstyle(1,BLACK);
     floodfill(361,271,BLACK);

      setcolor(BLACK);
     circle(440,270,10);
     setfillstyle(1,BLACK);
     floodfill(441,271,BLACK);

     //setcolor(RED);
     line(380,300,420,300);
     line(380,300,400,280);
     line(420,300,400,280);
    // setfillstyle(1,RED);
     //floodfill(381,302,RED);
         break;







      case 6:

         			line(200,185,180,240);
			line(200,185,220,240);
			line(120,240,180,240);
			line(220,240,280,240);
			line(160,275,120,240);
			line(160,275,145,330);

			line(145,330,200,290);
			line(255,330,200,290);
			line(255,330,240,275);
			line(240,275,280,240);
			setfillstyle(1,BLUE);
    floodfill(251,256,WHITE);

    line(120,210,192,210);
    line(80,220,188,220);
    line(50,230,184,230);


     break;

      case 7:

    line(200,200,150,400);
    line(200,200,250,400);
    line(200,240,150,400);
    line(200,240,250,400);
    line(200,280,150,400);
    line(200,280,250,400);
    line(200,320,150,400);
    line(200,320,250,400);
    line(200,360,150,400);
    line(200,360,250,400);
    line(150,400,250,400);

     setfillstyle(SOLID_FILL, YELLOW);
        floodfill(201, 209, WHITE);

         setfillstyle(SOLID_FILL, RED);
        floodfill(201, 249, WHITE);

         setfillstyle(SOLID_FILL, BLUE);
        floodfill(201, 289, WHITE);

         setfillstyle(SOLID_FILL, GREEN);
        floodfill(201, 323, WHITE);

         setfillstyle(SOLID_FILL, CYAN);
        floodfill(201, 383, WHITE);
    }

    getch();
    closegraph();
    return 0;
}

