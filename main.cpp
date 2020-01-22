//project



#include<cstdio>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846


GLfloat position1 = 0.0f;
GLfloat position2 = 0.0f;
GLfloat position3 = 0.0f;
GLfloat position4 = 0.0f;
GLfloat rainPositionY = 0.0f;

GLfloat rainSpeedY = 0.05f;
GLfloat speed1 = .02f;
GLfloat speed2 = .03f;
GLfloat positionc1 = 0.0f;
GLfloat speedc1 = 0.001f;
GLfloat positionc2 = 0.0f;
GLfloat speedc2 = 0.002f;
GLfloat positionc3 = 0.0f;
GLfloat speedc3 = 0.004f;
GLfloat positionc4 = 0.0f;
GLfloat speedc4 = 0.003f;
GLfloat positionb = 0.0f;
GLfloat speedb = 0.003f;

void display();
void displayNight();
void displayRain();
void displayRainNight();

void Road1();
void Road1Night();


void signal();
void signalNight();
void cloud();

void car1();
void car1Night();
void bus1();
void bus1Night();

void bus2();
void bus2Night();

void car2();
void car2Night();

void car3();

void boat();
void boatNight();

void tree();
void treeNight();
void downBackground();
void downBackgroundNight();

void Building1();
void Building1Night();

void Building5();
void Building5Night();

void Building2();
void Building2Night();

void Building3();
void Building3Night();

void Building4();
void Building4Night();

void swimmingPoll();
void swimmingPollNight();

void sea();
void seaNight();

void sky();
void skyNight();

void rain();

void roadLight();
void roadMiddleNight();



void handleKeypress(unsigned char key, int x, int y) {

switch(key){
    case 'n':
        glutDisplayFunc(displayNight);
        break;
    case 'd':
        glutDisplayFunc(display);
        break;
    case 'r':
        glutDisplayFunc(displayRain);
        break;
    case 'R':
        glutDisplayFunc(displayRainNight);
        break;
    glutPostRedisplay();
    }
}


///+X TO -X
void update1(int value) {


    if(position1 < -2)
      position1 = 1.0f;
      position1 -=speed1;

	glutPostRedisplay();

}
///-X TO +X

void update2(int value) {


    if(position2 > 2)
      position2 = -1.0f;
      position2 +=speed1;

	glutPostRedisplay();

}



void updatec1(int value) {
    if(positionc1 <-1.0)
        positionc1 = 1.0f;
    positionc1 -= speedc1;
	glutPostRedisplay();

}
void updatec2(int value) {
    if(positionc2 <-1.0)
        positionc2 = 1.0f;
    positionc2 -= speedc2;
	glutPostRedisplay();

}

void updatec3(int value) {
    if(positionc3 <-1.0)
        positionc3 = 1.0f;
    positionc3 -= speedc3;
	glutPostRedisplay();

}

///+X TO -X
void updateb(int value) {


    if(positionb < -2)
      positionb = 1.0f;
      positionb -=speedb;

	glutPostRedisplay();

}

void updateRain(int value)
{
    if(rainPositionY <0.0)
        rainPositionY = .1f;

    rainPositionY -= rainSpeedY;



	glutPostRedisplay();
}

void myMouse(int button,int state,int x,int y)
{


}

void mydisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT);

display();

}

void display() {

glutTimerFunc(100,updatec1,0);
glutTimerFunc(100,updatec2,0);
glutTimerFunc(100,updatec3,0);
glutTimerFunc(100,updateb,0);

      glutTimerFunc(100,update1,0);
      glutTimerFunc(100,update2,0);
     glClear(GL_COLOR_BUFFER_BIT);
     glClearColor(1.0f, 1.0f, 1.0f, 1.0f);





    sea();
    boat();
    sky();
    Road1();
    downBackground();
    car1();
    car2();
    bus1();
    bus2();

    swimmingPoll();

    Building5();
    Building2();
    Building1();
    Building3();
    Building4();
    signal();
    tree();






   glFlush();
}

void displayNight() {

glutTimerFunc(100,updatec1,0);
glutTimerFunc(100,updatec2,0);
glutTimerFunc(100,updatec3,0);
glutTimerFunc(100,updateb,0);



      glutTimerFunc(100,update1,0);
     glutTimerFunc(100,update2,0);



     //glutTimerFunc(100,updatec2,0);
    // glutTimerFunc(100,updatec3,0);
    // glutTimerFunc(100,updatec4,0);

     glClear(GL_COLOR_BUFFER_BIT);
     glClearColor(1.0f, 1.0f, 1.0f, 1.0f);



    seaNight();
    boatNight();
    skyNight();
    Road1Night();
    roadLight();
    roadMiddleNight();
    downBackgroundNight();
    car1Night();
    car2Night();
    bus1Night();
    bus2Night();

    swimmingPollNight();

    Building5Night();
    Building2Night();
    Building1Night();
    Building3Night();
    Building4Night();
    signalNight();
    treeNight();





   glFlush();
}

void displayRain()
{



    glutTimerFunc(100,updatec1,0);
glutTimerFunc(100,updatec2,0);
glutTimerFunc(100,updatec3,0);
glutTimerFunc(100,updateb,0);
glutTimerFunc(100, updateRain, 0);



      glutTimerFunc(100,update1,0);
     glutTimerFunc(100,update2,0);
     glClear(GL_COLOR_BUFFER_BIT);
     glClearColor(1.0f, 1.0f, 1.0f, 1.0f);



    sea();
    boat();
    sky();
    Road1();
    downBackground();
    car1();
    car2();
    bus1();
    bus2();

    swimmingPoll();

    Building5();
    Building2();
    Building1();
    Building3();
    Building4();
    signal();
    tree();
    rain();




   glFlush();

}

void displayRainNight() {

glutTimerFunc(100,updatec1,0);
glutTimerFunc(100,updatec2,0);
glutTimerFunc(100,updatec3,0);
glutTimerFunc(100,updateb,0);

glutTimerFunc(100, updateRain, 0);

      glutTimerFunc(100,update1,0);
     glutTimerFunc(100,update2,0);



     //glutTimerFunc(100,updatec2,0);
    // glutTimerFunc(100,updatec3,0);
    // glutTimerFunc(100,updatec4,0);

     glClear(GL_COLOR_BUFFER_BIT);
     glClearColor(1.0f, 1.0f, 1.0f, 1.0f);



    seaNight();
    boatNight();
    skyNight();
    Road1Night();
    roadLight();
    roadMiddleNight();
    downBackgroundNight();
    car1Night();
    car2Night();
    bus1Night();
    bus2Night();

    swimmingPollNight();

    Building5Night();
    Building2Night();
    Building1Night();
    Building3Night();
    Building4Night();
    signalNight();
    treeNight();
rain();




   glFlush();
}

void roadMiddleNight()
{
     glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.48,-0.12);
    glVertex2f(-0.48,-0.08);
    glVertex2f(-0.54,-0.08);
    glVertex2f(-0.54,-0.12);
    glEnd();


     glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.57,-0.12);
    glVertex2f(-0.57,-0.08);
    glVertex2f(-0.63,-0.08);
    glVertex2f(-0.63,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.66,-0.12);
    glVertex2f(-0.66,-0.08);
    glVertex2f(-0.72,-0.08);
    glVertex2f(-0.72,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.75,-0.12);
    glVertex2f(-0.75,-0.08);
    glVertex2f(-0.81,-0.08);
    glVertex2f(-0.81,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.84,-0.12);
    glVertex2f(-0.84,-0.08);
    glVertex2f(-0.9,-0.08);
    glVertex2f(-0.9,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.93,-0.12);
    glVertex2f(-0.93,-0.08);
    glVertex2f(-0.99,-0.08);
    glVertex2f(-0.99,-0.12);
    glEnd();

///MIDDLE
///FOR +X

//update middle start
glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.45,-0.12);
    glVertex2f(0.45,-0.08);
    glVertex2f(0.39,-0.08);
    glVertex2f(0.39,-0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.36,-0.12);
    glVertex2f(0.36,-0.08);
    glVertex2f(0.3,-0.08);
    glVertex2f(0.3,-0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.27,-0.12);
    glVertex2f(0.27,-0.08);
    glVertex2f(0.21,-0.08);
    glVertex2f(0.21,-0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.18,-0.12);
    glVertex2f(0.18,-0.08);
    glVertex2f(0.12,-0.08);
    glVertex2f(0.12,-0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.09,-0.12);
    glVertex2f(0.09,-0.08);
    glVertex2f(0.03,-0.08);
    glVertex2f(0.03,-0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.0,-0.12);
    glVertex2f(0.0,-0.08);
    glVertex2f(-0.06,-0.08);
    glVertex2f(-0.06,-0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.09,-0.12);
    glVertex2f(-0.09,-0.08);
    glVertex2f(-.15,-0.08);
    glVertex2f(-.15,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.18,-0.12);
    glVertex2f(-0.18,-0.08);
    glVertex2f(-.24,-0.08);
    glVertex2f(-.24,-0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.27,-0.12);
    glVertex2f(-0.27,-0.08);
    glVertex2f(-.33,-0.08);
    glVertex2f(-.33,-0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.36,-0.12);
    glVertex2f(-0.36,-0.08);
    glVertex2f(-.43,-0.08);
    glVertex2f(-.43,-0.12);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.48,-0.12);
    glVertex2f(0.48,-0.08);
    glVertex2f(0.54,-0.08);
    glVertex2f(0.54,-0.12);
    glEnd();


     glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.57,-0.12);
    glVertex2f(0.57,-0.08);
    glVertex2f(0.63,-0.08);
    glVertex2f(0.63,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.66,-0.12);
    glVertex2f(0.66,-0.08);
    glVertex2f(0.72,-0.08);
    glVertex2f(0.72,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.75,-0.12);
    glVertex2f(0.75,-0.08);
    glVertex2f(0.81,-0.08);
    glVertex2f(0.81,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.84,-0.12);
    glVertex2f(0.84,-0.08);
    glVertex2f(.9,-0.08);
    glVertex2f(0.9,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.93,-0.12);
    glVertex2f(0.93,-0.08);
    glVertex2f(0.99,-0.08);
    glVertex2f(0.99,-0.12);
    glEnd();
}


