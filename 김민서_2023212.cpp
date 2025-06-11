#include <GL/glut.h>
#include <stdio.h>
#include <iostream>
#define GL_PI 3.1415
GLint pivot = 0;


void RenderScene(void)
{
	std::cout << "RenderScene" << std::endl;
	std::cout << xRot << " " << yRot << std::endl;


	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glPushMatrix();
	glColor3f(0.0f, 0.0f, 0.0f);



	gluLookAt(0.0f, 0.0f, 0.0f, //카메라 위치
		0.0f, 0.0f, -1.0f, //바라볼 목표 지점
		0.0f, 1.0f, 0.0f); //카메라 상향 벡터 - 보통 (0,1,0) 사용


	if (pivot == 1)
	{

		for (int i = 1; i <= pivot; i++)
		{
			glBegin(GL_TRIANGLE_FAN);

			glVertex3f(0.0f, 0.0f, 0.0f);
			glVertex3f(50.0f, 0.0f, 0.0f);


			if (pivot % 2 == 0)
				glColor3f(1.0f, 0.0f, 0.0f);
			else
				glColor3f(0.0f, 1.0f, 0.0f);

			float angle = pivot * 2.0f * GL_PI / 8;
			float x = 50.0f * cos(angle);
			float y = 50.0f * sin(angle);
			glVertex3f(x, y, 0.0f);

			glEnd();

		}

	}
	else if (pivot == 2)
	{
		for (int i = 1; i <= pivot; i++)
		{
			glBegin(GL_TRIANGLE_FAN);

			glVertex3f(0.0f, 0.0f, 0.0f);
			glVertex3f(50.0f, 0.0f, 0.0f);


			if (pivot % 2 == 0)
				glColor3f(1.0f, 0.0f, 0.0f);
			else
				glColor3f(0.0f, 1.0f, 0.0f);

			float angle = pivot * 2.0f * GL_PI / 8;
			float x = 50.0f * cos(angle);
			float y = 50.0f * sin(angle);
			glVertex3f(x, y, 0.0f);

			glEnd();

		}
	}
	else if (pivot == 3)
	{
		for (int i = 1; i <= pivot; i++)
		{
			glBegin(GL_TRIANGLE_FAN);

			glVertex3f(0.0f, 0.0f, 0.0f);
			glVertex3f(50.0f, 0.0f, 0.0f);


			if (pivot % 2 == 0)
				glColor3f(1.0f, 0.0f, 0.0f);
			else
				glColor3f(0.0f, 1.0f, 0.0f);

			float angle = pivot * 2.0f * GL_PI / 8;
			float x = 50.0f * cos(angle);
			float y = 50.0f * sin(angle);
			glVertex3f(x, y, 0.0f);

			glEnd();

		}
	}
	else if (pivot == 4)
	{
		for (int i = 1; i <= pivot; i++)
		{
			glBegin(GL_TRIANGLE_FAN);

			glVertex3f(0.0f, 0.0f, 0.0f);
			glVertex3f(50.0f, 0.0f, 0.0f);


			if (pivot % 2 == 0)
				glColor3f(1.0f, 0.0f, 0.0f);
			else
				glColor3f(0.0f, 1.0f, 0.0f);

			float angle = pivot * 2.0f * GL_PI / 8;
			float x = 50.0f * cos(angle);
			float y = 50.0f * sin(angle);
			glVertex3f(x, y, 0.0f);

			glEnd();

		}
	}
	else if (pivot == 5)
	{
		for (int i = 1; i <= pivot; i++)
		{
			glBegin(GL_TRIANGLE_FAN);

			glVertex3f(0.0f, 0.0f, 0.0f);
			glVertex3f(50.0f, 0.0f, 0.0f);


			if (pivot % 2 == 0)
				glColor3f(1.0f, 0.0f, 0.0f);
			else
				glColor3f(0.0f, 1.0f, 0.0f);

			float angle = pivot * 2.0f * GL_PI / 8;
			float x = 50.0f * cos(angle);
			float y = 50.0f * sin(angle);
			glVertex3f(x, y, 0.0f);

			glEnd();

		}
	}
	else if (pivot == 6)
	{
		for (int i = 1; i <= pivot; i++)
		{
			glBegin(GL_TRIANGLE_FAN);

			glVertex3f(0.0f, 0.0f, 0.0f);
			glVertex3f(50.0f, 0.0f, 0.0f);


			if (pivot % 2 == 0)
				glColor3f(1.0f, 0.0f, 0.0f);
			else
				glColor3f(0.0f, 1.0f, 0.0f);

			float angle = pivot * 2.0f * GL_PI / 8;
			float x = 50.0f * cos(angle);
			float y = 50.0f * sin(angle);
			glVertex3f(x, y, 0.0f);

			glEnd();

		}
		}
	else if (pivot == 7)
	{
		for (int i = 1; i <= pivot; i++)
		{
			glBegin(GL_TRIANGLE_FAN);

			glVertex3f(0.0f, 0.0f, 0.0f);
			glVertex3f(50.0f, 0.0f, 0.0f);


			if (pivot % 2 == 0)
				glColor3f(1.0f, 0.0f, 0.0f);
			else
				glColor3f(0.0f, 1.0f, 0.0f);

			float angle = pivot * 2.0f * GL_PI / 8;
			float x = 50.0f * cos(angle);
			float y = 50.0f * sin(angle);
			glVertex3f(x, y, 0.0f);

			glEnd();

		}
		}
			else if (pivot == 8)
	{
		for (int i = 1; i <= pivot; i++)
		{
			glBegin(GL_TRIANGLE_FAN);

			glVertex3f(0.0f, 0.0f, 0.0f);
			glVertex3f(50.0f, 0.0f, 0.0f);


			if (pivot % 2 == 0)
				glColor3f(1.0f, 0.0f, 0.0f);
			else
				glColor3f(0.0f, 1.0f, 0.0f);

			float angle = pivot * 2.0f * GL_PI / 8;
			float x = 50.0f * cos(angle);
			float y = 50.0f * sin(angle);
			glVertex3f(x, y, 0.0f);

			glEnd();

		}
	}
	
	glPopMatrix();
	glFlush();
	glutSwapBuffers();

}



