#include<gl/glut.h>
void DibujarTortuga() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.7, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2i(550, 90);
	glVertex2i(515, 65);
	glVertex2i(535, 30);
	glVertex2i(560, 30);
	glVertex2i(580, 50);
	glEnd();
	//==========================
	glColor3f(1, 0.7, 1);
	glBegin(GL_POLYGON);
	glVertex2i(455, 90);
	glVertex2i(445, 65);
	glVertex2i(480, 30);
	glVertex2i(515, 65);
	glVertex2i(505, 90);
	glEnd();
	//==========================
	glColor3f(0.7, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2i(425, 30);
	glVertex2i(445, 65);
	glVertex2i(410, 90);
	glVertex2i(380, 50);
	glVertex2i(400, 30);
	glEnd();
	//==========================
	glColor3f(1, 1, 0.7);
	glBegin(GL_POLYGON);
	glVertex2i(505, 90);
	glVertex2i(515, 65);
	glVertex2i(550, 90);
	glVertex2i(525, 120);
	glEnd();
	//==========================
	glColor3f(1, 1.2, 1);
	glBegin(GL_POLYGON);
	glVertex2i(410, 90);
	glVertex2i(445, 65);
	glVertex2i(455, 90);
	glVertex2i(430, 120);
	glEnd();
	//==========================
	glColor3f(1, 0.6, 0.1);
	glBegin(GL_POLYGON);
	glVertex2i(525, 120);
	glVertex2i(505, 90);
	glVertex2i(455, 90);
	glVertex2i(430, 120);
	glEnd();
	//==========================
	glColor3f(0.5, 1.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(410, 155);
	glVertex2i(375, 160);
	glVertex2i(410, 90);
	glVertex2i(430, 120);
	glEnd();
	//==========================
	glColor3f(1, 0.5, 1);
	glBegin(GL_POLYGON);
	glVertex2i(580, 160);
	glVertex2i(545, 155);
	glVertex2i(525, 120);
	glVertex2i(550, 90);
	glEnd();
	//==========================
	glColor3f(0.5, 1, 0.8);
	glBegin(GL_POLYGON);
	glVertex2i(410, 155);
	glVertex2i(430, 190);
	glVertex2i(525, 190);
	glVertex2i(545, 155);
	glVertex2i(525, 120);
	glVertex2i(430, 120);
	glEnd();
	//==========================
	glColor3f(1, 0.4, 1);
	glBegin(GL_POLYGON);
	glVertex2i(545, 155);
	glVertex2i(580, 160);
	glVertex2i(550, 240);
	glVertex2i(525, 190);
	glEnd();
	//==========================
	glColor3f(1, 1, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(410, 155);
	glVertex2i(375, 160);
	glVertex2i(405, 240);
	glVertex2i(430, 190);
	glEnd();
	//==========================
	glColor3f(1, 0.2, 1);
	glBegin(GL_POLYGON);
	glVertex2i(420, 210);
	glVertex2i(440, 225);
	glVertex2i(515, 225);
	glVertex2i(535, 210);
	glVertex2i(525, 190);
	glVertex2i(430, 190);
	glEnd();
	//==========================
	glColor3f(0.3, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2i(550, 240);
	glVertex2i(520, 260);
	glVertex2i(515, 225);
	glVertex2i(535, 210);
	glEnd();
	//==========================
	glColor3f(1, 1, 0.5);
	glBegin(GL_POLYGON);
	glVertex2i(435, 260);
	glVertex2i(405, 240);
	glVertex2i(420, 210);
	glVertex2i(440, 225);
	glEnd();
	//==========================
	glColor3f(0.3, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2i(480, 280);
	glVertex2i(435, 260);
	glVertex2i(440, 225);
	glVertex2i(515, 225);
	glVertex2i(520, 260);
	glEnd();
	//==========================
	glColor3f(0.5, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2i(620, 290);
	glVertex2i(560, 290);
	glVertex2i(520, 260);
	glVertex2i(550, 240);
	glEnd();
	//==========================
	glColor3f(1, 0.5, 1);
	glBegin(GL_TRIANGLES);
	glVertex2i(620, 290);
	glVertex2i(630, 240);
	glVertex2i(550, 240);
	glEnd();
	//==========================
	glColor3f(0, 0.1, 0.8);
	glBegin(GL_POLYGON);
	glVertex2i(620, 290);
	glVertex2i(630, 240);
	glVertex2i(660, 200);
	glVertex2i(650, 260);
	glEnd();
	//==========================
	glColor3f(0.6, 0.8, 1);
	glBegin(GL_POLYGON);
	glVertex2i(400, 290);
	glVertex2i(335, 290);
	glVertex2i(405, 240);
	glVertex2i(435, 260);
	glEnd();
	//==========================
	glColor3f(0.8, 1, 1);
	glBegin(GL_TRIANGLES);
	glVertex2i(335, 290);
	glVertex2i(325, 240);
	glVertex2i(405, 240);
	glEnd();
	//==========================
	glColor3f(1, 1.0, 1);
	glBegin(GL_POLYGON);
	glVertex2i(335, 290);
	glVertex2i(325, 240);
	glVertex2i(295, 200);
	glVertex2i(305, 260);
	glEnd();
	//==========================
	glColor3f(1.0, 1, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(480, 330);
	glVertex2i(450, 310);
	glVertex2i(455, 270);
	glVertex2i(480, 280);
	glVertex2i(500, 270);
	glVertex2i(505, 310);
	glEnd();
	glFlush();

}
void IniciarConfiguracion() {
	glClearColor(1.0, .3, .3, 1.5);
	glColor3f(0.0, 0.0, 1.0);
	glLineWidth(3.0);
	glOrtho(0, 800, 0, 600, 1, -1);
}
int main(int argc, char* args[]) {
	glutInit(&argc, args);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(1000, 800);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Tortuga");
	glutDisplayFunc(DibujarTortuga);
	IniciarConfiguracion();
	glutMainLoop();
	return 0;
}