void roadLight()
{
    ///1
    GLfloat x=-.57f; GLfloat  y=-0.1f; GLfloat  radius =.25f;
       int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat  twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(150, 150, 150);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	///2

      glTranslatef(-.4f,0.0f,0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(150, 150, 150);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	///2

      glTranslatef(.4f,0.0f,0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(150, 150, 150);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(.8f,0.0f,0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(150, 150, 150);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(1.2f,0.0f,0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(150, 150, 150);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	glTranslatef(1.6f,0.0f,0.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(150, 150, 150);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();

}

void rain()
{


    glLoadIdentity();
    //i=how many degree you want to rotate around an axis
    glPushMatrix();

    glTranslatef(0.0, rainPositionY,0.0);
//points

glBegin(GL_LINES);

    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-.9-0.08f,.9f);
    glVertex2f(-.88-0.08f,.86f);

    glVertex2f(-.9f-0.08f,.9f-.1);
    glVertex2f(-.88-0.08f,.86f-.1);

    glVertex2f(-.9f-0.08,.9f-.2);
    glVertex2f(-.88-0.08,.86f-.2);

    glVertex2f(-.9f-0.08,.9f-.3);
    glVertex2f(-.88f-0.08,.86f-.3);

    glVertex2f(-.9f-0.08,.9f-.4);
    glVertex2f(-.88f-0.08,.86f-.4);

    glVertex2f(-.9f-0.08,.9f-.5);
    glVertex2f(-.88f-0.08,.86f-.5);

    glVertex2f(-.9f-0.08,.9f-.6);
    glVertex2f(-.88f-0.08,.86f-.6);

    glVertex2f(-.9f-0.08,.9f-.7);
    glVertex2f(-.88f-0.08,.86f-.7);

    glVertex2f(-.9f-0.08,.9f-.8);
    glVertex2f(-.88f-0.08,.86f-.8);

    glVertex2f(-.9f-0.08,.9f-.9);
    glVertex2f(-.88f-0.08,.86f-.9);

    glVertex2f(-.9f-0.08,.9f-1.0);
    glVertex2f(-.88f-0.08,.86f-1.0);

    glVertex2f(-.9f-0.08,.9f-1.1);
    glVertex2f(-.88f-0.08,.86f-1.1);

    glVertex2f(-.9f-0.08,.9f-1.2);
    glVertex2f(-.88f-0.08,.86f-1.2);

    glVertex2f(-.9f-0.08,.9f-1.2);
    glVertex2f(-.88f-0.08,.86f-1.2);

    glVertex2f(-.9f-0.08,.9f-1.3);
    glVertex2f(-.88f-0.08,.86f-1.3);

    glVertex2f(-.9f-0.08,.9f-1.4);
    glVertex2f(-.88f-0.08,.86f-1.4);

    glVertex2f(-.9f-0.08,.9f-1.5);
    glVertex2f(-.88f-0.08,.86f-1.5);

    glVertex2f(-.9f-0.08,.9f-1.6);
    glVertex2f(-.88f-0.08,.86f-1.6);

    glVertex2f(-.9f-0.08,.9f-1.7);
    glVertex2f(-.88f-0.08,.86f-1.7);

    glVertex2f(-.9f-0.08,.9f-1.8);
    glVertex2f(-.88f-0.08,.86f-1.8);

    glVertex2f(-.9f-0.08,.9f-1.9);
    glVertex2f(-.88f-0.08,.86f-1.9);

    glVertex2f(-.9f,.9f);
    glVertex2f(-.88f,.86f);

    glVertex2f(-.9f,.9f-.1);
    glVertex2f(-.88f,.86f-.1);

    glVertex2f(-.9f,.9f-.2);
    glVertex2f(-.88f,.86f-.2);

    glVertex2f(-.9f,.9f-.3);
    glVertex2f(-.88f,.86f-.3);

    glVertex2f(-.9f,.9f-.4);
    glVertex2f(-.88f,.86f-.4);

    glVertex2f(-.9f,.9f-.5);
    glVertex2f(-.88f,.86f-.5);

    glVertex2f(-.9f,.9f-.6);
    glVertex2f(-.88f,.86f-.6);

    glVertex2f(-.9f,.9f-.7);
    glVertex2f(-.88f,.86f-.7);

    glVertex2f(-.9f,.9f-.8);
    glVertex2f(-.88f,.86f-.8);

    glVertex2f(-.9f,.9f-.9);
    glVertex2f(-.88f,.86f-.9);

    glVertex2f(-.9f,.9f-1.0);
    glVertex2f(-.88f,.86f-1.0);

    glVertex2f(-.9f,.9f-1.1);
    glVertex2f(-.88f,.86f-1.1);

    glVertex2f(-.9f,.9f-1.2);
    glVertex2f(-.88f,.86f-1.2);

    glVertex2f(-.9f,.9f-1.2);
    glVertex2f(-.88f,.86f-1.2);

    glVertex2f(-.9f,.9f-1.3);
    glVertex2f(-.88f,.86f-1.3);

    glVertex2f(-.9f,.9f-1.4);
    glVertex2f(-.88f,.86f-1.4);

    glVertex2f(-.9f,.9f-1.5);
    glVertex2f(-.88f,.86f-1.5);

    glVertex2f(-.9f,.9f-1.6);
    glVertex2f(-.88f,.86f-1.6);

    glVertex2f(-.9f,.9f-1.7);
    glVertex2f(-.88f,.86f-1.7);

    glVertex2f(-.9f,.9f-1.8);
    glVertex2f(-.88f,.86f-1.8);

    glVertex2f(-.9f,.9f-1.9);
    glVertex2f(-.88f,.86f-1.9);

    glVertex2f(-.9+0.1f,.9f);
    glVertex2f(-.88+0.1f,.86f);

    glVertex2f(-.9f+0.1,.9f-.1);
    glVertex2f(-.88+0.1f,.86f-.1);

    glVertex2f(-.9f+0.1,.9f-.2);
    glVertex2f(-.88+0.1f,.86f-.2);

    glVertex2f(-.9f+0.1,.9f-.3);
    glVertex2f(-.88f+0.1,.86f-.3);

    glVertex2f(-.9f+0.1,.9f-.4);
    glVertex2f(-.88f+0.1,.86f-.4);

    glVertex2f(-.9f+0.1,.9f-.5);
    glVertex2f(-.88f+0.1,.86f-.5);

    glVertex2f(-.9f+0.1,.9f-.6);
    glVertex2f(-.88f+0.1,.86f-.6);

    glVertex2f(-.9f+0.1,.9f-.7);
    glVertex2f(-.88f+0.1,.86f-.7);

    glVertex2f(-.9f+0.1,.9f-.8);
    glVertex2f(-.88f+0.1,.86f-.8);

    glVertex2f(-.9f+0.1,.9f-.9);
    glVertex2f(-.88f+0.1,.86f-.9);

    glVertex2f(-.9f+0.1,.9f-1.0);
    glVertex2f(-.88f+0.1,.86f-1.0);

    glVertex2f(-.9f+0.1,.9f-1.1);
    glVertex2f(-.88f+0.1,.86f-1.1);

    glVertex2f(-.9f+0.1,.9f-1.2);
    glVertex2f(-.88f+0.1,.86f-1.2);

    glVertex2f(-.9f+0.1,.9f-1.2);
    glVertex2f(-.88f+0.1,.86f-1.2);

    glVertex2f(-.9f+0.1,.9f-1.3);
    glVertex2f(-.88f+0.1,.86f-1.3);

    glVertex2f(-.9f+0.1,.9f-1.4);
    glVertex2f(-.88f+0.1,.86f-1.4);

    glVertex2f(-.9f+0.1,.9f-1.5);
    glVertex2f(-.88f+0.1,.86f-1.5);

    glVertex2f(-.9f+0.1,.9f-1.6);
    glVertex2f(-.88f+0.1,.86f-1.6);

    glVertex2f(-.9f+0.1,.9f-1.7);
    glVertex2f(-.88f+0.1,.86f-1.7);

    glVertex2f(-.9f+0.1,.9f-1.8);
    glVertex2f(-.88f+0.1,.86f-1.8);

    glVertex2f(-.9f+0.1,.9f-1.9);
    glVertex2f(-.88f+0.1,.86f-1.9);

    glVertex2f(-.9+0.2f,.9f);
    glVertex2f(-.88+0.2f,.86f);

    glVertex2f(-.9f+0.2,.9f-.1);
    glVertex2f(-.88+0.2f,.86f-.1);

    glVertex2f(-.9f+0.2,.9f-.2);
    glVertex2f(-.88+0.2f,.86f-.2);

    glVertex2f(-.9f+0.2,.9f-.3);
    glVertex2f(-.88f+0.2,.86f-.3);

    glVertex2f(-.9f+0.2,.9f-.4);
    glVertex2f(-.88f+0.2,.86f-.4);

    glVertex2f(-.9f+0.2,.9f-.5);
    glVertex2f(-.88f+0.2,.86f-.5);

    glVertex2f(-.9f+0.2,.9f-.6);
    glVertex2f(-.88f+0.2,.86f-.6);

    glVertex2f(-.9f+0.2,.9f-.7);
    glVertex2f(-.88f+0.2,.86f-.7);

    glVertex2f(-.9f+0.2,.9f-.8);
    glVertex2f(-.88f+0.2,.86f-.8);

    glVertex2f(-.9f+0.2,.9f-.9);
    glVertex2f(-.88f+0.2,.86f-.9);

    glVertex2f(-.9f+0.2,.9f-1.0);
    glVertex2f(-.88f+0.2,.86f-1.0);

    glVertex2f(-.9f+0.2,.9f-1.1);
    glVertex2f(-.88f+0.2,.86f-1.1);

    glVertex2f(-.9f+0.2,.9f-1.2);
    glVertex2f(-.88f+0.2,.86f-1.2);

    glVertex2f(-.9f+0.2,.9f-1.2);
    glVertex2f(-.88f+0.2,.86f-1.2);

    glVertex2f(-.9f+0.2,.9f-1.3);
    glVertex2f(-.88f+0.2,.86f-1.3);

    glVertex2f(-.9f+0.2,.9f-1.4);
    glVertex2f(-.88f+0.2,.86f-1.4);

    glVertex2f(-.9f+0.2,.9f-1.5);
    glVertex2f(-.88f+0.2,.86f-1.5);

    glVertex2f(-.9f+0.2,.9f-1.6);
    glVertex2f(-.88f+0.2,.86f-1.6);

    glVertex2f(-.9f+0.2,.9f-1.7);
    glVertex2f(-.88f+0.2,.86f-1.7);

    glVertex2f(-.9f+0.2,.9f-1.8);
    glVertex2f(-.88f+0.2,.86f-1.8);

    glVertex2f(-.9f+0.2,.9f-1.9);
    glVertex2f(-.88f+0.2,.86f-1.9);

    glVertex2f(-.9+0.3f,.9f);
    glVertex2f(-.88+0.3f,.86f);

    glVertex2f(-.9f+0.3,.9f-.1);
    glVertex2f(-.88+0.3f,.86f-.1);

    glVertex2f(-.9f+0.3,.9f-.2);
    glVertex2f(-.88+0.3f,.86f-.2);

    glVertex2f(-.9f+0.3,.9f-.3);
    glVertex2f(-.88f+0.3,.86f-.3);

    glVertex2f(-.9f+0.3,.9f-.4);
    glVertex2f(-.88f+0.3,.86f-.4);

    glVertex2f(-.9f+0.3,.9f-.5);
    glVertex2f(-.88f+0.3,.86f-.5);

    glVertex2f(-.9f+0.3,.9f-.6);
    glVertex2f(-.88f+0.3,.86f-.6);

    glVertex2f(-.9f+0.3,.9f-.7);
    glVertex2f(-.88f+0.3,.86f-.7);

    glVertex2f(-.9f+0.3,.9f-.8);
    glVertex2f(-.88f+0.3,.86f-.8);

    glVertex2f(-.9f+0.3,.9f-.9);
    glVertex2f(-.88f+0.3,.86f-.9);

    glVertex2f(-.9f+0.3,.9f-1.0);
    glVertex2f(-.88f+0.3,.86f-1.0);

    glVertex2f(-.9f+0.3,.9f-1.1);
    glVertex2f(-.88f+0.3,.86f-1.1);

    glVertex2f(-.9f+0.3,.9f-1.2);
    glVertex2f(-.88f+0.3,.86f-1.2);

    glVertex2f(-.9f+0.3,.9f-1.2);
    glVertex2f(-.88f+0.3,.86f-1.2);

    glVertex2f(-.9f+0.3,.9f-1.3);
    glVertex2f(-.88f+0.3,.86f-1.3);

    glVertex2f(-.9f+0.3,.9f-1.4);
    glVertex2f(-.88f+0.3,.86f-1.4);

    glVertex2f(-.9f+0.3,.9f-1.5);
    glVertex2f(-.88f+0.3,.86f-1.5);

    glVertex2f(-.9f+0.3,.9f-1.6);
    glVertex2f(-.88f+0.3,.86f-1.6);

    glVertex2f(-.9f+0.3,.9f-1.7);
    glVertex2f(-.88f+0.3,.86f-1.7);

    glVertex2f(-.9f+0.3,.9f-1.8);
    glVertex2f(-.88f+0.3,.86f-1.8);

    glVertex2f(-.9f+0.3,.9f-1.9);
    glVertex2f(-.88f+0.3,.86f-1.9);

    glVertex2f(-.9+0.4f,.9f);
    glVertex2f(-.88+0.4f,.86f);

    glVertex2f(-.9f+0.4,.9f-.1);
    glVertex2f(-.88+0.4f,.86f-.1);

    glVertex2f(-.9f+0.4,.9f-.2);
    glVertex2f(-.88+0.4f,.86f-.2);

    glVertex2f(-.9f+0.4,.9f-.3);
    glVertex2f(-.88f+0.4,.86f-.3);

    glVertex2f(-.9f+0.4,.9f-.4);
    glVertex2f(-.88f+0.4,.86f-.4);

    glVertex2f(-.9f+0.4,.9f-.5);
    glVertex2f(-.88f+0.4,.86f-.5);

    glVertex2f(-.9f+0.4,.9f-.6);
    glVertex2f(-.88f+0.4,.86f-.6);

    glVertex2f(-.9f+0.4,.9f-.7);
    glVertex2f(-.88f+0.4,.86f-.7);

    glVertex2f(-.9f+0.4,.9f-.8);
    glVertex2f(-.88f+0.4,.86f-.8);

    glVertex2f(-.9f+0.4,.9f-.9);
    glVertex2f(-.88f+0.4,.86f-.9);

    glVertex2f(-.9f+0.4,.9f-1.0);
    glVertex2f(-.88f+0.4,.86f-1.0);

    glVertex2f(-.9f+0.4,.9f-1.1);
    glVertex2f(-.88f+0.4,.86f-1.1);

    glVertex2f(-.9f+0.4,.9f-1.2);
    glVertex2f(-.88f+0.4,.86f-1.2);

    glVertex2f(-.9f+0.4,.9f-1.2);
    glVertex2f(-.88f+0.4,.86f-1.2);

    glVertex2f(-.9f+0.4,.9f-1.3);
    glVertex2f(-.88f+0.4,.86f-1.3);

    glVertex2f(-.9f+0.4,.9f-1.4);
    glVertex2f(-.88f+0.4,.86f-1.4);

    glVertex2f(-.9f+0.4,.9f-1.5);
    glVertex2f(-.88f+0.4,.86f-1.5);

    glVertex2f(-.9f+0.4,.9f-1.6);
    glVertex2f(-.88f+0.4,.86f-1.6);

    glVertex2f(-.9f+0.4,.9f-1.7);
    glVertex2f(-.88f+0.4,.86f-1.7);

    glVertex2f(-.9f+0.4,.9f-1.8);
    glVertex2f(-.88f+0.4,.86f-1.8);

    glVertex2f(-.9f+0.4,.9f-1.9);
    glVertex2f(-.88f+0.4,.86f-1.9);

    glVertex2f(-.9+0.5f,.9f);
    glVertex2f(-.88+0.5f,.86f);

    glVertex2f(-.9f+0.5,.9f-.1);
    glVertex2f(-.88+0.5f,.86f-.1);

    glVertex2f(-.9f+0.5,.9f-.2);
    glVertex2f(-.88+0.5f,.86f-.2);

    glVertex2f(-.9f+0.5,.9f-.3);
    glVertex2f(-.88f+0.5,.86f-.3);

    glVertex2f(-.9f+0.5,.9f-.4);
    glVertex2f(-.88f+0.5,.86f-.4);

    glVertex2f(-.9f+0.5,.9f-.5);
    glVertex2f(-.88f+0.5,.86f-.5);

    glVertex2f(-.9f+0.5,.9f-.6);
    glVertex2f(-.88f+0.5,.86f-.6);

    glVertex2f(-.9f+0.5,.9f-.7);
    glVertex2f(-.88f+0.5,.86f-.7);

    glVertex2f(-.9f+0.5,.9f-.8);
    glVertex2f(-.88f+0.5,.86f-.8);

    glVertex2f(-.9f+0.5,.9f-.9);
    glVertex2f(-.88f+0.5,.86f-.9);

    glVertex2f(-.9f+0.5,.9f-1.0);
    glVertex2f(-.88f+0.5,.86f-1.0);

    glVertex2f(-.9f+0.5,.9f-1.1);
    glVertex2f(-.88f+0.5,.86f-1.1);

    glVertex2f(-.9f+0.5,.9f-1.2);
    glVertex2f(-.88f+0.5,.86f-1.2);

    glVertex2f(-.9f+0.5,.9f-1.2);
    glVertex2f(-.88f+0.5,.86f-1.2);

    glVertex2f(-.9f+0.5,.9f-1.3);
    glVertex2f(-.88f+0.5,.86f-1.3);

    glVertex2f(-.9f+0.5,.9f-1.4);
    glVertex2f(-.88f+0.5,.86f-1.4);

    glVertex2f(-.9f+0.5,.9f-1.5);
    glVertex2f(-.88f+0.5,.86f-1.5);

    glVertex2f(-.9f+0.5,.9f-1.6);
    glVertex2f(-.88f+0.5,.86f-1.6);

    glVertex2f(-.9f+0.5,.9f-1.7);
    glVertex2f(-.88f+0.5,.86f-1.7);

    glVertex2f(-.9f+0.5,.9f-1.8);
    glVertex2f(-.88f+0.5,.86f-1.8);

    glVertex2f(-.9f+0.5,.9f-1.9);
    glVertex2f(-.88f+0.5,.86f-1.9);

    glVertex2f(-.9+0.6f,.9f);
    glVertex2f(-.88+0.6f,.86f);

    glVertex2f(-.9f+0.6,.9f-.1);
    glVertex2f(-.88+0.6f,.86f-.1);

    glVertex2f(-.9f+0.6,.9f-.2);
    glVertex2f(-.88+0.6f,.86f-.2);

    glVertex2f(-.9f+0.6,.9f-.3);
    glVertex2f(-.88f+0.6,.86f-.3);

    glVertex2f(-.9f+0.6,.9f-.4);
    glVertex2f(-.88f+0.6,.86f-.4);

    glVertex2f(-.9f+0.6,.9f-.5);
    glVertex2f(-.88f+0.6,.86f-.5);

    glVertex2f(-.9f+0.6,.9f-.6);
    glVertex2f(-.88f+0.6,.86f-.6);

    glVertex2f(-.9f+0.6,.9f-.7);
    glVertex2f(-.88f+0.6,.86f-.7);

    glVertex2f(-.9f+0.6,.9f-.8);
    glVertex2f(-.88f+0.6,.86f-.8);

    glVertex2f(-.9f+0.6,.9f-.9);
    glVertex2f(-.88f+0.6,.86f-.9);

    glVertex2f(-.9f+0.6,.9f-1.0);
    glVertex2f(-.88f+0.6,.86f-1.0);

    glVertex2f(-.9f+0.6,.9f-1.1);
    glVertex2f(-.88f+0.6,.86f-1.1);

    glVertex2f(-.9f+0.6,.9f-1.2);
    glVertex2f(-.88f+0.6,.86f-1.2);

    glVertex2f(-.9f+0.6,.9f-1.2);
    glVertex2f(-.88f+0.6,.86f-1.2);

    glVertex2f(-.9f+0.6,.9f-1.3);
    glVertex2f(-.88f+0.6,.86f-1.3);

    glVertex2f(-.9f+0.6,.9f-1.4);
    glVertex2f(-.88f+0.6,.86f-1.4);

    glVertex2f(-.9f+0.6,.9f-1.5);
    glVertex2f(-.88f+0.6,.86f-1.5);

    glVertex2f(-.9f+0.6,.9f-1.6);
    glVertex2f(-.88f+0.6,.86f-1.6);

    glVertex2f(-.9f+0.6,.9f-1.7);
    glVertex2f(-.88f+0.6,.86f-1.7);

    glVertex2f(-.9f+0.6,.9f-1.8);
    glVertex2f(-.88f+0.6,.86f-1.8);

    glVertex2f(-.9f+0.6,.9f-1.9);
    glVertex2f(-.88f+0.6,.86f-1.9);

    glVertex2f(-.9+0.7f,.9f);
    glVertex2f(-.88+0.7f,.86f);

    glVertex2f(-.9f+0.7,.9f-.1);
    glVertex2f(-.88+0.7f,.86f-.1);

    glVertex2f(-.9f+0.7,.9f-.2);
    glVertex2f(-.88+0.7f,.86f-.2);

    glVertex2f(-.9f+0.7,.9f-.3);
    glVertex2f(-.88f+0.7,.86f-.3);

    glVertex2f(-.9f+0.7,.9f-.4);
    glVertex2f(-.88f+0.7,.86f-.4);

    glVertex2f(-.9f+0.7,.9f-.5);
    glVertex2f(-.88f+0.7,.86f-.5);

    glVertex2f(-.9f+0.7,.9f-.6);
    glVertex2f(-.88f+0.7,.86f-.6);

    glVertex2f(-.9f+0.7,.9f-.7);
    glVertex2f(-.88f+0.7,.86f-.7);

    glVertex2f(-.9f+0.7,.9f-.8);
    glVertex2f(-.88f+0.7,.86f-.8);

    glVertex2f(-.9f+0.7,.9f-.9);
    glVertex2f(-.88f+0.7,.86f-.9);

    glVertex2f(-.9f+0.7,.9f-1.0);
    glVertex2f(-.88f+0.7,.86f-1.0);

    glVertex2f(-.9f+0.7,.9f-1.1);
    glVertex2f(-.88f+0.7,.86f-1.1);

    glVertex2f(-.9f+0.7,.9f-1.2);
    glVertex2f(-.88f+0.7,.86f-1.2);

    glVertex2f(-.9f+0.7,.9f-1.2);
    glVertex2f(-.88f+0.7,.86f-1.2);

    glVertex2f(-.9f+0.7,.9f-1.3);
    glVertex2f(-.88f+0.7,.86f-1.3);

    glVertex2f(-.9f+0.7,.9f-1.4);
    glVertex2f(-.88f+0.7,.86f-1.4);

    glVertex2f(-.9f+0.7,.9f-1.5);
    glVertex2f(-.88f+0.7,.86f-1.5);

    glVertex2f(-.9f+0.7,.9f-1.6);
    glVertex2f(-.88f+0.7,.86f-1.6);

    glVertex2f(-.9f+0.7,.9f-1.7);
    glVertex2f(-.88f+0.7,.86f-1.7);

    glVertex2f(-.9f+0.7,.9f-1.8);
    glVertex2f(-.88f+0.7,.86f-1.8);

    glVertex2f(-.9f+0.7,.9f-1.9);
    glVertex2f(-.88f+0.7,.86f-1.9);

    glVertex2f(-.9+0.8f,.9f);
    glVertex2f(-.88+0.8f,.86f);

    glVertex2f(-.9f+0.8,.9f-.1);
    glVertex2f(-.88+0.8f,.86f-.1);

    glVertex2f(-.9f+0.8,.9f-.2);
    glVertex2f(-.88+0.8f,.86f-.2);

    glVertex2f(-.9f+0.8,.9f-.3);
    glVertex2f(-.88f+0.8,.86f-.3);

    glVertex2f(-.9f+0.8,.9f-.4);
    glVertex2f(-.88f+0.8,.86f-.4);

    glVertex2f(-.9f+0.8,.9f-.5);
    glVertex2f(-.88f+0.8,.86f-.5);

    glVertex2f(-.9f+0.8,.9f-.6);
    glVertex2f(-.88f+0.8,.86f-.6);

    glVertex2f(-.9f+0.8,.9f-.7);
    glVertex2f(-.88f+0.8,.86f-.7);

    glVertex2f(-.9f+0.8,.9f-.8);
    glVertex2f(-.88f+0.8,.86f-.8);

    glVertex2f(-.9f+0.8,.9f-.9);
    glVertex2f(-.88f+0.8,.86f-.9);

    glVertex2f(-.9f+0.8,.9f-1.0);
    glVertex2f(-.88f+0.8,.86f-1.0);

    glVertex2f(-.9f+0.8,.9f-1.1);
    glVertex2f(-.88f+0.8,.86f-1.1);

    glVertex2f(-.9f+0.8,.9f-1.2);
    glVertex2f(-.88f+0.8,.86f-1.2);

    glVertex2f(-.9f+0.8,.9f-1.2);
    glVertex2f(-.88f+0.8,.86f-1.2);

    glVertex2f(-.9f+0.8,.9f-1.3);
    glVertex2f(-.88f+0.8,.86f-1.3);

    glVertex2f(-.9f+0.8,.9f-1.4);
    glVertex2f(-.88f+0.8,.86f-1.4);

    glVertex2f(-.9f+0.8,.9f-1.5);
    glVertex2f(-.88f+0.8,.86f-1.5);

    glVertex2f(-.9f+0.8,.9f-1.6);
    glVertex2f(-.88f+0.8,.86f-1.6);

    glVertex2f(-.9f+0.8,.9f-1.7);
    glVertex2f(-.88f+0.8,.86f-1.7);

    glVertex2f(-.9f+0.8,.9f-1.8);
    glVertex2f(-.88f+0.8,.86f-1.8);

    glVertex2f(-.9f+0.8,.9f-1.9);
    glVertex2f(-.88f+0.8,.86f-1.9);

    glVertex2f(-.9+0.9f,.9f);
    glVertex2f(-.88+0.9f,.86f);

    glVertex2f(-.9f+0.9,.9f-.1);
    glVertex2f(-.88+0.9f,.86f-.1);

    glVertex2f(-.9f+0.9,.9f-.2);
    glVertex2f(-.88+0.9f,.86f-.2);

    glVertex2f(-.9f+0.9,.9f-.3);
    glVertex2f(-.88f+0.9,.86f-.3);

    glVertex2f(-.9f+0.9,.9f-.4);
    glVertex2f(-.88f+0.9,.86f-.4);

    glVertex2f(-.9f+0.9,.9f-.5);
    glVertex2f(-.88f+0.9,.86f-.5);

    glVertex2f(-.9f+0.9,.9f-.6);
    glVertex2f(-.88f+0.9,.86f-.6);

    glVertex2f(-.9f+0.9,.9f-.7);
    glVertex2f(-.88f+0.9,.86f-.7);

    glVertex2f(-.9f+0.9,.9f-.8);
    glVertex2f(-.88f+0.9,.86f-.8);

    glVertex2f(-.9f+0.9,.9f-.9);
    glVertex2f(-.88f+0.9,.86f-.9);

    glVertex2f(-.9f+0.9,.9f-1.0);
    glVertex2f(-.88f+0.9,.86f-1.0);

    glVertex2f(-.9f+0.9,.9f-1.1);
    glVertex2f(-.88f+0.9,.86f-1.1);

    glVertex2f(-.9f+0.9,.9f-1.2);
    glVertex2f(-.88f+0.9,.86f-1.2);

    glVertex2f(-.9f+0.9,.9f-1.2);
    glVertex2f(-.88f+0.9,.86f-1.2);

    glVertex2f(-.9f+0.9,.9f-1.3);
    glVertex2f(-.88f+0.9,.86f-1.3);

    glVertex2f(-.9f+0.9,.9f-1.4);
    glVertex2f(-.88f+0.9,.86f-1.4);

    glVertex2f(-.9f+0.9,.9f-1.5);
    glVertex2f(-.88f+0.9,.86f-1.5);

    glVertex2f(-.9f+0.9,.9f-1.6);
    glVertex2f(-.88f+0.9,.86f-1.6);

    glVertex2f(-.9f+0.9,.9f-1.7);
    glVertex2f(-.88f+0.9,.86f-1.7);

    glVertex2f(-.9f+0.9,.9f-1.8);
    glVertex2f(-.88f+0.9,.86f-1.8);

    glVertex2f(-.9f+0.9,.9f-1.9);
    glVertex2f(-.88f+0.9,.86f-1.9);

    glVertex2f(-.9+1.0f,.9f);
    glVertex2f(-.88+1.0f,.86f);

    glVertex2f(-.9f+1.0,.9f-.1);
    glVertex2f(-.88+1.0f,.86f-.1);

    glVertex2f(-.9f+1.0,.9f-.2);
    glVertex2f(-.88+1.0f,.86f-.2);

    glVertex2f(-.9f+1.0,.9f-.3);
    glVertex2f(-.88f+1.0,.86f-.3);

    glVertex2f(-.9f+1.0,.9f-.4);
    glVertex2f(-.88f+1.0,.86f-.4);

    glVertex2f(-.9f+1.0,.9f-.5);
    glVertex2f(-.88f+1.0,.86f-.5);

    glVertex2f(-.9f+1.0,.9f-.6);
    glVertex2f(-.88f+1.0,.86f-.6);

    glVertex2f(-.9f+1.0,.9f-.7);
    glVertex2f(-.88f+1.0,.86f-.7);

    glVertex2f(-.9f+1.0,.9f-.8);
    glVertex2f(-.88f+1.0,.86f-.8);

    glVertex2f(-.9f+1.0,.9f-.9);
    glVertex2f(-.88f+1.0,.86f-.9);

    glVertex2f(-.9f+1.0,.9f-1.0);
    glVertex2f(-.88f+1.0,.86f-1.0);

    glVertex2f(-.9f+1.0,.9f-1.1);
    glVertex2f(-.88f+1.0,.86f-1.1);

    glVertex2f(-.9f+1.0,.9f-1.2);
    glVertex2f(-.88f+1.0,.86f-1.2);

    glVertex2f(-.9f+1.0,.9f-1.2);
    glVertex2f(-.88f+1.0,.86f-1.2);

    glVertex2f(-.9f+1.0,.9f-1.3);
    glVertex2f(-.88f+1.0,.86f-1.3);

    glVertex2f(-.9f+1.0,.9f-1.4);
    glVertex2f(-.88f+1.0,.86f-1.4);

    glVertex2f(-.9f+1.0,.9f-1.5);
    glVertex2f(-.88f+1.0,.86f-1.5);

    glVertex2f(-.9f+1.0,.9f-1.6);
    glVertex2f(-.88f+1.0,.86f-1.6);

    glVertex2f(-.9f+1.0,.9f-1.7);
    glVertex2f(-.88f+1.0,.86f-1.7);

    glVertex2f(-.9f+1.0,.9f-1.8);
    glVertex2f(-.88f+1.0,.86f-1.8);

    glVertex2f(-.9f+1.0,.9f-1.9);
    glVertex2f(-.88f+1.0,.86f-1.9);

    glVertex2f(-.9+1.1f,.9f);
    glVertex2f(-.88+1.1f,.86f);

    glVertex2f(-.9f+1.1,.9f-.1);
    glVertex2f(-.88+1.1f,.86f-.1);

    glVertex2f(-.9f+1.1,.9f-.2);
    glVertex2f(-.88+1.1f,.86f-.2);

    glVertex2f(-.9f+1.1,.9f-.3);
    glVertex2f(-.88f+1.1,.86f-.3);

    glVertex2f(-.9f+1.1,.9f-.4);
    glVertex2f(-.88f+1.1,.86f-.4);

    glVertex2f(-.9f+1.1,.9f-.5);
    glVertex2f(-.88f+1.1,.86f-.5);

    glVertex2f(-.9f+1.1,.9f-.6);
    glVertex2f(-.88f+1.1,.86f-.6);

    glVertex2f(-.9f+1.1,.9f-.7);
    glVertex2f(-.88f+1.1,.86f-.7);

    glVertex2f(-.9f+1.1,.9f-.8);
    glVertex2f(-.88f+1.1,.86f-.8);

    glVertex2f(-.9f+1.1,.9f-.9);
    glVertex2f(-.88f+1.1,.86f-.9);

    glVertex2f(-.9f+1.1,.9f-1.0);
    glVertex2f(-.88f+1.1,.86f-1.0);

    glVertex2f(-.9f+1.1,.9f-1.1);
    glVertex2f(-.88f+1.1,.86f-1.1);

    glVertex2f(-.9f+1.1,.9f-1.2);
    glVertex2f(-.88f+1.1,.86f-1.2);

    glVertex2f(-.9f+1.1,.9f-1.2);
    glVertex2f(-.88f+1.1,.86f-1.2);

    glVertex2f(-.9f+1.1,.9f-1.3);
    glVertex2f(-.88f+1.1,.86f-1.3);

    glVertex2f(-.9f+1.1,.9f-1.4);
    glVertex2f(-.88f+1.1,.86f-1.4);

    glVertex2f(-.9f+1.1,.9f-1.5);
    glVertex2f(-.88f+1.1,.86f-1.5);

    glVertex2f(-.9f+1.1,.9f-1.6);
    glVertex2f(-.88f+1.1,.86f-1.6);

    glVertex2f(-.9f+1.1,.9f-1.7);
    glVertex2f(-.88f+1.1,.86f-1.7);

    glVertex2f(-.9f+1.1,.9f-1.8);
    glVertex2f(-.88f+1.1,.86f-1.8);

    glVertex2f(-.9f+1.1,.9f-1.9);
    glVertex2f(-.88f+1.1,.86f-1.9);

    glVertex2f(-.9+1.2f,.9f);
    glVertex2f(-.88+1.2f,.86f);

    glVertex2f(-.9f+1.2,.9f-.1);
    glVertex2f(-.88+1.2f,.86f-.1);

    glVertex2f(-.9f+1.2,.9f-.2);
    glVertex2f(-.88+1.2f,.86f-.2);

    glVertex2f(-.9f+1.2,.9f-.3);
    glVertex2f(-.88f+1.2,.86f-.3);

    glVertex2f(-.9f+1.2,.9f-.4);
    glVertex2f(-.88f+1.2,.86f-.4);

    glVertex2f(-.9f+1.2,.9f-.5);
    glVertex2f(-.88f+1.2,.86f-.5);

    glVertex2f(-.9f+1.2,.9f-.6);
    glVertex2f(-.88f+1.2,.86f-.6);

    glVertex2f(-.9f+1.2,.9f-.7);
    glVertex2f(-.88f+1.2,.86f-.7);

    glVertex2f(-.9f+1.2,.9f-.8);
    glVertex2f(-.88f+1.2,.86f-.8);

    glVertex2f(-.9f+1.2,.9f-.9);
    glVertex2f(-.88f+1.2,.86f-.9);

    glVertex2f(-.9f+1.2,.9f-1.0);
    glVertex2f(-.88f+1.2,.86f-1.0);

    glVertex2f(-.9f+1.2,.9f-1.1);
    glVertex2f(-.88f+1.2,.86f-1.1);

    glVertex2f(-.9f+1.2,.9f-1.2);
    glVertex2f(-.88f+1.2,.86f-1.2);

    glVertex2f(-.9f+1.2,.9f-1.2);
    glVertex2f(-.88f+1.2,.86f-1.2);

    glVertex2f(-.9f+1.2,.9f-1.3);
    glVertex2f(-.88f+1.2,.86f-1.3);

    glVertex2f(-.9f+1.2,.9f-1.4);
    glVertex2f(-.88f+1.2,.86f-1.4);

    glVertex2f(-.9f+1.2,.9f-1.5);
    glVertex2f(-.88f+1.2,.86f-1.5);

    glVertex2f(-.9f+1.2,.9f-1.6);
    glVertex2f(-.88f+1.2,.86f-1.6);

    glVertex2f(-.9f+1.2,.9f-1.7);
    glVertex2f(-.88f+1.2,.86f-1.7);

    glVertex2f(-.9f+1.2,.9f-1.8);
    glVertex2f(-.88f+1.2,.86f-1.8);

    glVertex2f(-.9f+1.2,.9f-1.9);
    glVertex2f(-.88f+1.2,.86f-1.9);

    glVertex2f(-.9+1.3f,.9f);
    glVertex2f(-.88+1.3f,.86f);

    glVertex2f(-.9f+1.3,.9f-.1);
    glVertex2f(-.88+1.3f,.86f-.1);

    glVertex2f(-.9f+1.3,.9f-.2);
    glVertex2f(-.88+1.3f,.86f-.2);

    glVertex2f(-.9f+1.3,.9f-.3);
    glVertex2f(-.88f+1.3,.86f-.3);

    glVertex2f(-.9f+1.3,.9f-.4);
    glVertex2f(-.88f+1.3,.86f-.4);

    glVertex2f(-.9f+1.3,.9f-.5);
    glVertex2f(-.88f+1.3,.86f-.5);

    glVertex2f(-.9f+1.3,.9f-.6);
    glVertex2f(-.88f+1.3,.86f-.6);

    glVertex2f(-.9f+1.3,.9f-.7);
    glVertex2f(-.88f+1.3,.86f-.7);

    glVertex2f(-.9f+1.3,.9f-.8);
    glVertex2f(-.88f+1.3,.86f-.8);

    glVertex2f(-.9f+1.3,.9f-.9);
    glVertex2f(-.88f+1.3,.86f-.9);

    glVertex2f(-.9f+1.3,.9f-1.0);
    glVertex2f(-.88f+1.3,.86f-1.0);

    glVertex2f(-.9f+1.3,.9f-1.1);
    glVertex2f(-.88f+1.3,.86f-1.1);

    glVertex2f(-.9f+1.3,.9f-1.2);
    glVertex2f(-.88f+1.3,.86f-1.2);

    glVertex2f(-.9f+1.3,.9f-1.2);
    glVertex2f(-.88f+1.3,.86f-1.2);

    glVertex2f(-.9f+1.3,.9f-1.3);
    glVertex2f(-.88f+1.3,.86f-1.3);

    glVertex2f(-.9f+1.3,.9f-1.4);
    glVertex2f(-.88f+1.3,.86f-1.4);

    glVertex2f(-.9f+1.3,.9f-1.5);
    glVertex2f(-.88f+1.3,.86f-1.5);

    glVertex2f(-.9f+1.3,.9f-1.6);
    glVertex2f(-.88f+1.3,.86f-1.6);

    glVertex2f(-.9f+1.3,.9f-1.7);
    glVertex2f(-.88f+1.3,.86f-1.7);

    glVertex2f(-.9f+1.3,.9f-1.8);
    glVertex2f(-.88f+1.3,.86f-1.8);

    glVertex2f(-.9f+1.3,.9f-1.9);
    glVertex2f(-.88f+1.3,.86f-1.9);

    glVertex2f(-.9+1.4f,.9f);
    glVertex2f(-.88+1.4f,.86f);

    glVertex2f(-.9f+1.4,.9f-.1);
    glVertex2f(-.88+1.4f,.86f-.1);

    glVertex2f(-.9f+1.4,.9f-.2);
    glVertex2f(-.88+1.4f,.86f-.2);

    glVertex2f(-.9f+1.4,.9f-.3);
    glVertex2f(-.88f+1.4,.86f-.3);

    glVertex2f(-.9f+1.4,.9f-.4);
    glVertex2f(-.88f+1.4,.86f-.4);

    glVertex2f(-.9f+1.4,.9f-.5);
    glVertex2f(-.88f+1.4,.86f-.5);

    glVertex2f(-.9f+1.4,.9f-.6);
    glVertex2f(-.88f+1.4,.86f-.6);

    glVertex2f(-.9f+1.4,.9f-.7);
    glVertex2f(-.88f+1.4,.86f-.7);

    glVertex2f(-.9f+1.4,.9f-.8);
    glVertex2f(-.88f+1.4,.86f-.8);

    glVertex2f(-.9f+1.4,.9f-.9);
    glVertex2f(-.88f+1.4,.86f-.9);

    glVertex2f(-.9f+1.4,.9f-1.0);
    glVertex2f(-.88f+1.4,.86f-1.0);

    glVertex2f(-.9f+1.4,.9f-1.1);
    glVertex2f(-.88f+1.4,.86f-1.1);

    glVertex2f(-.9f+1.4,.9f-1.2);
    glVertex2f(-.88f+1.4,.86f-1.2);

    glVertex2f(-.9f+1.4,.9f-1.2);
    glVertex2f(-.88f+1.4,.86f-1.2);

    glVertex2f(-.9f+1.4,.9f-1.3);
    glVertex2f(-.88f+1.4,.86f-1.3);

    glVertex2f(-.9f+1.4,.9f-1.4);
    glVertex2f(-.88f+1.4,.86f-1.4);

    glVertex2f(-.9f+1.4,.9f-1.5);
    glVertex2f(-.88f+1.4,.86f-1.5);

    glVertex2f(-.9f+1.4,.9f-1.6);
    glVertex2f(-.88f+1.4,.86f-1.6);

    glVertex2f(-.9f+1.4,.9f-1.7);
    glVertex2f(-.88f+1.4,.86f-1.7);

    glVertex2f(-.9f+1.4,.9f-1.8);
    glVertex2f(-.88f+1.4,.86f-1.8);

    glVertex2f(-.9f+1.4,.9f-1.9);
    glVertex2f(-.88f+1.4,.86f-1.9);

    glVertex2f(-.9+1.5f,.9f);
    glVertex2f(-.88+1.5f,.86f);

    glVertex2f(-.9f+1.5,.9f-.1);
    glVertex2f(-.88+1.5f,.86f-.1);

    glVertex2f(-.9f+1.5,.9f-.2);
    glVertex2f(-.88+1.5f,.86f-.2);

    glVertex2f(-.9f+1.5,.9f-.3);
    glVertex2f(-.88f+1.5,.86f-.3);

    glVertex2f(-.9f+1.5,.9f-.4);
    glVertex2f(-.88f+1.5,.86f-.4);

    glVertex2f(-.9f+1.5,.9f-.5);
    glVertex2f(-.88f+1.5,.86f-.5);

    glVertex2f(-.9f+1.5,.9f-.6);
    glVertex2f(-.88f+1.5,.86f-.6);

    glVertex2f(-.9f+1.5,.9f-.7);
    glVertex2f(-.88f+1.5,.86f-.7);

    glVertex2f(-.9f+1.5,.9f-.8);
    glVertex2f(-.88f+1.5,.86f-.8);

    glVertex2f(-.9f+1.5,.9f-.9);
    glVertex2f(-.88f+1.5,.86f-.9);

    glVertex2f(-.9f+1.5,.9f-1.0);
    glVertex2f(-.88f+1.5,.86f-1.0);

    glVertex2f(-.9f+1.5,.9f-1.1);
    glVertex2f(-.88f+1.5,.86f-1.1);

    glVertex2f(-.9f+1.5,.9f-1.2);
    glVertex2f(-.88f+1.5,.86f-1.2);

    glVertex2f(-.9f+1.5,.9f-1.2);
    glVertex2f(-.88f+1.5,.86f-1.2);

    glVertex2f(-.9f+1.5,.9f-1.3);
    glVertex2f(-.88f+1.5,.86f-1.3);

    glVertex2f(-.9f+1.5,.9f-1.4);
    glVertex2f(-.88f+1.5,.86f-1.4);

    glVertex2f(-.9f+1.5,.9f-1.5);
    glVertex2f(-.88f+1.5,.86f-1.5);

    glVertex2f(-.9f+1.5,.9f-1.6);
    glVertex2f(-.88f+1.5,.86f-1.6);

    glVertex2f(-.9f+1.5,.9f-1.7);
    glVertex2f(-.88f+1.5,.86f-1.7);

    glVertex2f(-.9f+1.5,.9f-1.8);
    glVertex2f(-.88f+1.5,.86f-1.8);

    glVertex2f(-.9f+1.5,.9f-1.9);
    glVertex2f(-.88f+1.5,.86f-1.9);

    glVertex2f(-.9+1.7f,.9f);
    glVertex2f(-.88+1.7f,.86f);

    glVertex2f(-.9f+1.7,.9f-.1);
    glVertex2f(-.88+1.7f,.86f-.1);

    glVertex2f(-.9f+1.7,.9f-.2);
    glVertex2f(-.88+1.7f,.86f-.2);

    glVertex2f(-.9f+1.7,.9f-.3);
    glVertex2f(-.88f+1.7,.86f-.3);

    glVertex2f(-.9f+1.7,.9f-.4);
    glVertex2f(-.88f+1.7,.86f-.4);

    glVertex2f(-.9f+1.7,.9f-.5);
    glVertex2f(-.88f+1.7,.86f-.5);

    glVertex2f(-.9f+1.7,.9f-.6);
    glVertex2f(-.88f+1.7,.86f-.6);

    glVertex2f(-.9f+1.7,.9f-.7);
    glVertex2f(-.88f+1.7,.86f-.7);

    glVertex2f(-.9f+1.7,.9f-.8);
    glVertex2f(-.88f+1.7,.86f-.8);

    glVertex2f(-.9f+1.7,.9f-.9);
    glVertex2f(-.88f+1.7,.86f-.9);

    glVertex2f(-.9f+1.7,.9f-1.0);
    glVertex2f(-.88f+1.7,.86f-1.0);

    glVertex2f(-.9f+1.7,.9f-1.1);
    glVertex2f(-.88f+1.7,.86f-1.1);

    glVertex2f(-.9f+1.7,.9f-1.2);
    glVertex2f(-.88f+1.7,.86f-1.2);

    glVertex2f(-.9f+1.7,.9f-1.2);
    glVertex2f(-.88f+1.7,.86f-1.2);

    glVertex2f(-.9f+1.7,.9f-1.3);
    glVertex2f(-.88f+1.7,.86f-1.3);

    glVertex2f(-.9f+1.7,.9f-1.4);
    glVertex2f(-.88f+1.7,.86f-1.4);

    glVertex2f(-.9f+1.7,.9f-1.5);
    glVertex2f(-.88f+1.7,.86f-1.5);

    glVertex2f(-.9f+1.7,.9f-1.6);
    glVertex2f(-.88f+1.7,.86f-1.6);

    glVertex2f(-.9f+1.7,.9f-1.7);
    glVertex2f(-.88f+1.7,.86f-1.7);

    glVertex2f(-.9f+1.7,.9f-1.8);
    glVertex2f(-.88f+1.7,.86f-1.8);

    glVertex2f(-.9f+1.7,.9f-1.9);
    glVertex2f(-.88f+1.7,.86f-1.9);

    glVertex2f(-.9+1.6f,.9f);
    glVertex2f(-.88+1.6f,.86f);

    glVertex2f(-.9f+1.6,.9f-.1);
    glVertex2f(-.88+1.6f,.86f-.1);

    glVertex2f(-.9f+1.6,.9f-.2);
    glVertex2f(-.88+1.6f,.86f-.2);

    glVertex2f(-.9f+1.6,.9f-.3);
    glVertex2f(-.88f+1.6,.86f-.3);

    glVertex2f(-.9f+1.6,.9f-.4);
    glVertex2f(-.88f+1.6,.86f-.4);

    glVertex2f(-.9f+1.6,.9f-.5);
    glVertex2f(-.88f+1.6,.86f-.5);

    glVertex2f(-.9f+1.6,.9f-.6);
    glVertex2f(-.88f+1.6,.86f-.6);

    glVertex2f(-.9f+1.6,.9f-.7);
    glVertex2f(-.88f+1.6,.86f-.7);

    glVertex2f(-.9f+1.6,.9f-.8);
    glVertex2f(-.88f+1.6,.86f-.8);

    glVertex2f(-.9f+1.6,.9f-.9);
    glVertex2f(-.88f+1.6,.86f-.9);

    glVertex2f(-.9f+1.6,.9f-1.0);
    glVertex2f(-.88f+1.6,.86f-1.0);

    glVertex2f(-.9f+1.6,.9f-1.1);
    glVertex2f(-.88f+1.6,.86f-1.1);

    glVertex2f(-.9f+1.6,.9f-1.2);
    glVertex2f(-.88f+1.6,.86f-1.2);

    glVertex2f(-.9f+1.6,.9f-1.2);
    glVertex2f(-.88f+1.6,.86f-1.2);

    glVertex2f(-.9f+1.6,.9f-1.3);
    glVertex2f(-.88f+1.6,.86f-1.3);

    glVertex2f(-.9f+1.6,.9f-1.4);
    glVertex2f(-.88f+1.6,.86f-1.4);

    glVertex2f(-.9f+1.6,.9f-1.5);
    glVertex2f(-.88f+1.6,.86f-1.5);

    glVertex2f(-.9f+1.6,.9f-1.6);
    glVertex2f(-.88f+1.6,.86f-1.6);

    glVertex2f(-.9f+1.6,.9f-1.7);
    glVertex2f(-.88f+1.6,.86f-1.7);

    glVertex2f(-.9f+1.6,.9f-1.8);
    glVertex2f(-.88f+1.6,.86f-1.8);

    glVertex2f(-.9f+1.6,.9f-1.9);
    glVertex2f(-.88f+1.6,.86f-1.9);


    glVertex2f(-.9+1.8f,.9f);
    glVertex2f(-.88+1.8f,.86f);

    glVertex2f(-.9f+1.8,.9f-.1);
    glVertex2f(-.88+1.8f,.86f-.1);

    glVertex2f(-.9f+1.8,.9f-.2);
    glVertex2f(-.88+1.8f,.86f-.2);

    glVertex2f(-.9f+1.8,.9f-.3);
    glVertex2f(-.88f+1.8,.86f-.3);

    glVertex2f(-.9f+1.8,.9f-.4);
    glVertex2f(-.88f+1.8,.86f-.4);

    glVertex2f(-.9f+1.8,.9f-.5);
    glVertex2f(-.88f+1.8,.86f-.5);

    glVertex2f(-.9f+1.8,.9f-.6);
    glVertex2f(-.88f+1.8,.86f-.6);

    glVertex2f(-.9f+1.8,.9f-.7);
    glVertex2f(-.88f+1.8,.86f-.7);

    glVertex2f(-.9f+1.8,.9f-.8);
    glVertex2f(-.88f+1.8,.86f-.8);

    glVertex2f(-.9f+1.8,.9f-.9);
    glVertex2f(-.88f+1.8,.86f-.9);

    glVertex2f(-.9f+1.8,.9f-1.0);
    glVertex2f(-.88f+1.8,.86f-1.0);

    glVertex2f(-.9f+1.8,.9f-1.1);
    glVertex2f(-.88f+1.8,.86f-1.1);

    glVertex2f(-.9f+1.8,.9f-1.2);
    glVertex2f(-.88f+1.8,.86f-1.2);

    glVertex2f(-.9f+1.8,.9f-1.2);
    glVertex2f(-.88f+1.8,.86f-1.2);

    glVertex2f(-.9f+1.8,.9f-1.3);
    glVertex2f(-.88f+1.8,.86f-1.3);

    glVertex2f(-.9f+1.8,.9f-1.4);
    glVertex2f(-.88f+1.8,.86f-1.4);

    glVertex2f(-.9f+1.8,.9f-1.5);
    glVertex2f(-.88f+1.8,.86f-1.5);

    glVertex2f(-.9f+1.8,.9f-1.6);
    glVertex2f(-.88f+1.8,.86f-1.6);

    glVertex2f(-.9f+1.8,.9f-1.7);
    glVertex2f(-.88f+1.8,.86f-1.7);

    glVertex2f(-.9f+1.8,.9f-1.8);
    glVertex2f(-.88f+1.8,.86f-1.8);

    glVertex2f(-.9f+1.8,.9f-1.9);
    glVertex2f(-.88f+1.8,.86f-1.9);

    glVertex2f(-.9f+1.87,.9f-1.9);
    glVertex2f(-.88f+1.87,.86f-1.9);
    ///
    glVertex2f(-.9+1.87f,.9f);
    glVertex2f(-.88+1.87f,.86f);

    glVertex2f(-.9f+1.87,.9f-.1);
    glVertex2f(-.88+1.87f,.86f-.1);

    glVertex2f(-.9f+1.87,.9f-.2);
    glVertex2f(-.88+1.87f,.86f-.2);

    glVertex2f(-.9f+1.87,.9f-.3);
    glVertex2f(-.88f+1.87,.86f-.3);

    glVertex2f(-.9f+1.87,.9f-.4);
    glVertex2f(-.88f+1.87,.86f-.4);

    glVertex2f(-.9f+1.87,.9f-.5);
    glVertex2f(-.88f+1.87,.86f-.5);

    glVertex2f(-.9f+1.87,.9f-.6);
    glVertex2f(-.88f+1.87,.86f-.6);

    glVertex2f(-.9f+1.87,.9f-.7);
    glVertex2f(-.88f+1.87,.86f-.7);

    glVertex2f(-.9f+1.87,.9f-.8);
    glVertex2f(-.88f+1.87,.86f-.8);

    glVertex2f(-.9f+1.87,.9f-.9);
    glVertex2f(-.88f+1.87,.86f-.9);

    glVertex2f(-.9f+1.87,.9f-1.0);
    glVertex2f(-.88f+1.87,.86f-1.0);

    glVertex2f(-.9f+1.87,.9f-1.1);
    glVertex2f(-.88f+1.87,.86f-1.1);

    glVertex2f(-.9f+1.87,.9f-1.2);
    glVertex2f(-.88f+1.87,.86f-1.2);

    glVertex2f(-.9f+1.87,.9f-1.2);
    glVertex2f(-.88f+1.87,.86f-1.2);

    glVertex2f(-.9f+1.87,.9f-1.3);
    glVertex2f(-.88f+1.87,.86f-1.3);

    glVertex2f(-.9f+1.87,.9f-1.4);
    glVertex2f(-.88f+1.87,.86f-1.4);

    glVertex2f(-.9f+1.87,.9f-1.5);
    glVertex2f(-.88f+1.87,.86f-1.5);

    glVertex2f(-.9f+1.87,.9f-1.6);
    glVertex2f(-.88f+1.87,.86f-1.6);

    glVertex2f(-.9f+1.87,.9f-1.7);
    glVertex2f(-.88f+1.87,.86f-1.7);

    glVertex2f(-.9f+1.87,.9f-1.8);
    glVertex2f(-.88f+1.87,.86f-1.8);

    glVertex2f(-.9f+1.87,.9f-1.9);
    glVertex2f(-.88f+1.87,.86f-1.9);

    glEnd();
    glPopMatrix();

    glFlush();
}

void sea()
{
    glBegin(GL_QUADS);
    glColor3ub(2, 219, 216);
    glVertex2f(-1.0,.3);
    glVertex2f(1.0,.3);
    glVertex2f(1.0,.6);
    glVertex2f(-1.0,0.6);
    glEnd();
}

void seaNight()
{
    glBegin(GL_QUADS);
    glColor3ub(51,161,159);
    glVertex2f(-1.0,.3);
    glVertex2f(1.0,.3);
    glVertex2f(1.0,.6);
    glVertex2f(-1.0,0.6);
    glEnd();
}

void boat()
{
    glPushMatrix();
    glScalef(.5f,.4f,0.0f);
    glTranslatef(positionb,0.0f,0.0f);
    glTranslatef(.0f,1.2f,0.0f);
    glColor3ub(181,101,29);
    glBegin(GL_QUADS);
    glVertex2f(0.4f,-0.3f);
    glVertex2f(0.3f,-0.2f);
    glVertex2f(0.8f,-0.2f);
    glVertex2f(0.7f,-0.3f);
    glEnd();
    glColor3ub(255,255,255);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.6f,0.18f);
    glVertex2f(0.4f,-0.2f);
    glVertex2f(0.6f,-0.2f);
    glEnd();
    glColor3ub(0,0,0);
    glLineWidth(3.0);
    glBegin(GL_LINES);
    glVertex2f(0.6f,-0.2f);
    glVertex2f(0.6f,0.18f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
}

void boatNight()
{
    glPushMatrix();
    glScalef(.5f,.4f,0.0f);
    glTranslatef(positionb,0.0f,0.0f);
    glTranslatef(.0f,1.2f,0.0f);
    glColor3ub(143,74,11);
    glBegin(GL_QUADS);
    glVertex2f(0.4f,-0.3f);
    glVertex2f(0.3f,-0.2f);
    glVertex2f(0.8f,-0.2f);
    glVertex2f(0.7f,-0.3f);
    glEnd();
    glColor3ub(222,222,222);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.6f,0.18f);
    glVertex2f(0.4f,-0.2f);
    glVertex2f(0.6f,-0.2f);
    glEnd();
    glColor3ub(0,0,0);
    glLineWidth(3.0);
    glBegin(GL_LINES);
    glVertex2f(0.6f,-0.2f);
    glVertex2f(0.6f,0.18f);
    glEnd();
    glPopMatrix();
    glLoadIdentity();
}

void sky()
{
    glBegin(GL_QUADS);
    glColor3ub(140, 234, 255);
    glVertex2f(-1.0,.6);
    glVertex2f(1.0,.6);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glEnd();
    int i;
    ///sun

    GLfloat xs=.75f; GLfloat ys=0.84f; GLfloat radiuss =.08f;
	int triangleAmount = 100; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 120);
		glVertex2f(xs, ys); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xs+ (radiuss * cos(i *  twicePi / triangleAmount)),
			    ys + (radiuss  * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    ///cloud1
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(positionc1,0.0, 0.0f);

	GLfloat x=.5f; GLfloat y=0.8f; GLfloat radius =.05f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 255, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x1=.59f; GLfloat y1=0.81f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 255, 255);
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat x2=.54f; GLfloat y2=0.84f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 255, 255);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius * cos(i *  twicePi / triangleAmount)),
			    y2 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat x3=.56f; GLfloat y3=0.76f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 255, 255);
		glVertex2f(x3, y3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius * cos(i *  twicePi / triangleAmount)),
			    y3 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
    glLoadIdentity();
	///cloud 1 end

	 ///cloud2
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(positionc2,0.0, 0.0f);

	glTranslatef(-.5f,-.05f,-.0f);

	GLfloat xx=.5f; GLfloat yy=0.8f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 255, 255);
		glVertex2f(xx, yy); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx + (radius * cos(i *  twicePi / triangleAmount)),
			    yy + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xx1=.59f; GLfloat yy1=0.81f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 255, 255);
		glVertex2f(xx1, yy1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx1 + (radius * cos(i *  twicePi / triangleAmount)),
			    yy1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xx2=.54f; GLfloat yy2=0.84f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 255, 255);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx2 + (radius * cos(i *  twicePi / triangleAmount)),
			    yy2 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xx3=.56f; GLfloat yy3=0.76f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 255, 255);
		glVertex2f(xx3, yy3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx3 + (radius * cos(i *  twicePi / triangleAmount)),
			    yy3 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

	glLoadIdentity();
	///cloud 2 end
	 ///cloud3



glTranslatef(-1.4f,.05f,-.0f);

	GLfloat xxx=.5f; GLfloat yyy=0.8f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 255, 255);
		glVertex2f(xxx, yyy); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xxx + (radius * cos(i *  twicePi / triangleAmount)),
			    yyy + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xxx1=.59f; GLfloat yyy1=0.81f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 255, 255);
		glVertex2f(xxx1, yyy1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xxx1 + (radius * cos(i *  twicePi / triangleAmount)),
			    yyy1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xxx2=.54f; GLfloat yyy2=0.84f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 255, 255);
		glVertex2f(xxx2, yyy2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xxx2 + (radius * cos(i *  twicePi / triangleAmount)),
			    yyy2 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xxx3=.56f; GLfloat yyy3=0.76f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 255, 255);
		glVertex2f(xxx3, yyy3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xxx3 + (radius * cos(i *  twicePi / triangleAmount)),
			    yyy3 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glLoadIdentity();
	///cloud 3 end
	///cloud4
	glLoadIdentity();
glPushMatrix();
    glTranslatef(positionc3,0.0, 0.0f);

    glTranslatef(-.9f,.01f,-.0f);

	GLfloat xxxx=.5f; GLfloat yyyy=0.8f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 255, 255);
		glVertex2f(xxxx, yyyy); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xxxx + (radius * cos(i *  twicePi / triangleAmount)),
			    yyyy + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xxxx1=.59f; GLfloat yyyy1=0.81f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 255, 255);
		glVertex2f(xxxx1, yyyy1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xxxx1 + (radius * cos(i *  twicePi / triangleAmount)),
			    yyyy1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xxxx2=.54f; GLfloat yyyy2=0.84f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 255, 255);
		glVertex2f(xxxx2, yyyy2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xxxx2 + (radius * cos(i *  twicePi / triangleAmount)),
			    yyyy2 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xxxx3=.56f; GLfloat yyyy3=0.76f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(252, 255, 255);
		glVertex2f(xxxx3, yyyy3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xxxx3 + (radius * cos(i *  twicePi / triangleAmount)),
			    yyyy3 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glPopMatrix();
	glLoadIdentity();
	///cloud 4 end



}

void skyNight()
{
    glBegin(GL_QUADS);
    glColor3ub(59,80,84);
    glVertex2f(-1.0,.6);
    glVertex2f(1.0,.6);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glEnd();
    int i;
    ///moon

    GLfloat xs=.75f; GLfloat ys=0.84f; GLfloat radiuss =.08f;
	int triangleAmount = 100; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,253,235);
		glVertex2f(xs, ys); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xs+ (radiuss * cos(i *  twicePi / triangleAmount)),
			    ys + (radiuss  * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    ///cloud1
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(positionc1,0.0, 0.0f);

	GLfloat x=.5f; GLfloat y=0.8f; GLfloat radius =.05f;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(156,156,156);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x1=.59f; GLfloat y1=0.81f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(156,156,156);
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat x2=.54f; GLfloat y2=0.84f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(156,156,156);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius * cos(i *  twicePi / triangleAmount)),
			    y2 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat x3=.56f; GLfloat y3=0.76f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(156,156,156);
		glVertex2f(x3, y3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x3 + (radius * cos(i *  twicePi / triangleAmount)),
			    y3 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
    glLoadIdentity();
	///cloud 1 end

	 ///cloud2
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(positionc2,0.0, 0.0f);

	glTranslatef(-.5f,-.05f,-.0f);

	GLfloat xx=.5f; GLfloat yy=0.8f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(156,156,156);
		glVertex2f(xx, yy); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx + (radius * cos(i *  twicePi / triangleAmount)),
			    yy + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xx1=.59f; GLfloat yy1=0.81f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(156,156,156);
		glVertex2f(xx1, yy1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx1 + (radius * cos(i *  twicePi / triangleAmount)),
			    yy1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xx2=.54f; GLfloat yy2=0.84f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(156,156,156);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx2 + (radius * cos(i *  twicePi / triangleAmount)),
			    yy2 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xx3=.56f; GLfloat yy3=0.76f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(156,156,156);
		glVertex2f(xx3, yy3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx3 + (radius * cos(i *  twicePi / triangleAmount)),
			    yy3 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

	glLoadIdentity();
	///cloud 2 end
	 ///cloud3



glTranslatef(-1.4f,.05f,-.0f);

	GLfloat xxx=.5f; GLfloat yyy=0.8f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(156,156,156);
		glVertex2f(xxx, yyy); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xxx + (radius * cos(i *  twicePi / triangleAmount)),
			    yyy + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xxx1=.59f; GLfloat yyy1=0.81f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(156,156,156);
		glVertex2f(xxx1, yyy1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xxx1 + (radius * cos(i *  twicePi / triangleAmount)),
			    yyy1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xxx2=.54f; GLfloat yyy2=0.84f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(156,156,156);
		glVertex2f(xxx2, yyy2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xxx2 + (radius * cos(i *  twicePi / triangleAmount)),
			    yyy2 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xxx3=.56f; GLfloat yyy3=0.76f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(156,156,156);
		glVertex2f(xxx3, yyy3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xxx3 + (radius * cos(i *  twicePi / triangleAmount)),
			    yyy3 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glLoadIdentity();
	///cloud 3 end
	///cloud4
	glLoadIdentity();
glPushMatrix();
    glTranslatef(positionc3,0.0, 0.0f);

    glTranslatef(-.9f,.01f,-.0f);

	GLfloat xxxx=.5f; GLfloat yyyy=0.8f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(156,156,156);
		glVertex2f(xxxx, yyyy); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xxxx + (radius * cos(i *  twicePi / triangleAmount)),
			    yyyy + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xxxx1=.59f; GLfloat yyyy1=0.81f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(156,156,156);
		glVertex2f(xxxx1, yyyy1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xxxx1 + (radius * cos(i *  twicePi / triangleAmount)),
			    yyyy1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xxxx2=.54f; GLfloat yyyy2=0.84f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(156,156,156);
		glVertex2f(xxxx2, yyyy2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xxxx2 + (radius * cos(i *  twicePi / triangleAmount)),
			    yyyy2 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat xxxx3=.56f; GLfloat yyyy3=0.76f;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(156,156,156);
		glVertex2f(xxxx3, yyyy3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xxxx3 + (radius * cos(i *  twicePi / triangleAmount)),
			    yyyy3 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

glPopMatrix();
	glLoadIdentity();
	///cloud 4 end



}

void Road1()
{
    ///ROAD
///
    glBegin(GL_QUADS);
    glColor3ub(62,68,82);
    glVertex2f(-1.0,-0.5);
    glVertex2f(1.0,-0.5);
    glVertex2f(1.0,0.3);
    glVertex2f(-1.0,0.3);
    glEnd();


///MIDDLE
///FOR -X

     glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.48,-0.12);
    glVertex2f(-0.48,-0.08);
    glVertex2f(-0.54,-0.08);
    glVertex2f(-0.54,-0.12);
    glEnd();


     glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.57,-0.12);
    glVertex2f(-0.57,-0.08);
    glVertex2f(-0.63,-0.08);
    glVertex2f(-0.63,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.66,-0.12);
    glVertex2f(-0.66,-0.08);
    glVertex2f(-0.72,-0.08);
    glVertex2f(-0.72,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.75,-0.12);
    glVertex2f(-0.75,-0.08);
    glVertex2f(-0.81,-0.08);
    glVertex2f(-0.81,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.84,-0.12);
    glVertex2f(-0.84,-0.08);
    glVertex2f(-0.9,-0.08);
    glVertex2f(-0.9,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.93,-0.12);
    glVertex2f(-0.93,-0.08);
    glVertex2f(-0.99,-0.08);
    glVertex2f(-0.99,-0.12);
    glEnd();

///MIDDLE
///FOR +X

//update middle start
glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.45,-0.12);
    glVertex2f(0.45,-0.08);
    glVertex2f(0.39,-0.08);
    glVertex2f(0.39,-0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.36,-0.12);
    glVertex2f(0.36,-0.08);
    glVertex2f(0.3,-0.08);
    glVertex2f(0.3,-0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.27,-0.12);
    glVertex2f(0.27,-0.08);
    glVertex2f(0.21,-0.08);
    glVertex2f(0.21,-0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.18,-0.12);
    glVertex2f(0.18,-0.08);
    glVertex2f(0.12,-0.08);
    glVertex2f(0.12,-0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.09,-0.12);
    glVertex2f(0.09,-0.08);
    glVertex2f(0.03,-0.08);
    glVertex2f(0.03,-0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.0,-0.12);
    glVertex2f(0.0,-0.08);
    glVertex2f(-0.06,-0.08);
    glVertex2f(-0.06,-0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.09,-0.12);
    glVertex2f(-0.09,-0.08);
    glVertex2f(-.15,-0.08);
    glVertex2f(-.15,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.18,-0.12);
    glVertex2f(-0.18,-0.08);
    glVertex2f(-.24,-0.08);
    glVertex2f(-.24,-0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.27,-0.12);
    glVertex2f(-0.27,-0.08);
    glVertex2f(-.33,-0.08);
    glVertex2f(-.33,-0.12);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(-0.36,-0.12);
    glVertex2f(-0.36,-0.08);
    glVertex2f(-.43,-0.08);
    glVertex2f(-.43,-0.12);
    glEnd();
     glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.48,-0.12);
    glVertex2f(0.48,-0.08);
    glVertex2f(0.54,-0.08);
    glVertex2f(0.54,-0.12);
    glEnd();


     glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.57,-0.12);
    glVertex2f(0.57,-0.08);
    glVertex2f(0.63,-0.08);
    glVertex2f(0.63,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.66,-0.12);
    glVertex2f(0.66,-0.08);
    glVertex2f(0.72,-0.08);
    glVertex2f(0.72,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.75,-0.12);
    glVertex2f(0.75,-0.08);
    glVertex2f(0.81,-0.08);
    glVertex2f(0.81,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.84,-0.12);
    glVertex2f(0.84,-0.08);
    glVertex2f(.9,-0.08);
    glVertex2f(0.9,-0.12);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 240, 247);
    glVertex2f(0.93,-0.12);
    glVertex2f(0.93,-0.08);
    glVertex2f(0.99,-0.08);
    glVertex2f(0.99,-0.12);
    glEnd();
///ZEBRA CROSSING
///FOR -X



///FOOT PATH
///FOR -X

//update footpath start
    glBegin(GL_QUADS);
    glColor3ub(141, 204, 142);
    glVertex2f(1,-0.5);
    glVertex2f(-1.0,-0.5);
    glVertex2f(-1.0,-0.45);
    glVertex2f(1,-0.45);
    glEnd();

///FOOT PATH
///FOR +X

    glBegin(GL_QUADS);
    glColor3ub(141, 204, 142);
    glVertex2f(-1,0.3);
    glVertex2f(1.0,0.3);
    glVertex2f(1.0,0.25);
    glVertex2f(-1,0.25);
    glEnd();

//update footpath end


}

void Road1Night()
{
    ///ROAD
///
    glBegin(GL_QUADS);
    glColor3ub(21, 23, 28);
    glVertex2f(-1.0,-0.5);
    glVertex2f(1.0,-0.5);
    glVertex2f(1.0,0.3);
    glVertex2f(-1.0,0.3);
    glEnd();






///FOOT PATH
///FOR -X

//update footpath start
    glBegin(GL_QUADS);
    glColor3ub(141, 204, 142);
    glVertex2f(1,-0.5);
    glVertex2f(-1.0,-0.5);
    glVertex2f(-1.0,-0.45);
    glVertex2f(1,-0.45);
    glEnd();

///FOOT PATH
///FOR +X

    glBegin(GL_QUADS);
    glColor3ub(141, 204, 142);
    glVertex2f(-1,0.3);
    glVertex2f(1.0,0.3);
    glVertex2f(1.0,0.25);
    glVertex2f(-1,0.25);
    glEnd();

//update footpath end


}
///
///ROAD2
///




////SIGNAL
///FOR +X,+Y
///

void tree()
{
    //tree 1
    glLoadIdentity();
    glTranslatef(.3f,-0.1f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(102,150,0);
    glVertex2f(-0.95f, -0.78f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(102,150,0);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 2
    glLoadIdentity();
    glTranslatef(.25f,-0.061f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(102,150,0);
    glVertex2f(-0.95f, -0.78f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(102,150,0);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 3
    glLoadIdentity();
    glTranslatef(.21f,-0.09f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(102,150,0);
    glVertex2f(-0.95f, -0.75f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(102,150,0);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 5
    glLoadIdentity();
    glTranslatef(.15f,-0.1f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(102,150,0);
    glVertex2f(-0.95f, -0.7f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(102,150,0);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 6
    glLoadIdentity();
    glTranslatef(.4f,-0.1f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(102,150,0);
    glVertex2f(-0.95f, -0.72f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(102,150,0);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 7
    glLoadIdentity();
    glTranslatef(.6f,-0.01f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(102,150,0);
    glVertex2f(-0.95f, -0.76f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(102,150,0);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 8
    glLoadIdentity();
    glTranslatef(.09f,-0.05f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(102,150,0);
    glVertex2f(-0.95f, -0.68f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(102,150,0);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 9
    glLoadIdentity();
    glTranslatef(1.9f,-0.1f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(102,150,0);
    glVertex2f(-0.95f, -0.78f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(102,150,0);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 10
    glLoadIdentity();
    glTranslatef(1.7f,0.1f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(102,150,0);
    glVertex2f(-0.95f, -0.78f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(102,150,0);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 10
    glLoadIdentity();
    glTranslatef(1.75f,-0.0f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(102,150,0);
    glVertex2f(-0.95f, -0.7f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(102,150,0);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 11
    glLoadIdentity();
    glTranslatef(1.65f,-0.1f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(102,150,0);
    glVertex2f(-0.95f, -0.74f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(102,150,0);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 12
    glLoadIdentity();
    glTranslatef(1.78f,0.055f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(102,150,0);
    glVertex2f(-0.95f, -0.73f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(102,150,0);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102,51,0);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();

}
void treeNight()
{
    //tree 1
    glLoadIdentity();
    glTranslatef(.3f,-0.1f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(51, 71, 9);
    glVertex2f(-0.95f, -0.78f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(51, 71, 9);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 35, 7);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 2
    glLoadIdentity();
    glTranslatef(.25f,-0.061f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(51, 71, 9);
    glVertex2f(-0.95f, -0.78f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(51, 71, 9);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 35, 7);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 3
    glLoadIdentity();
    glTranslatef(.21f,-0.09f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(51, 71, 9);
    glVertex2f(-0.95f, -0.75f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(51, 71, 9);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 35, 7);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 5
    glLoadIdentity();
    glTranslatef(.15f,-0.1f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(51, 71, 9);
    glVertex2f(-0.95f, -0.7f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(51, 71, 9);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 35, 7);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 6
    glLoadIdentity();
    glTranslatef(.4f,-0.1f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(51, 71, 9);
    glVertex2f(-0.95f, -0.72f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(51, 71, 9);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 35, 7);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 7
    glLoadIdentity();
    glTranslatef(.6f,-0.01f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(51, 71, 9);
    glVertex2f(-0.95f, -0.76f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(51, 71, 9);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 35, 7);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 8
    glLoadIdentity();
    glTranslatef(.09f,-0.05f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(51, 71, 9);
    glVertex2f(-0.95f, -0.68f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(51, 71, 9);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 71, 9);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 9
    glLoadIdentity();
    glTranslatef(1.9f,-0.1f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(51, 71, 9);
    glVertex2f(-0.95f, -0.78f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(51, 71, 9);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 35, 7);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 10
    glLoadIdentity();
    glTranslatef(1.7f,0.1f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(51, 71, 9);
    glVertex2f(-0.95f, -0.78f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(51, 71, 9);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 35, 7);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 10
    glLoadIdentity();
    glTranslatef(1.75f,-0.0f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(51, 71, 9);
    glVertex2f(-0.95f, -0.7f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(51, 71, 9);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 35, 7);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 11
    glLoadIdentity();
    glTranslatef(1.65f,-0.1f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(51, 71, 9);
    glVertex2f(-0.95f, -0.74f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(51, 71, 9);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 35, 7);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();
     //tree 12
    glLoadIdentity();
    glTranslatef(1.78f,0.055f,0.0f);
      glBegin(GL_TRIANGLES);
    glColor3ub(51, 71, 9);
    glVertex2f(-0.95f, -0.73f);
    glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.93f, -0.84f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(51, 71, 9);

    glVertex2f(-0.93f, -0.84f);
     glVertex2f(-0.97f, -0.84f);
    glVertex2f(-0.975f,-0.85f);
    glVertex2f(-0.925f,- 0.85f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(64, 35, 7);

    glVertex2f(-0.945f,- 0.85f);
      glVertex2f(-0.955f,-0.85f);
    glVertex2f(-0.955f, -0.93f);
     glVertex2f(-0.945f, -0.93f);

    glEnd();
    glLoadIdentity();

}

void swimmingPoll()
{
    //wall
     glBegin(GL_QUADS);
    glColor3ub(54, 56, 54);
    glVertex2f(-.35,-1.0);
    glVertex2f(.45,-1.0);
    glVertex2f(.6,-0.5);
    glVertex2f(-.15,-0.5);
    glEnd();
    //water
     glBegin(GL_QUADS);
    glColor3ub(2, 219, 216);
    glVertex2f(-.15,-.9);
    glVertex2f(.35,-.9);
    glVertex2f(.45,-0.6);
    glVertex2f(-.05,-0.6);
    glEnd();

    //upper bench
    glBegin(GL_POLYGON);
    glColor3ub(227,136,25);
    glVertex2f(0.17f,-0.56f);
    glVertex2f(0.26f, -0.56f);
    glVertex2f(0.26f, -0.53);
    glVertex2f(0.17f, -0.53f);
    glEnd();

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3ub(200,120,0);
    glVertex2f(0.18f,-0.56f);
    glVertex2f(0.18f,-0.58);
    glVertex2f(0.25f,-0.56f);
    glVertex2f(0.25f,-0.58);
    glEnd();

    //left bench



    glTranslatef(-.73f,-.72f,0.0f);
    //glLoadIdentity();
    glRotatef(70,0.0f,0.0f,1.0f);
    glBegin(GL_POLYGON);
    glColor3ub(227,136,25);
    glVertex2f(0.17f,-0.56f);
    glVertex2f(0.26f, -0.56f);
    glVertex2f(0.26f, -0.53);
    glVertex2f(0.17f, -0.53f);
    glEnd();

    glPushMatrix();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3ub(200,120,0);
    glVertex2f(0.18f,-0.56f);
    glVertex2f(0.18f,-0.58);
    glVertex2f(0.25f,-0.56f);
    glVertex2f(0.25f,-0.58);
    glEnd();
    glPopMatrix();

    glLoadIdentity();
    //jump
    glColor3ub(237,237,237);
    glBegin(GL_POLYGON);
    glVertex2f(0.07f,-.92f);
    glVertex2f(0.09f,-0.8f);
    glVertex2f(0.13f,-0.8f);
    glVertex2f(0.11f,-.92f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.07f,-.92f);
    glVertex2f(0.07f,-.95f);
    glVertex2f(0.11f,-.92f);
    glVertex2f(0.11f,-.945f);

    glEnd();
    glLineWidth(1.0);
}

void swimmingPollNight()
{
    //wall
     glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-.35,-1.0);
    glVertex2f(.45,-1.0);
    glVertex2f(.6,-0.5);
    glVertex2f(-.15,-0.5);
    glEnd();
    //water
     glBegin(GL_QUADS);
    glColor3ub(6,150,148);
    glVertex2f(-.15,-.9);
    glVertex2f(.35,-.9);
    glVertex2f(.45,-0.6);
    glVertex2f(-.05,-0.6);
    glEnd();

    //upper bench
    glBegin(GL_POLYGON);
    glColor3ub(173,105,23);
    glVertex2f(0.17f,-0.56f);
    glVertex2f(0.26f, -0.56f);
    glVertex2f(0.26f, -0.53);
    glVertex2f(0.17f, -0.53f);
    glEnd();

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3ub(173,105,23);
    glVertex2f(0.18f,-0.56f);
    glVertex2f(0.18f,-0.58);
    glVertex2f(0.25f,-0.56f);
    glVertex2f(0.25f,-0.58);
    glEnd();

    //left bench



    glTranslatef(-.73f,-.72f,0.0f);
    //glLoadIdentity();
    glRotatef(70,0.0f,0.0f,1.0f);
    glBegin(GL_POLYGON);
    glColor3ub(173,105,23);
    glVertex2f(0.17f,-0.56f);
    glVertex2f(0.26f, -0.56f);
    glVertex2f(0.26f, -0.53);
    glVertex2f(0.17f, -0.53f);
    glEnd();

    glPushMatrix();
    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3ub(173,105,23);
    glVertex2f(0.18f,-0.56f);
    glVertex2f(0.18f,-0.58);
    glVertex2f(0.25f,-0.56f);
    glVertex2f(0.25f,-0.58);
    glEnd();
    glPopMatrix();

    glLoadIdentity();
    //jump
    glColor3ub(200,200,200);
    glBegin(GL_POLYGON);
    glVertex2f(0.07f,-.92f);
    glVertex2f(0.09f,-0.8f);
    glVertex2f(0.13f,-0.8f);
    glVertex2f(0.11f,-.92f);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.07f,-.92f);
    glVertex2f(0.07f,-.95f);
    glVertex2f(0.11f,-.92f);
    glVertex2f(0.11f,-.945f);

    glEnd();
    glLineWidth(1.0);
}

void downBackground()
{
      glBegin(GL_QUADS);
    glColor3ub(7, 245, 36);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,-0.5);
    glVertex2f(-1.0,-0.5);
    glEnd();

}

void downBackgroundNight()
{
      glBegin(GL_QUADS);
    glColor3ub(0,156,19);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,-0.5);
    glVertex2f(-1.0,-0.5);
    glEnd();

}

void signal()
{


     glColor3ub(0,0,0);
     ///Stand
     ///base
 glBegin(GL_QUADS);
    glColor3ub(161, 159, 90);
    glVertex2f(-0.35f, 0.295f);
    glVertex2f(-0.35f, 0.31f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.55f, 0.37f);
    glEnd();
///base stand
 glBegin(GL_QUADS);
    glColor3ub(161, 159, 90);
    glVertex2f(-0.54f, 0.37f);
    glVertex2f(-0.55f, 0.37f);
    glVertex2f(-0.55f, 0.05f);
    glVertex2f(-0.54f, 0.05f);
    glEnd();

    ///light connector
     glBegin(GL_QUADS);
    glColor3ub(161, 159, 90);
    glVertex2f(-0.54f, 0.15f);
    glVertex2f(-0.525f, 0.15f);
    glVertex2f(-0.525f, 0.16f);
    glVertex2f(-0.54f, 0.16f);
    glEnd();
    ///0range part of light

glBegin(GL_QUADS);
    glColor3ub(255,165,0);
    glVertex2f(-0.525f, 0.12f);
    glVertex2f(-0.435f, 0.12f);
    glVertex2f(-0.435f, 0.2f);
    glVertex2f(-0.525f, 0.2f);
    glEnd();
///light
    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2f(-0.515f, 0.13f);
    glVertex2f(-0.445f, 0.13f);
    glVertex2f(-0.445f, 0.19f);
    glVertex2f(-0.515f, 0.19f);
    glEnd();




    ///update stand1 start
    glLoadIdentity();
    glTranslatef(-.4f,0.0f,0.0f);
      ///Satnd
    glBegin(GL_QUADS);
    glColor3ub(161, 159, 90);
    glVertex2f(-0.35f, 0.295f);
    glVertex2f(-0.35f, 0.31f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.55f, 0.37f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(161, 159, 90);
    glVertex2f(-0.54f, 0.37f);
    glVertex2f(-0.55f, 0.37f);
    glVertex2f(-0.55f, 0.05f);
    glVertex2f(-0.54f, 0.05f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(161, 159, 90);
    glVertex2f(-0.54f, 0.15f);
    glVertex2f(-0.525f, 0.15f);
    glVertex2f(-0.525f, 0.16f);
    glVertex2f(-0.54f, 0.16f);
    glEnd();
    //signal
    glBegin(GL_QUADS);
    glColor3ub(255,165,0);
    glVertex2f(-0.525f, 0.12f);
    glVertex2f(-0.435f, 0.12f);
    glVertex2f(-0.435f, 0.2f);
    glVertex2f(-0.525f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2f(-0.515f, 0.13f);
    glVertex2f(-0.445f, 0.13f);
    glVertex2f(-0.445f, 0.19f);
    glVertex2f(-0.515f, 0.19f);
    glEnd();

    glLoadIdentity();
    //update stand1 ends
    ///update stand2 start
    glLoadIdentity();
    glTranslatef(.4f,0.0f,0.0f);
      ///Satnd
    glBegin(GL_QUADS);
    glColor3ub(161, 159, 90);
    glVertex2f(-0.35f, 0.295f);
    glVertex2f(-0.35f, 0.31f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.55f, 0.37f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(161, 159, 90);
    glVertex2f(-0.54f, 0.37f);
    glVertex2f(-0.55f, 0.37f);
    glVertex2f(-0.55f, 0.05f);
    glVertex2f(-0.54f, 0.05f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(161, 159, 90);
    glVertex2f(-0.54f, 0.15f);
    glVertex2f(-0.525f, 0.15f);
    glVertex2f(-0.525f, 0.16f);
    glVertex2f(-0.54f, 0.16f);
    glEnd();
    //signal
    glBegin(GL_QUADS);
    glColor3ub(255,165,0);
    glVertex2f(-0.525f, 0.12f);
    glVertex2f(-0.435f, 0.12f);
    glVertex2f(-0.435f, 0.2f);
    glVertex2f(-0.525f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2f(-0.515f, 0.13f);
    glVertex2f(-0.445f, 0.13f);
    glVertex2f(-0.445f, 0.19f);
    glVertex2f(-0.515f, 0.19f);
    glEnd();

    glLoadIdentity();
    //update stand 2 end
    //update stand1 start
    glLoadIdentity();
    glTranslatef(.8f,0.0f,0.0f);
      ///Satnd
    glBegin(GL_QUADS);
    glColor3ub(161, 159, 90);
    glVertex2f(-0.35f, 0.295f);
    glVertex2f(-0.35f, 0.31f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.55f, 0.37f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(161, 159, 90);
    glVertex2f(-0.54f, 0.37f);
    glVertex2f(-0.55f, 0.37f);
    glVertex2f(-0.55f, 0.05f);
    glVertex2f(-0.54f, 0.05f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(161, 159, 90);
    glVertex2f(-0.54f, 0.15f);
    glVertex2f(-0.525f, 0.15f);
    glVertex2f(-0.525f, 0.16f);
    glVertex2f(-0.54f, 0.16f);
    glEnd();
    //signal
    glBegin(GL_QUADS);
    glColor3ub(255,165,0);
    glVertex2f(-0.525f, 0.12f);
    glVertex2f(-0.435f, 0.12f);
    glVertex2f(-0.435f, 0.2f);
    glVertex2f(-0.525f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2f(-0.515f, 0.13f);
    glVertex2f(-0.445f, 0.13f);
    glVertex2f(-0.445f, 0.19f);
    glVertex2f(-0.515f, 0.19f);
    glEnd();

    glLoadIdentity();

//update stANd 3 end
//update stand1 start
    glLoadIdentity();
    glTranslatef(1.2f,0.0f,0.0f);
      ///Satnd
    glBegin(GL_QUADS);
    glColor3ub(161, 159, 90);
    glVertex2f(-0.35f, 0.295f);
    glVertex2f(-0.35f, 0.31f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.55f, 0.37f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(161, 159, 90);
    glVertex2f(-0.54f, 0.37f);
    glVertex2f(-0.55f, 0.37f);
    glVertex2f(-0.55f, 0.05f);
    glVertex2f(-0.54f, 0.05f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(161, 159, 90);
    glVertex2f(-0.54f, 0.15f);
    glVertex2f(-0.525f, 0.15f);
    glVertex2f(-0.525f, 0.16f);
    glVertex2f(-0.54f, 0.16f);
    glEnd();
    //signal
    glBegin(GL_QUADS);
    glColor3ub(255,165,0);
    glVertex2f(-0.525f, 0.12f);
    glVertex2f(-0.435f, 0.12f);
    glVertex2f(-0.435f, 0.2f);
    glVertex2f(-0.525f, 0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glVertex2f(-0.515f, 0.13f);
    glVertex2f(-0.445f, 0.13f);
    glVertex2f(-0.445f, 0.19f);
    glVertex2f(-0.515f, 0.19f);
    glEnd();

    glLoadIdentity();

//update stand 4end


///Signal


    ////SIGNAL
///FOR +X,-Y
///
    ///Satnd
}
///Signal
///FOR -X,-Y

void signalNight()
{



     ///Stand
     ///base
 glBegin(GL_QUADS);
    glColor3ub(117, 116, 69);
    glVertex2f(-0.35f, 0.295f);
    glVertex2f(-0.35f, 0.31f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.55f, 0.37f);
    glEnd();
///base stand
 glBegin(GL_QUADS);
    glColor3ub(117, 116, 69);
    glVertex2f(-0.54f, 0.37f);
    glVertex2f(-0.55f, 0.37f);
    glVertex2f(-0.55f, 0.05f);
    glVertex2f(-0.54f, 0.05f);
    glEnd();

    ///light connector
     glBegin(GL_QUADS);
    glColor3ub(117, 116, 69);
    glVertex2f(-0.54f, 0.15f);
    glVertex2f(-0.525f, 0.15f);
    glVertex2f(-0.525f, 0.16f);
    glVertex2f(-0.54f, 0.16f);
    glEnd();
    ///0range part of light

glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.525f, 0.12f);
    glVertex2f(-0.435f, 0.12f);
    glVertex2f(-0.435f, 0.2f);
    glVertex2f(-0.525f, 0.2f);
    glEnd();
///light
    glBegin(GL_QUADS);
    glColor3ub(253, 255, 201);
    glVertex2f(-0.515f, 0.13f);
    glVertex2f(-0.445f, 0.13f);
    glVertex2f(-0.445f, 0.19f);
    glVertex2f(-0.515f, 0.19f);
    glEnd();




    ///update stand1 start
    glLoadIdentity();
    glTranslatef(-.4f,0.0f,0.0f);
      ///Satnd

     ///Stand
     ///base
 glBegin(GL_QUADS);
    glColor3ub(117, 116, 69);
    glVertex2f(-0.35f, 0.295f);
    glVertex2f(-0.35f, 0.31f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.55f, 0.37f);
    glEnd();
///base stand
 glBegin(GL_QUADS);
    glColor3ub(117, 116, 69);
    glVertex2f(-0.54f, 0.37f);
    glVertex2f(-0.55f, 0.37f);
    glVertex2f(-0.55f, 0.05f);
    glVertex2f(-0.54f, 0.05f);
    glEnd();

    ///light connector
     glBegin(GL_QUADS);
    glColor3ub(117, 116, 69);
    glVertex2f(-0.54f, 0.15f);
    glVertex2f(-0.525f, 0.15f);
    glVertex2f(-0.525f, 0.16f);
    glVertex2f(-0.54f, 0.16f);
    glEnd();
    ///0range part of light

glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.525f, 0.12f);
    glVertex2f(-0.435f, 0.12f);
    glVertex2f(-0.435f, 0.2f);
    glVertex2f(-0.525f, 0.2f);
    glEnd();
///light
    glBegin(GL_QUADS);
    glColor3ub(253, 255, 201);
    glVertex2f(-0.515f, 0.13f);
    glVertex2f(-0.445f, 0.13f);
    glVertex2f(-0.445f, 0.19f);
    glVertex2f(-0.515f, 0.19f);
    glEnd();

    glLoadIdentity();
    //update stand1 ends
    ///update stand2 start
    glLoadIdentity();
    glTranslatef(.4f,0.0f,0.0f);
      ///Satnd

     ///Stand
     ///base
 glBegin(GL_QUADS);
    glColor3ub(117, 116, 69);
    glVertex2f(-0.35f, 0.295f);
    glVertex2f(-0.35f, 0.31f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.55f, 0.37f);
    glEnd();
///base stand
 glBegin(GL_QUADS);
    glColor3ub(117, 116, 69);
    glVertex2f(-0.54f, 0.37f);
    glVertex2f(-0.55f, 0.37f);
    glVertex2f(-0.55f, 0.05f);
    glVertex2f(-0.54f, 0.05f);
    glEnd();

    ///light connector
     glBegin(GL_QUADS);
    glColor3ub(117, 116, 69);
    glVertex2f(-0.54f, 0.15f);
    glVertex2f(-0.525f, 0.15f);
    glVertex2f(-0.525f, 0.16f);
    glVertex2f(-0.54f, 0.16f);
    glEnd();
    ///0range part of light

glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.525f, 0.12f);
    glVertex2f(-0.435f, 0.12f);
    glVertex2f(-0.435f, 0.2f);
    glVertex2f(-0.525f, 0.2f);
    glEnd();
///light
    glBegin(GL_QUADS);
    glColor3ub(253, 255, 201);
    glVertex2f(-0.515f, 0.13f);
    glVertex2f(-0.445f, 0.13f);
    glVertex2f(-0.445f, 0.19f);
    glVertex2f(-0.515f, 0.19f);
    glEnd();

    glLoadIdentity();
    //update stand 2 end
    //update stand1 start
    glLoadIdentity();
    glTranslatef(.8f,0.0f,0.0f);

     ///Stand
     ///base
 glBegin(GL_QUADS);
    glColor3ub(117, 116, 69);
    glVertex2f(-0.35f, 0.295f);
    glVertex2f(-0.35f, 0.31f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.55f, 0.37f);
    glEnd();
///base stand
 glBegin(GL_QUADS);
    glColor3ub(117, 116, 69);
    glVertex2f(-0.54f, 0.37f);
    glVertex2f(-0.55f, 0.37f);
    glVertex2f(-0.55f, 0.05f);
    glVertex2f(-0.54f, 0.05f);
    glEnd();

    ///light connector
     glBegin(GL_QUADS);
    glColor3ub(117, 116, 69);
    glVertex2f(-0.54f, 0.15f);
    glVertex2f(-0.525f, 0.15f);
    glVertex2f(-0.525f, 0.16f);
    glVertex2f(-0.54f, 0.16f);
    glEnd();
    ///0range part of light

glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.525f, 0.12f);
    glVertex2f(-0.435f, 0.12f);
    glVertex2f(-0.435f, 0.2f);
    glVertex2f(-0.525f, 0.2f);
    glEnd();
///light
    glBegin(GL_QUADS);
    glColor3ub(253, 255, 201);
    glVertex2f(-0.515f, 0.13f);
    glVertex2f(-0.445f, 0.13f);
    glVertex2f(-0.445f, 0.19f);
    glVertex2f(-0.515f, 0.19f);
    glEnd();

    glLoadIdentity();

//update stANd 3 end
//update stand1 start
    glLoadIdentity();
    glTranslatef(1.2f,0.0f,0.0f);
      ///Satnd

     ///Stand
     ///base
 glBegin(GL_QUADS);
    glColor3ub(117, 116, 69);
    glVertex2f(-0.35f, 0.295f);
    glVertex2f(-0.35f, 0.31f);
    glVertex2f(-0.55f, 0.4f);
    glVertex2f(-0.55f, 0.37f);
    glEnd();
///base stand
 glBegin(GL_QUADS);
    glColor3ub(117, 116, 69);
    glVertex2f(-0.54f, 0.37f);
    glVertex2f(-0.55f, 0.37f);
    glVertex2f(-0.55f, 0.05f);
    glVertex2f(-0.54f, 0.05f);
    glEnd();

    ///light connector
     glBegin(GL_QUADS);
    glColor3ub(117, 116, 69);
    glVertex2f(-0.54f, 0.15f);
    glVertex2f(-0.525f, 0.15f);
    glVertex2f(-0.525f, 0.16f);
    glVertex2f(-0.54f, 0.16f);
    glEnd();
    ///0range part of light

glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.525f, 0.12f);
    glVertex2f(-0.435f, 0.12f);
    glVertex2f(-0.435f, 0.2f);
    glVertex2f(-0.525f, 0.2f);
    glEnd();
///light
    glBegin(GL_QUADS);
    glColor3ub(253, 255, 201);
    glVertex2f(-0.515f, 0.13f);
    glVertex2f(-0.445f, 0.13f);
    glVertex2f(-0.445f, 0.19f);
    glVertex2f(-0.515f, 0.19f);
    glEnd();

    glLoadIdentity();

//update stand 4end


///Signal


    ////SIGNAL
///FOR +X,-Y
///
    ///Satnd
}


///RED CAR
///-X TO +X
///
void car1()
{
    glTranslatef(0.3f,0.0f,0.0f);
       glPushMatrix();
    glTranslated(position2,0.0f,0.0f);
      glBegin(GL_POLYGON);
      glColor3f(1.0f,0.0f,0.0f);
      glVertex2f(-0.98f,0.055f);
      glVertex2f(-0.97f,0.04f);
      glVertex2f(-0.75f,0.04f);
      glVertex2f(-0.75f,0.07f);
      glVertex2f(-0.74f,0.07f);
      glVertex2f(-0.76f,0.1f);
      glVertex2f(-0.98f,0.1f);
      glEnd();





    glBegin(GL_POLYGON);
      glColor3f(1.0f,0.0f,0.0f);
      glVertex2f(-0.8f,0.1f);
      glVertex2f(-0.84f,0.17f);
      glVertex2f(-0.915f,0.17f);
      glVertex2f(-0.96f,0.1f);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3f(1.0f,1.0f,1.0f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.935f, 0.1f);
      glEnd();

      glLineWidth(1.0);
      glBegin(GL_LINES);
      glColor3f(0.0f,0.0f,0.0f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.9f, 0.1f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.935f, 0.1f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.935f, 0.1f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.845f, 0.15f);
      glVertex2f(-0.845f, 0.1f);

      glEnd();

int i;

	GLfloat x= -0.93f; GLfloat y=0.04f; GLfloat radius =.025f;
	int triangleAmount = 20; //# of triangles used to draw circle


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glTranslatef(0.12f,0.0f,0.0f);
	glScalef(1.0f,1.0f,0);

		glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

      glLoadIdentity();

glPopMatrix();

}

void car1Night()
{
    glTranslatef(0.3f,0.0f,0.0f);
       glPushMatrix();
    glTranslated(position2,0.0f,0.0f);
    ///lower part of car
      glBegin(GL_POLYGON);
      glColor3f(0.7f,0.0f,0.0f);
      glVertex2f(-0.98f,0.055f);
      glVertex2f(-0.97f,0.04f);
      glVertex2f(-0.75f,0.04f);
      glVertex2f(-0.75f,0.07f);
      glVertex2f(-0.74f,0.07f);
      glVertex2f(-0.76f,0.1f);
      glVertex2f(-0.98f,0.1f);
      glEnd();

///upper part of car
 glBegin(GL_POLYGON);
      glColor3f(0.7f,0.0f,0.0f);
      glVertex2f(-0.8f,0.1f);
      glVertex2f(-0.84f,0.17f);
      glVertex2f(-0.915f,0.17f);
      glVertex2f(-0.96f,0.1f);
      glEnd();
///car glass
glBegin(GL_POLYGON);
      glColor3f(.7f,.7f,.7f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.935f, 0.1f);
      glEnd();

      glLineWidth(1.0);
      glBegin(GL_LINES);
      glColor3f(0.0f,0.0f,0.0f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.9f, 0.1f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.935f, 0.1f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.935f, 0.1f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.845f, 0.15f);
      glVertex2f(-0.845f, 0.1f);

      glEnd();


        ///light

      glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
      glVertex2f(-0.75f,0.059f);
      glVertex2f(-0.55f,0.01f);
      glVertex2f(-0.55f,0.099f);
      glVertex2f(-0.75f,0.05f);

      glEnd();

int i;

	GLfloat x= -0.93f; GLfloat y=0.04f; GLfloat radius =.025f;
	int triangleAmount = 20; //# of triangles used to draw circle


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glTranslatef(0.12f,0.0f,0.0f);
	glScalef(1.0f,1.0f,0);

		glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();

      glLoadIdentity();

glPopMatrix();

}

///BUS
///+X TO -X


///CAR
///+X TO -X
void bus1()
{


     glPushMatrix();
    glTranslated(position1,0.0f,0.0f);
    glTranslatef(-0.3,-0.4,0.0);
    glScalef(0.5f,0.6,0.0);
    glBegin(GL_POLYGON);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f( 0.0f,  0.1f);
      glVertex2f( 0.5f,  0.1f);
      glVertex2f( 0.5f,  0.4f);
      glVertex2f( 0.1f,  0.4f);
      glVertex2f( 0.0f,  0.25f);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3ub(51,153,255);
      glVertex2f( 0.0f,   0.25f);
      glVertex2f( 0.1f,   0.25f);
      glVertex2f( 0.1f,   0.4f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(51,153,255);
      glVertex2f( 0.11f,  0.35f);
      glVertex2f( 0.11f,  0.2f);
      glVertex2f( 0.18f,   0.2f);
      glVertex2f( 0.18f,   0.35f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(255,255,255);
      glVertex2f( 0.185f,  0.35f);
      glVertex2f( 0.185f,  0.15f);
      glVertex2f( 0.25f,  0.15f);
      glVertex2f( 0.25f,  0.35f);
      glEnd();



      glBegin(GL_QUADS);
      glColor3ub(51,153,255);
      glVertex2f( 0.26f,  0.35f);
      glVertex2f( 0.26f,  0.25f);
      glVertex2f( 0.33f,  0.25f);
      glVertex2f( 0.33f,  0.35f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(51,153,255);
      glVertex2f( 0.335f,  0.35f);
      glVertex2f( 0.335f,  0.25f);
      glVertex2f( 0.41f,  0.25f);
      glVertex2f( 0.41f,  0.35f);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(51,153,255);
      glVertex2f( 0.415f,  0.35f);
      glVertex2f( 0.415f,  0.25f);
      glVertex2f( 0.48f,  0.25f);
      glVertex2f( 0.48f,  0.35f);
      glEnd();



      glColor3f(.0f, .0f, .0f);

    int i;

	GLfloat x=.1f; GLfloat y=0.1f; GLfloat radius =.05f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat w=.4f; GLfloat z=0.1f; GLfloat radius1 =.05f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(w, z); // center of circle
		for(i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            w + (radius1 * cos(i *  twicePi1 / triangleAmount1)),
			    z + (radius1 * sin(i * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	glPopMatrix();

	glLoadIdentity();
}
void bus1Night()
{


      glPushMatrix();
    glTranslated(position1,0.0f,0.0f);
     glTranslatef(-0.3,-0.4,0.0);


    glScalef(0.5f,0.6,0.0);
    ///main body
glBegin(GL_POLYGON);
      glColor3ub(186, 0, 0);
      glVertex2f( 0.0f,  0.1f);
      glVertex2f( 0.5f,  0.1f);
      glVertex2f( 0.5f,  0.4f);
      glVertex2f( 0.1f,  0.4f);
      glVertex2f( 0.0f,  0.25f);
      glEnd();
///front glass
      glBegin(GL_TRIANGLES);
      glColor3ub(34, 113, 191);
      glVertex2f( 0.0f,   0.25f);
      glVertex2f( 0.1f,   0.25f);
      glVertex2f( 0.1f,   0.4f);
      glEnd();
///window 1
glBegin(GL_QUADS);
      glColor3ub(34, 113, 191);
      glVertex2f( 0.11f,  0.35f);
      glVertex2f( 0.11f,  0.2f);
      glVertex2f( 0.18f,   0.2f);
      glVertex2f( 0.18f,   0.35f);
      glEnd();
///door
glBegin(GL_QUADS);
      glColor3ub(191, 191, 191);
      glVertex2f( 0.185f,  0.35f);
      glVertex2f( 0.185f,  0.15f);
      glVertex2f( 0.25f,  0.15f);
      glVertex2f( 0.25f,  0.35f);
      glEnd();


///window 2
 glBegin(GL_QUADS);
      glColor3ub(34, 113, 191);
      glVertex2f( 0.26f,  0.35f);
      glVertex2f( 0.26f,  0.25f);
      glVertex2f( 0.33f,  0.25f);
      glVertex2f( 0.33f,  0.35f);
      glEnd();
///window 3
      glBegin(GL_QUADS);
      glColor3ub(34, 113, 191);
      glVertex2f( 0.335f,  0.35f);
      glVertex2f( 0.335f,  0.25f);
      glVertex2f( 0.41f,  0.25f);
      glVertex2f( 0.41f,  0.35f);
      glEnd();
///window 4
      glBegin(GL_QUADS);
      glColor3ub(34, 113, 191);
      glVertex2f( 0.415f,  0.35f);
      glVertex2f( 0.415f,  0.25f);
      glVertex2f( 0.48f,  0.25f);
      glVertex2f( 0.48f,  0.35f);
      glEnd();



      glColor3f(.0f, .0f, .0f);

    int i;

	GLfloat x=.1f; GLfloat y=0.1f; GLfloat radius =.05f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat w=.4f; GLfloat z=0.1f; GLfloat radius1 =.05f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(w, z); // center of circle
		for(i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            w + (radius1 * cos(i *  twicePi1 / triangleAmount1)),
			    z + (radius1 * sin(i * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	glPopMatrix();

	glLoadIdentity();
	///light
	glPushMatrix();
    glTranslated(position1,0.0f,0.0f);
    glRotatef(180,0.0,1.0,0.0);
      glTranslatef(1.05f,-0.35f,0.0f);
      glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
      glVertex2f(-0.75f,0.059f);
      glVertex2f(-0.55f,-0.01f);
      glVertex2f(-0.55f,0.1f);
      glVertex2f(-0.75f,0.05f);

      glEnd();
      glPopMatrix();

	glLoadIdentity();
}
void bus2()
{


      glPushMatrix();
    glTranslated(position2,0.0f,0.0f);
    glRotatef(180,0.0,1.0,0.0);
     glTranslatef(1,0.0,0.0);


    glScalef(0.5f,0.6,0.0);
    ///main body
glBegin(GL_POLYGON);
      glColor3ub(230, 230, 0);
      glVertex2f( 0.0f,  0.1f);
      glVertex2f( 0.5f,  0.1f);
      glVertex2f( 0.5f,  0.4f);
      glVertex2f( 0.1f,  0.4f);
      glVertex2f( 0.0f,  0.25f);
      glEnd();
///front glass
      glBegin(GL_TRIANGLES);
      glColor3ub(46, 255, 234);
      glVertex2f( 0.0f,   0.25f);
      glVertex2f( 0.1f,   0.25f);
      glVertex2f( 0.1f,   0.4f);
      glEnd();
///window 1
glBegin(GL_QUADS);
      glColor3ub(46, 255, 234);
      glVertex2f( 0.11f,  0.35f);
      glVertex2f( 0.11f,  0.2f);
      glVertex2f( 0.18f,   0.2f);
      glVertex2f( 0.18f,   0.35f);
      glEnd();
///door
glBegin(GL_QUADS);
      glColor3ub(117, 117, 110);
      glVertex2f( 0.185f,  0.35f);
      glVertex2f( 0.185f,  0.15f);
      glVertex2f( 0.25f,  0.15f);
      glVertex2f( 0.25f,  0.35f);
      glEnd();


///window 2
 glBegin(GL_QUADS);
      glColor3ub(46, 255, 234);
      glVertex2f( 0.26f,  0.35f);
      glVertex2f( 0.26f,  0.25f);
      glVertex2f( 0.33f,  0.25f);
      glVertex2f( 0.33f,  0.35f);
      glEnd();
///window 3
      glBegin(GL_QUADS);
      glColor3ub(46, 255, 234);
      glVertex2f( 0.335f,  0.35f);
      glVertex2f( 0.335f,  0.25f);
      glVertex2f( 0.41f,  0.25f);
      glVertex2f( 0.41f,  0.35f);
      glEnd();
///window 4
      glBegin(GL_QUADS);
      glColor3ub(46, 255, 234);
      glVertex2f( 0.415f,  0.35f);
      glVertex2f( 0.415f,  0.25f);
      glVertex2f( 0.48f,  0.25f);
      glVertex2f( 0.48f,  0.35f);
      glEnd();



      glColor3f(.0f, .0f, .0f);

    int i;

	GLfloat x=.1f; GLfloat y=0.1f; GLfloat radius =.05f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat w=.4f; GLfloat z=0.1f; GLfloat radius1 =.05f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(w, z); // center of circle
		for(i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            w + (radius1 * cos(i *  twicePi1 / triangleAmount1)),
			    z + (radius1 * sin(i * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	glPopMatrix();

	glLoadIdentity();

}
///bus2
void bus2Night()
{


      glPushMatrix();
    glTranslated(position2,0.0f,0.0f);
    glRotatef(180,0.0,1.0,0.0);
     glTranslatef(1,0.0,0.0);


    glScalef(0.5f,0.6,0.0);
    ///main body
glBegin(GL_POLYGON);
      glColor3ub(191, 191, 0);
      glVertex2f( 0.0f,  0.1f);
      glVertex2f( 0.5f,  0.1f);
      glVertex2f( 0.5f,  0.4f);
      glVertex2f( 0.1f,  0.4f);
      glVertex2f( 0.0f,  0.25f);
      glEnd();
///front glass
      glBegin(GL_TRIANGLES);
      glColor3ub(34, 113, 191);
      glVertex2f( 0.0f,   0.25f);
      glVertex2f( 0.1f,   0.25f);
      glVertex2f( 0.1f,   0.4f);
      glEnd();
///window 1
glBegin(GL_QUADS);
      glColor3ub(34, 113, 191);
      glVertex2f( 0.11f,  0.35f);
      glVertex2f( 0.11f,  0.2f);
      glVertex2f( 0.18f,   0.2f);
      glVertex2f( 0.18f,   0.35f);
      glEnd();
///door
glBegin(GL_QUADS);
      glColor3ub(117, 117, 110);
      glVertex2f( 0.185f,  0.35f);
      glVertex2f( 0.185f,  0.15f);
      glVertex2f( 0.25f,  0.15f);
      glVertex2f( 0.25f,  0.35f);
      glEnd();


///window 2
 glBegin(GL_QUADS);
      glColor3ub(34, 113, 191);
      glVertex2f( 0.26f,  0.35f);
      glVertex2f( 0.26f,  0.25f);
      glVertex2f( 0.33f,  0.25f);
      glVertex2f( 0.33f,  0.35f);
      glEnd();
///window 3
      glBegin(GL_QUADS);
      glColor3ub(34, 113, 191);
      glVertex2f( 0.335f,  0.35f);
      glVertex2f( 0.335f,  0.25f);
      glVertex2f( 0.41f,  0.25f);
      glVertex2f( 0.41f,  0.35f);
      glEnd();
///window 4
      glBegin(GL_QUADS);
      glColor3ub(34, 113, 191);
      glVertex2f( 0.415f,  0.35f);
      glVertex2f( 0.415f,  0.25f);
      glVertex2f( 0.48f,  0.25f);
      glVertex2f( 0.48f,  0.35f);
      glEnd();



      glColor3f(.0f, .0f, .0f);

    int i;

	GLfloat x=.1f; GLfloat y=0.1f; GLfloat radius =.05f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat w=.4f; GLfloat z=0.1f; GLfloat radius1 =.05f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(w, z); // center of circle
		for(i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            w + (radius1 * cos(i *  twicePi1 / triangleAmount1)),
			    z + (radius1 * sin(i * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	glPopMatrix();

	glLoadIdentity();
	///light
	glPushMatrix();
    glTranslated(position2,0.0f,0.0f);
    glTranslatef(-.248,+0.032,0.0);
      glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
      glVertex2f(-0.75f,0.059f);
      glVertex2f(-0.55f,-0.01f);
      glVertex2f(-0.55f,0.1f);
      glVertex2f(-0.75f,0.05f);

      glEnd();
      glPopMatrix();

	glLoadIdentity();
}

///BUS
///+X TO -X

///blue car
void car2()
{
      glPushMatrix();
    glTranslated(position1,0.0f,0.0f);
      glRotatef(180,0.0,1.0,0.0);
      glTranslatef(.3f,-0.4f,0.0f);
      glBegin(GL_POLYGON);
      glColor3f(0.0f,0.0f,1.0f);
      glVertex2f(-0.98f,0.055f);
      glVertex2f(-0.97f,0.04f);
      glVertex2f(-0.75f,0.04f);
      glVertex2f(-0.75f,0.07f);
      glVertex2f(-0.74f,0.07f);
      glVertex2f(-0.76f,0.1f);
      glVertex2f(-0.98f,0.1f);
      glEnd();





    glBegin(GL_POLYGON);
      glColor3f(0.0f,0.0f,1.0f);
      glVertex2f(-0.8f,0.1f);
      glVertex2f(-0.84f,0.17f);
      glVertex2f(-0.915f,0.17f);
      glVertex2f(-0.96f,0.1f);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3f(1.0f,1.0f,1.0f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.935f, 0.1f);
      glEnd();


      glBegin(GL_LINES);
      glColor3f(0.0f,0.0f,0.0f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.9f, 0.1f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.935f, 0.1f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.935f, 0.1f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.845f, 0.15f);
      glVertex2f(-0.845f, 0.1f);

      glEnd();

int i;

	GLfloat x= -0.93f; GLfloat y=0.04f; GLfloat radius =.025f;
	int triangleAmount = 20; //# of triangles used to draw circle


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glTranslatef(0.12f,0.0f,0.0f);
	glScalef(1.0f,1.0f,0);

		glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();
      glLoadIdentity();

}

void car2Night()
{
      glPushMatrix();
    glTranslated(position1,0.0f,0.0f);
      glRotatef(180,0.0,1.0,0.0);
      glTranslatef(.3f,-0.4f,0.0f);
      glBegin(GL_POLYGON);
      glColor3f(0.0f,0.0f,0.7f);
      glVertex2f(-0.98f,0.055f);
      glVertex2f(-0.97f,0.04f);
      glVertex2f(-0.75f,0.04f);
      glVertex2f(-0.75f,0.07f);
      glVertex2f(-0.74f,0.07f);
      glVertex2f(-0.76f,0.1f);
      glVertex2f(-0.98f,0.1f);
      glEnd();


    glBegin(GL_POLYGON);
      glColor3f(0.0f,0.0f,0.7f);
      glVertex2f(-0.8f,0.1f);
      glVertex2f(-0.84f,0.17f);
      glVertex2f(-0.915f,0.17f);
      glVertex2f(-0.96f,0.1f);
      glEnd();

      glBegin(GL_POLYGON);
      glColor3f(0.7f,0.7f,0.7f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.935f, 0.1f);
      glEnd();


      glBegin(GL_LINES);
      glColor3f(0.0f,0.0f,0.0f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.9f, 0.1f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.935f, 0.1f);
      glVertex2f(-0.81f, 0.1f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.935f, 0.1f);
      glVertex2f(-0.9f, 0.16f);
      glVertex2f(-0.85f, 0.16f);
      glVertex2f(-0.845f, 0.15f);
      glVertex2f(-0.845f, 0.1f);

      glEnd();
        ///light

      glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
      glVertex2f(-0.75f,0.059f);
      glVertex2f(-0.55f,0.01f);
      glVertex2f(-0.55f,0.099f);
      glVertex2f(-0.75f,0.05f);

      glEnd();

int i;

	GLfloat x= -0.93f; GLfloat y=0.04f; GLfloat radius =.025f;
	int triangleAmount = 20; //# of triangles used to draw circle


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glTranslatef(0.12f,0.0f,0.0f);
	glScalef(1.0f,1.0f,0);

		glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
glPopMatrix();
      glLoadIdentity();

}

////BUILDING RED
////

void Building3()
{
    glLoadIdentity();
    glTranslatef(0.3f,0.0f,0.0f);
   // 2nd bari
//fullbuilding
   glBegin(GL_QUADS);
    glColor3ub(173, 75, 75);
    glVertex2f(-0.9f, -0.9f);
    glVertex2f(-0.65f, -0.9f);
    glVertex2f(-0.65f,-0.37f);
    glVertex2f(-0.9f, -0.37f);
    glEnd();
//top of the building
     glBegin(GL_QUADS);
    glColor3ub(204,170,102);
    glVertex2f(-0.9f, -0.37f);
    glVertex2f(-0.65f, -0.37f);
    glVertex2f(-0.61f,-0.33f);
    glVertex2f(-0.86f, -0.33f);
    glEnd();

    //right side of the building
     glBegin(GL_QUADS);
    glColor3ub(173, 75, 75);
    glVertex2f(-0.65f, -0.9f);
    glVertex2f(-0.61f, -0.86f);
    glVertex2f(-0.61f,-0.33f);
    glVertex2f(-0.65f, -0.37f);
    glEnd();
glLoadIdentity();

    //2nd barir samner janala

glTranslatef(0.3f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();

    glTranslatef(-.015f,-0.02f,0.0f);
    glTranslatef(0.3f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.0f,-0.1f,0.0f);
glTranslatef(0.3f,0.0f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();

glTranslatef(-.0f,-0.2f,0.0f);
glTranslatef(0.3f,0.0f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    glTranslatef(-.0f,-0.3f,0.0f);
glTranslatef(0.3f,0.0f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    glTranslatef(-.0f,-0.4f,0.0f);
glTranslatef(0.3f,0.0f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.015f,-0.12f,0.0f);
 glTranslatef(0.3f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.015f,-0.22f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.015f,-0.32f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.015f,-0.42f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    //2nd barir right side er janala

glTranslatef(0.3f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.05f,-0.0f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.10f,-0.0f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.15f,-0.0f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.0f,-0.1f,0.0f);
 glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.0f,-0.2f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.0f,-0.3f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.0f,-0.42f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.05f,-0.1f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.1f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.1f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


 glTranslatef(-.05f,-0.2f,0.0f);
 glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.2f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.2f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

 glTranslatef(-.05f,-0.3f,0.0f);
 glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.3f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.3f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

 glTranslatef(-.05f,-0.42f,0.0f);
 glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.42f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.42f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();




//floor deyar line
glTranslatef(0.3f,0.0f,0.0f);

    glBegin(GL_LINES);
    glColor3ub(94,94,81);
    glVertex2f(-0.9f, -0.476f);
    glVertex2f(-0.65f, -0.476f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94,94,81);
    glVertex2f(-0.9f, -0.582f);
    glVertex2f(-0.65f, -0.582f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(194,94,81);
    glVertex2f(-0.9f, -0.688f);
    glVertex2f(-0.65f, -0.688f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94,94,81);
    glVertex2f(-0.9f, -0.794f);
    glVertex2f(-0.65f, -0.794f);
    glEnd();


 glBegin(GL_LINES);
    glColor3ub(94,94,81);
    glVertex2f(-0.61f, -0.436f);
    glVertex2f(-0.65f, -0.476f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94,94,81);
    glVertex2f(-0.61f, -0.542f);
    glVertex2f(-0.65f, -0.582f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94,94,81);
    glVertex2f(-0.61f, -0.648f);
    glVertex2f(-0.65f, -0.688f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94,94,81);
    glVertex2f(-0.61f, -0.754f);
    glVertex2f(-0.65f, -0.794f);
    glEnd();
    glLoadIdentity();

}

void Building3Night()
{
    glLoadIdentity();
    glTranslatef(0.3f,0.0f,0.0f);
   // 2nd bari
//fullbuilding
   glBegin(GL_QUADS);
    glColor3ub(99, 55, 55);
    glVertex2f(-0.9f, -0.9f);
    glVertex2f(-0.65f, -0.9f);
    glVertex2f(-0.65f,-0.37f);
    glVertex2f(-0.9f, -0.37f);
    glEnd();
//top of the building
     glBegin(GL_QUADS);
    glColor3ub(115, 83, 21);
    glVertex2f(-0.9f, -0.37f);
    glVertex2f(-0.65f, -0.37f);
    glVertex2f(-0.61f,-0.33f);
    glVertex2f(-0.86f, -0.33f);
    glEnd();

    //right side of the building
     glBegin(GL_QUADS);
    glColor3ub(99, 55, 55);
    glVertex2f(-0.65f, -0.9f);
    glVertex2f(-0.61f, -0.86f);
    glVertex2f(-0.61f,-0.33f);
    glVertex2f(-0.65f, -0.37f);
    glEnd();
glLoadIdentity();

    //2nd barir samner janala

glTranslatef(0.3f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();

    glTranslatef(-.015f,-0.02f,0.0f);
    glTranslatef(0.3f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.0f,-0.1f,0.0f);
glTranslatef(0.3f,0.0f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();

glTranslatef(-.0f,-0.2f,0.0f);
glTranslatef(0.3f,0.0f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    glTranslatef(-.0f,-0.3f,0.0f);
glTranslatef(0.3f,0.0f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    glTranslatef(-.0f,-0.4f,0.0f);
glTranslatef(0.3f,0.0f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.015f,-0.12f,0.0f);
 glTranslatef(0.3f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.015f,-0.22f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.015f,-0.32f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.015f,-0.42f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    //2nd barir right side er janala

glTranslatef(0.3f,0.0f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.05f,-0.0f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.10f,-0.0f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.15f,-0.0f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.0f,-0.1f,0.0f);
 glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.0f,-0.2f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.0f,-0.3f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.0f,-0.42f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.05f,-0.1f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.1f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.1f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


 glTranslatef(-.05f,-0.2f,0.0f);
 glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.2f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.2f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

 glTranslatef(-.05f,-0.3f,0.0f);
 glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.3f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.3f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

 glTranslatef(-.05f,-0.42f,0.0f);
 glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.42f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.42f,0.0f);
     glTranslatef(0.3f,0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();




//floor deyar line
glTranslatef(0.3f,0.0f,0.0f);

    glBegin(GL_LINES);
    glColor3ub(94,94,81);
    glVertex2f(-0.9f, -0.476f);
    glVertex2f(-0.65f, -0.476f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94,94,81);
    glVertex2f(-0.9f, -0.582f);
    glVertex2f(-0.65f, -0.582f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(194,94,81);
    glVertex2f(-0.9f, -0.688f);
    glVertex2f(-0.65f, -0.688f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94,94,81);
    glVertex2f(-0.9f, -0.794f);
    glVertex2f(-0.65f, -0.794f);
    glEnd();


 glBegin(GL_LINES);
    glColor3ub(94,94,81);
    glVertex2f(-0.61f, -0.436f);
    glVertex2f(-0.65f, -0.476f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94,94,81);
    glVertex2f(-0.61f, -0.542f);
    glVertex2f(-0.65f, -0.582f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94,94,81);
    glVertex2f(-0.61f, -0.648f);
    glVertex2f(-0.65f, -0.688f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94,94,81);
    glVertex2f(-0.61f, -0.754f);
    glVertex2f(-0.65f, -0.794f);
    glEnd();
    glLoadIdentity();

}


void Building5()
{
    glLoadIdentity();
    glTranslatef(1.53f,+0.2f,0.0f);
     glBegin(GL_QUADS);
    glColor3ub(222, 151, 38);
    glVertex2f(-0.9f, -0.9f);
    glVertex2f(-0.65f, -0.9f);
    glVertex2f(-0.65f,-0.37f);
    glVertex2f(-0.9f, -0.37f);
    glEnd();
//top of the building
     glBegin(GL_QUADS);
    glColor3ub(204,170,102);
    glVertex2f(-0.9f, -0.37f);
    glVertex2f(-0.65f, -0.37f);
    glVertex2f(-0.61f,-0.33f);
    glVertex2f(-0.86f, -0.33f);
    glEnd();

    //right side of the building
     glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.65f, -0.9f);
    glVertex2f(-0.61f, -0.86f);
    glVertex2f(-0.61f,-0.33f);
    glVertex2f(-0.65f, -0.37f);
    glEnd();


    //2nd barir samner janala

glLoadIdentity();
 glTranslatef(1.53f,+0.2f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
glLoadIdentity();
    glTranslatef(-.015f,-0.02f,0.0f);
     glTranslatef(1.53f,+0.2f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.0f,-0.1f,0.0f);
 glTranslatef(1.53f,+0.2f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();

glTranslatef(-.0f,-0.2f,0.0f);
 glTranslatef(1.53f,+0.2f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    glTranslatef(-.0f,-0.3f,0.0f);
 glTranslatef(1.53f,+0.2f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    glTranslatef(-.0f,-0.4f,0.0f);
 glTranslatef(1.53f,+0.2f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.015f,-0.12f,0.0f);
  glTranslatef(1.53f,+0.2f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.015f,-0.22f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.015f,-0.32f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.015f,-0.42f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    //2nd barir right side er janala

 glTranslatef(1.53f,+0.2f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
glLoadIdentity();

     glTranslatef(-.05f,-0.0f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.10f,-0.0f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.15f,-0.0f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.0f,-0.1f,0.0f);
  glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.0f,-0.2f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.0f,-0.3f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.0f,-0.42f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.05f,-0.1f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.1f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.1f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


 glTranslatef(-.05f,-0.2f,0.0f);
  glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.2f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.2f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

 glTranslatef(-.05f,-0.3f,0.0f);
  glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.3f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.3f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

 glTranslatef(-.05f,-0.42f,0.0f);
  glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.42f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.42f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();




//floor deyar line

 glTranslatef(1.53f,+0.2f,0.0f);
    glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.9f, -0.476f);
    glVertex2f(-0.65f, -0.476f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.9f, -0.582f);
    glVertex2f(-0.65f, -0.582f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.9f, -0.688f);
    glVertex2f(-0.65f, -0.688f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.9f, -0.794f);
    glVertex2f(-0.65f, -0.794f);
    glEnd();


 glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.61f, -0.436f);
    glVertex2f(-0.65f, -0.476f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.61f, -0.542f);
    glVertex2f(-0.65f, -0.582f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.61f, -0.648f);
    glVertex2f(-0.65f, -0.688f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.61f, -0.754f);
    glVertex2f(-0.65f, -0.794f);
    glEnd();
    glLoadIdentity();
}

void Building5Night()
{
    glLoadIdentity();
    glTranslatef(1.53f,+0.2f,0.0f);
     glBegin(GL_QUADS);
    glColor3ub(143, 109, 56);
    glVertex2f(-0.9f, -0.9f);
    glVertex2f(-0.65f, -0.9f);
    glVertex2f(-0.65f,-0.37f);
    glVertex2f(-0.9f, -0.37f);
    glEnd();
//top of the building
     glBegin(GL_QUADS);
    glColor3ub(115, 83, 21);
    glVertex2f(-0.9f, -0.37f);
    glVertex2f(-0.65f, -0.37f);
    glVertex2f(-0.61f,-0.33f);
    glVertex2f(-0.86f, -0.33f);
    glEnd();

    //right side of the building
     glBegin(GL_QUADS);
    glColor3ub(115, 90, 50);
    glVertex2f(-0.65f, -0.9f);
    glVertex2f(-0.61f, -0.86f);
    glVertex2f(-0.61f,-0.33f);
    glVertex2f(-0.65f, -0.37f);
    glEnd();


    //2nd barir samner janala

glLoadIdentity();
 glTranslatef(1.53f,+0.2f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
glLoadIdentity();
    glTranslatef(-.015f,-0.02f,0.0f);
     glTranslatef(1.53f,+0.2f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.0f,-0.1f,0.0f);
 glTranslatef(1.53f,+0.2f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();

glTranslatef(-.0f,-0.2f,0.0f);
 glTranslatef(1.53f,+0.2f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    glTranslatef(-.0f,-0.3f,0.0f);
 glTranslatef(1.53f,+0.2f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    glTranslatef(-.0f,-0.4f,0.0f);
 glTranslatef(1.53f,+0.2f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.015f,-0.12f,0.0f);
  glTranslatef(1.53f,+0.2f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.015f,-0.22f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.015f,-0.32f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.015f,-0.42f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    //2nd barir right side er janala

 glTranslatef(1.53f,+0.2f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
glLoadIdentity();

     glTranslatef(-.05f,-0.0f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.10f,-0.0f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.15f,-0.0f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.0f,-0.1f,0.0f);
  glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.0f,-0.2f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.0f,-0.3f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.0f,-0.42f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.05f,-0.1f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.1f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.1f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


 glTranslatef(-.05f,-0.2f,0.0f);
  glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.2f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.2f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

 glTranslatef(-.05f,-0.3f,0.0f);
  glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.3f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.3f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

 glTranslatef(-.05f,-0.42f,0.0f);
  glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.42f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94,94,81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.42f,0.0f);
      glTranslatef(1.53f,+0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(102,0,102);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();




//floor deyar line

 glTranslatef(1.53f,+0.2f,0.0f);
    glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.9f, -0.476f);
    glVertex2f(-0.65f, -0.476f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.9f, -0.582f);
    glVertex2f(-0.65f, -0.582f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.9f, -0.688f);
    glVertex2f(-0.65f, -0.688f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.9f, -0.794f);
    glVertex2f(-0.65f, -0.794f);
    glEnd();


 glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.61f, -0.436f);
    glVertex2f(-0.65f, -0.476f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.61f, -0.542f);
    glVertex2f(-0.65f, -0.582f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.61f, -0.648f);
    glVertex2f(-0.65f, -0.688f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(102,0,0);
    glVertex2f(-0.61f, -0.754f);
    glVertex2f(-0.65f, -0.794f);
    glEnd();
    glLoadIdentity();
}

void Building1()
{

//2nd bari
//fullbuilding
   glBegin(GL_QUADS);
    glColor3ub(121, 222, 38);
    glVertex2f(-0.9f, -0.9f);
    glVertex2f(-0.65f, -0.9f);
    glVertex2f(-0.65f,-0.37f);
    glVertex2f(-0.9f, -0.37f);
    glEnd();
//top of the building
     glBegin(GL_QUADS);
    glColor3ub(204,170,102);
    glVertex2f(-0.9f, -0.37f);
    glVertex2f(-0.65f, -0.37f);
    glVertex2f(-0.61f,-0.33f);
    glVertex2f(-0.86f, -0.33f);
    glEnd();

    //right side of the building
     glBegin(GL_QUADS);
    glColor3ub(121, 222, 38);
    glVertex2f(-0.65f, -0.9f);
    glVertex2f(-0.61f, -0.86f);
    glVertex2f(-0.61f,-0.33f);
    glVertex2f(-0.65f, -0.37f);
    glEnd();


    //2nd barir samner janala


    glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();

    glTranslatef(-.015f,-0.02f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.0f,-0.1f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();

glTranslatef(-.0f,-0.2f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    glTranslatef(-.0f,-0.3f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    glTranslatef(-.0f,-0.4f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.015f,-0.12f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.015f,-0.22f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.015f,-0.32f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.015f,-0.42f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    //2nd barir right side er janala


    glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();


     glTranslatef(-.05f,-0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.10f,-0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.15f,-0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.0f,-0.1f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.0f,-0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.0f,-0.3f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.0f,-0.42f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.05f,-0.1f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.1f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.1f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


 glTranslatef(-.05f,-0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

 glTranslatef(-.05f,-0.3f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.3f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.3f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

 glTranslatef(-.05f,-0.42f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.42f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.42f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();




//floor deyar line


    glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.9f, -0.476f);
    glVertex2f(-0.65f, -0.476f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.9f, -0.582f);
    glVertex2f(-0.65f, -0.582f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.9f, -0.688f);
    glVertex2f(-0.65f, -0.688f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.9f, -0.794f);
    glVertex2f(-0.65f, -0.794f);
    glEnd();


 glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.61f, -0.436f);
    glVertex2f(-0.65f, -0.476f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.61f, -0.542f);
    glVertex2f(-0.65f, -0.582f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.61f, -0.648f);
    glVertex2f(-0.65f, -0.688f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.61f, -0.754f);
    glVertex2f(-0.65f, -0.794f);
    glEnd();

   }
  ///
  ///BUILDING BLUE

  void Building1Night()
{

//2nd bari
//fullbuilding
   glBegin(GL_QUADS);
    glColor3ub(115, 184, 59);
    glVertex2f(-0.9f, -0.9f);
    glVertex2f(-0.65f, -0.9f);
    glVertex2f(-0.65f,-0.37f);
    glVertex2f(-0.9f, -0.37f);
    glEnd();
//top of the building
     glBegin(GL_QUADS);
    glColor3ub(115, 83, 21);
    glVertex2f(-0.9f, -0.37f);
    glVertex2f(-0.65f, -0.37f);
    glVertex2f(-0.61f,-0.33f);
    glVertex2f(-0.86f, -0.33f);
    glEnd();

    //right side of the building
     glBegin(GL_QUADS);
    glColor3ub(78, 112, 49);
    glVertex2f(-0.65f, -0.9f);
    glVertex2f(-0.61f, -0.86f);
    glVertex2f(-0.61f,-0.33f);
    glVertex2f(-0.65f, -0.37f);
    glEnd();


    //2nd barir samner janala


    glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();

    glTranslatef(-.015f,-0.02f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(251,251,187);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.0f,-0.1f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(251,251,187);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();

glTranslatef(-.0f,-0.2f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    glTranslatef(-.0f,-0.3f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    glTranslatef(-.0f,-0.4f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(251,251,187);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.015f,-0.12f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.015f,-0.22f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.015f,-0.32f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(251,251,187);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.015f,-0.42f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(251,251,187);
    glVertex2f(-0.615f, -0.42f);
    glVertex2f(-0.615f, -0.37f);
    glVertex2f(-0.625f,-0.38f);
    glVertex2f(-0.625f, -0.43f);
    glEnd();
    glLoadIdentity();


    //2nd barir right side er janala


    glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();


     glTranslatef(-.05f,-0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.10f,-0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.15f,-0.0f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(251,251,187);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();



 glTranslatef(-.0f,-0.1f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.0f,-0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(251,251,187);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.0f,-0.3f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.0f,-0.42f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(251,251,187);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.05f,-0.1f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.1f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(251,251,187);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.1f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


 glTranslatef(-.05f,-0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(251,251,187);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.2f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

 glTranslatef(-.05f,-0.3f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.3f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.3f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

 glTranslatef(-.05f,-0.42f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();

     glTranslatef(-.1f,-0.42f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();


     glTranslatef(-.15f,-0.42f,0.0f);
      glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.7f, -0.4f);
    glVertex2f(-0.7f,-0.453f);
    glVertex2f(-0.68f, -0.453f);
    glEnd();
    glLoadIdentity();




//floor deyar line


    glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.9f, -0.476f);
    glVertex2f(-0.65f, -0.476f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.9f, -0.582f);
    glVertex2f(-0.65f, -0.582f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.9f, -0.688f);
    glVertex2f(-0.65f, -0.688f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.9f, -0.794f);
    glVertex2f(-0.65f, -0.794f);
    glEnd();


 glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.61f, -0.436f);
    glVertex2f(-0.65f, -0.476f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.61f, -0.542f);
    glVertex2f(-0.65f, -0.582f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.61f, -0.648f);
    glVertex2f(-0.65f, -0.688f);
    glEnd();

     glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.61f, -0.754f);
    glVertex2f(-0.65f, -0.794f);
    glEnd();

   }
  ///

void Building4()
{


    glLoadIdentity();
    glTranslatef(1.5f,-.1f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(52, 235, 192);
    glVertex2f(-0.8f, -0.25f);
    glVertex2f(-1.0f, -0.25f);
    glVertex2f(-1.0f,-0.8f);
    glVertex2f(-0.8f, -0.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204,170,102);
    glVertex2f(-0.8f, -0.25f);
    glVertex2f(-0.78f, -0.22f);
    glVertex2f(-0.98f,-0.22f);
    glVertex2f(-1.0f, -0.25f);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(52, 235, 192);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-0.78f, -0.79f);
    glVertex2f(-0.78f,-0.22f);
    glVertex2f(-0.8f, -0.25f);
    glEnd();
//Rasta 1st barir


    //1st barir floor
    glLoadIdentity();
glTranslatef(1.5f,-.1f,0.0f);
     glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-1.0f, -0.387f);
    glVertex2f(-0.8f, -0.387f);
    glEnd();

   glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-1.0f, -0.524f);
    glVertex2f(-0.8f, -0.524f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-1.0f, -0.661f);
    glVertex2f(-0.8f, -0.661f);
    glEnd();


     glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.78f, -0.362f);
    glVertex2f(-0.8f, -0.387f);
    glEnd();

   glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.78f, -0.504f);
    glVertex2f(-0.8f, -0.524f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.78f, -0.645f);
    glVertex2f(-0.8f, -0.661f);
    glEnd();


    //1st barir samner janala


    glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();
glLoadIdentity();

 glTranslatef(-.0f,-0.13f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);

glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();
 glLoadIdentity();

glTranslatef(-.0f,-0.27f,0.0f);

glTranslatef(1.5f,-.1f,0.0f);
glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();
 glLoadIdentity();


 glTranslatef(-.0f,-0.41f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);

glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();
 glLoadIdentity();




//1st bari r right side er janala
glTranslatef(1.5f,-.1f,0.0f);
glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();
glLoadIdentity();
 glTranslatef(-.05f,-0.0f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();

glTranslatef(-.1f,-0.0f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();

glTranslatef(-.15f,-0.0f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.0f,-0.13f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.05f,-0.13f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.10f,-0.13f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.15f,-0.13f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.0f,-0.27f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.05f,-0.27f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(294, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.10f,-0.27f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.15f,-0.27f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.0f,-0.41f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.05f,-0.41f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.10f,-0.41f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.15f,-0.41f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

    glLoadIdentity();
}

void Building4Night()
{


    glLoadIdentity();
    glTranslatef(1.5f,-.1f,0.0f);
    glBegin(GL_QUADS);
    glColor3ub(28, 186, 148);
    glVertex2f(-0.8f, -0.25f);
    glVertex2f(-1.0f, -0.25f);
    glVertex2f(-1.0f,-0.8f);
    glVertex2f(-0.8f, -0.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(115, 83, 21);
    glVertex2f(-0.8f, -0.25f);
    glVertex2f(-0.78f, -0.22f);
    glVertex2f(-0.98f,-0.22f);
    glVertex2f(-1.0f, -0.25f);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(59, 105, 94);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-0.78f, -0.79f);
    glVertex2f(-0.78f,-0.22f);
    glVertex2f(-0.8f, -0.25f);
    glEnd();
//Rasta 1st barir


    //1st barir floor
    glLoadIdentity();
glTranslatef(1.5f,-.1f,0.0f);
     glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-1.0f, -0.387f);
    glVertex2f(-0.8f, -0.387f);
    glEnd();

   glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-1.0f, -0.524f);
    glVertex2f(-0.8f, -0.524f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-1.0f, -0.661f);
    glVertex2f(-0.8f, -0.661f);
    glEnd();


     glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.78f, -0.362f);
    glVertex2f(-0.8f, -0.387f);
    glEnd();

   glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.78f, -0.504f);
    glVertex2f(-0.8f, -0.524f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.78f, -0.645f);
    glVertex2f(-0.8f, -0.661f);
    glEnd();


    //1st barir samner janala


    glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();
glLoadIdentity();

 glTranslatef(-.0f,-0.13f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);

glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();
 glLoadIdentity();

glTranslatef(-.0f,-0.27f,0.0f);

glTranslatef(1.5f,-.1f,0.0f);
glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();
 glLoadIdentity();


 glTranslatef(-.0f,-0.41f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);

glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();
 glLoadIdentity();




//1st bari r right side er janala
glTranslatef(1.5f,-.1f,0.0f);
glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();
glLoadIdentity();
 glTranslatef(-.05f,-0.0f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();

glTranslatef(-.1f,-0.0f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();

glTranslatef(-.15f,-0.0f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.0f,-0.13f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.05f,-0.13f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.10f,-0.13f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.15f,-0.13f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.0f,-0.27f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.05f,-0.27f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(294, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.10f,-0.27f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.15f,-0.27f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.0f,-0.41f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.05f,-0.41f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.10f,-0.41f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);
 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.15f,-0.41f,0.0f);
glTranslatef(1.5f,-.1f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();
}

void Building2()
{

//third quadrant 1st bari



    glBegin(GL_QUADS);
    glColor3ub(0,0,102);
    glVertex2f(-0.8f, -0.25f);
    glVertex2f(-1.0f, -0.25f);
    glVertex2f(-1.0f,-0.8f);
    glVertex2f(-0.8f, -0.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(204,170,102);
    glVertex2f(-0.8f, -0.25f);
    glVertex2f(-0.78f, -0.22f);
    glVertex2f(-0.98f,-0.22f);
    glVertex2f(-1.0f, -0.25f);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(102,102,102);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-0.78f, -0.79f);
    glVertex2f(-0.78f,-0.22f);
    glVertex2f(-0.8f, -0.25f);
    glEnd();
//Rasta 1st barir

 glBegin(GL_QUADS);
    glColor3ub(102,102,102);
    glVertex2f(-0.785f, -0.793f);
    glVertex2f(-0.798f, -0.797f);
    glVertex2f(-0.35f,-0.81f);
    glVertex2f(-0.35f, -0.83f);
    glEnd();
    //1st barir floor


     glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-1.0f, -0.387f);
    glVertex2f(-0.8f, -0.387f);
    glEnd();

   glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-1.0f, -0.524f);
    glVertex2f(-0.8f, -0.524f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-1.0f, -0.661f);
    glVertex2f(-0.8f, -0.661f);
    glEnd();


     glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-0.78f, -0.362f);
    glVertex2f(-0.8f, -0.387f);
    glEnd();

   glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-0.78f, -0.504f);
    glVertex2f(-0.8f, -0.524f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-0.78f, -0.645f);
    glVertex2f(-0.8f, -0.661f);
    glEnd();


    //1st barir samner janala


    glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();


 glTranslatef(-.0f,-0.13f,0.0f);


glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();
 glLoadIdentity();

glTranslatef(-.0f,-0.27f,0.0f);


glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();
 glLoadIdentity();


 glTranslatef(-.0f,-0.41f,0.0f);


glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();
 glLoadIdentity();




//1st bari r right side er janala

glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

 glTranslatef(-.05f,-0.0f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();

glTranslatef(-.1f,-0.0f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();

glTranslatef(-.15f,-0.0f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.0f,-0.13f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.05f,-0.13f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.10f,-0.13f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.15f,-0.13f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.0f,-0.27f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.05f,-0.27f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.10f,-0.27f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.15f,-0.27f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.0f,-0.41f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.05f,-0.41f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.10f,-0.41f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.15f,-0.41f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();

//tree



    glEnd();


}

void Building2Night()
{

//third quadrant 1st bari



    glBegin(GL_QUADS);
    glColor3ub(27, 27, 54);
    glVertex2f(-0.8f, -0.25f);
    glVertex2f(-1.0f, -0.25f);
    glVertex2f(-1.0f,-0.8f);
    glVertex2f(-0.8f, -0.8f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(115, 83, 21);
    glVertex2f(-0.8f, -0.25f);
    glVertex2f(-0.78f, -0.22f);
    glVertex2f(-0.98f,-0.22f);
    glVertex2f(-1.0f, -0.25f);
    glEnd();

 glBegin(GL_QUADS);
    glColor3ub(27, 27, 54);
    glVertex2f(-0.8f, -0.8f);
    glVertex2f(-0.78f, -0.79f);
    glVertex2f(-0.78f,-0.22f);
    glVertex2f(-0.8f, -0.25f);
    glEnd();
//Rasta 1st barir

 glBegin(GL_QUADS);
    glColor3ub(27, 27, 54);
    glVertex2f(-0.785f, -0.793f);
    glVertex2f(-0.798f, -0.797f);
    glVertex2f(-0.35f,-0.81f);
    glVertex2f(-0.35f, -0.83f);
    glEnd();
    //1st barir floor


     glBegin(GL_LINES);
    glColor3ub(27, 27, 54);
    glVertex2f(-1.0f, -0.387f);
    glVertex2f(-0.8f, -0.387f);
    glEnd();

   glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-1.0f, -0.524f);
    glVertex2f(-0.8f, -0.524f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-1.0f, -0.661f);
    glVertex2f(-0.8f, -0.661f);
    glEnd();


     glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-0.78f, -0.362f);
    glVertex2f(-0.8f, -0.387f);
    glEnd();

   glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-0.78f, -0.504f);
    glVertex2f(-0.8f, -0.524f);
    glEnd();

glBegin(GL_LINES);
    glColor3ub(102,150,0);
    glVertex2f(-0.78f, -0.645f);
    glVertex2f(-0.8f, -0.661f);
    glEnd();


    //1st barir samner janala


    glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();


 glTranslatef(-.0f,-0.13f,0.0f);


glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();
 glLoadIdentity();

glTranslatef(-.0f,-0.27f,0.0f);


glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();
 glLoadIdentity();


 glTranslatef(-.0f,-0.41f,0.0f);


glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.795f, -0.29f);
    glVertex2f(-0.795f, -0.34f);
    glVertex2f(-0.785f,-0.32f);
    glVertex2f(-0.785f, -0.27f);
    glEnd();
 glLoadIdentity();




//1st bari r right side er janala

glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

 glTranslatef(-.05f,-0.0f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();

glTranslatef(-.1f,-0.0f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();

glTranslatef(-.15f,-0.0f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.0f,-0.13f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.05f,-0.13f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.10f,-0.13f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.15f,-0.13f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.0f,-0.27f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.05f,-0.27f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.10f,-0.27f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.15f,-0.27f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.0f,-0.41f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.05f,-0.41f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.10f,-0.41f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(252,251,187);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();


glTranslatef(-.15f,-0.41f,0.0f);

 glBegin(GL_QUADS);
    glColor3ub(94, 94, 81);
    glVertex2f(-0.82f, -0.3f);
    glVertex2f(-0.84f, -0.3f);
    glVertex2f(-0.84f,-0.35f);
    glVertex2f(-0.82f, -0.35f);
    glEnd();

glLoadIdentity();

//tree



}


int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(720,550);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Sea view");
   glutDisplayFunc(mydisplay);
   glutMouseFunc(myMouse);
   glutKeyboardFunc(handleKeypress);
   glutMainLoop();
   return 0;
}