void glLineWidth()
{
	GLfloat sizes[20]; //지원되는 선의 두께 범위를 저장
	GLfloat step;     // 지원되는 선 두께 단계를 저장

	//지원되는 선 두께와 범위를 얻는다.
	glGetFloatv(GL_LINE_WIDTH_RANGE, sizes);
	glGetFloatv(GL_LINE_WIDTH_GRANULARITY, &step);
}

void SetupRC(void)
{
	std::cout << "SetupRC" << std::endl;
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glShadeModel(GL_FLAT);
}

void ChangeSize(GLsizei w, GLsizei h)
{
	std::cout << "w = " << w << " " << "h = " << h << std::endl;
	std::cout << "ChangeSize" << std::endl;
	GLint wSize = 100;
	GLfloat aspectRatio;

	if (h == 0)
		h = 1;
	glViewport(0, 0, w, h);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();


	//여기에 작성 클리핑 영역 설정(left, right, bottom, top, near, far,순서)
	aspectRatio = (GLfloat)w / (GLfloat)h;
	if (w <= h)
		glOrtho(-wSize, wSize, -wSize / aspectRatio, wSize / aspectRatio, -100, 100);
	else
		glOrtho(-wSize * aspectRatio, wSize * aspectRatio, -wSize, wSize, -100, 100);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}


void keyboard(unsigned char key, int x, int y)
{

	if (key == '1')
		pivot = 1;
	if (key == '2')
		pivot = 2;
	if (key == '3')
		pivot = 3;
	if (key == '4')
		pivot = 4;
	if (key == '5')
		pivot = 5;
	if (key == '6')
		pivot = 6;
	if (key == '7')
		pivot = 7;
	if (key == '8')
		pivot = 8;

	glutPostRedisplay();
}


int main(int argc, char** argv)
{
	glutInit(&argc, argv); //glut 초기화
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitDisplayMode(GLUT_DOUBLE | GL_RGB | GL_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(300, 200);
	glutCreateWindow("simple");


	glutDisplayFunc(RenderScene);
	glutReshapeFunc(ChangeSize);
	glutKeyboardFunc(keyboard);
	SetupRC();
	glutMainLoop();
}
