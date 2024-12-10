#include "glut.h" // Thư viện đồ họa OpenGL
#include <cmath>
bool light1_enabled = false;
bool light2_enabled = false;
float rotateAngleX = 0.0f; // Góc xoay theo trục X
float rotateAngleY = 0.0f; // Góc xoay theo trục Y
void drawSolidCylinder(GLdouble radius, GLdouble height, GLint slices, GLint stacks) {
    GLUquadricObj* quadric = gluNewQuadric();
    gluQuadricDrawStyle(quadric, GLU_FILL);
    gluQuadricNormals(quadric, GLU_SMOOTH);
    gluCylinder(quadric, radius, radius, height, slices, stacks);
    gluDeleteQuadric(quadric);
}
void drawbuc() {
    glDisable(GL_LIGHTING);
    glPushMatrix();
    glColor3f(0.6, 0.4, 0.2); // Màu xanh da trời
    glTranslatef(5.25, 1.0, -9.0);
    glScalef(2.0f, 3.5f, 1.0f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0); // Màu xanh da trời
    glTranslatef(5.5, 3.0, -9.0);
    glRotatef(-45.0f, 1.0f, 0.0f, 0.0f);
    glScalef(0.1f, 1.0f, 0.1f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glTranslatef(5.5f, 3.5f, -9.5f);
    glColor3f(0.0f, 0.0f, 0.0f); // Màu 
    glutSolidSphere(0.2f, 20, 20); // 
    glPopMatrix();

}
void drawTV()
{
    // Bật ánh sáng
    glEnable(GL_LIGHTING);

    // Thiết lập các thuộc tính của vật liệu cho TV
    GLfloat tv_ambient[] = { 0.5f, 0.0f, 0.5f, 1.0f }; // Màu tím
    GLfloat tv_diffuse[] = { 0.5f, 0.0f, 0.5f, 1.0f }; // Màu tím
    GLfloat tv_specular[] = { 0.5f, 0.0f, 0.5f, 1.0f }; // Màu tím
    GLfloat tv_shininess = 50.0f;

    // Thiết lập các thuộc tính vật liệu
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, tv_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, tv_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, tv_specular);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, tv_shininess);

    // Bắt đầu vẽ TV
    glPushMatrix();
    glColor3f(0, 0.0, 0.0); // Màu tím
    glTranslatef(0.0f, 4.0f, -15.75f);
    glScalef(7.0f, 4.5f, 1.0f);
    glutSolidCube(1.0);
    glPopMatrix();
}
void drawchair() {
    glPushMatrix();
    glTranslatef(-6.0f, -1.25f, 20.0f);
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(0.5f, 0.5f, 0.5f); // Màu xám
    drawSolidCylinder(0.7, 1.5, 20, 20); // Loa trái
    glPopMatrix();
    //
    glPushMatrix();
    glTranslatef(-3.0f, -1.25f, 20.0f);
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(0.5f, 0.5f, 0.5f); // Màu xám
    drawSolidCylinder(0.7, 1.5, 20, 20); // Loa trái
    glPopMatrix();
    //
    glPushMatrix();
    glTranslatef(0.0f, -1.25f, 20.0f);
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(0.5f, 0.5f, 0.5f); // Màu xám
    drawSolidCylinder(0.7, 1.5, 20, 20); // Loa trái
    glPopMatrix();
    //
    glPushMatrix();
    glTranslatef(3.0f, -1.25f, 20.0f);
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(0.5f, 0.5f, 0.5f); // Màu xám
    drawSolidCylinder(0.7, 1.5, 20, 20); // Loa trái
    glPopMatrix();
    //
    glPushMatrix();
    glTranslatef(6.0f, -1.25f, 20.0f);
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(0.5f, 0.5f, 0.5f); // Màu xám
    drawSolidCylinder(0.7, 1.5, 20, 20); // Loa trái
    glPopMatrix();
    //
    glPushMatrix();
    glTranslatef(-3.0f, -1.25f, 16.0f);
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(0.5f, 0.5f, 0.5f); // Màu xám
    drawSolidCylinder(0.7, 1.5, 20, 20); // Loa trái
    glPopMatrix();
    //
    glPushMatrix();
    glTranslatef(-6.0f, -1.25f, 16.0f);
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(0.5f, 0.5f, 0.5f); // Màu xám
    drawSolidCylinder(0.7, 1.5, 20, 20); // Loa trái
    glPopMatrix();
    //
    glPushMatrix();
    glTranslatef(0.0f, -1.25f, 16.0f);
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(0.5f, 0.5f, 0.5f); // Màu xám
    drawSolidCylinder(0.7, 1.5, 20, 20); // Loa trái
    glPopMatrix();
    //
    glPushMatrix();
    glTranslatef(3.0f, -1.25f, 16.0f);
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(0.5f, 0.5f, 0.5f); // Màu xám
    drawSolidCylinder(0.7, 1.5, 20, 20); // Loa trái
    glPopMatrix();
    //
    glPushMatrix();
    glTranslatef(6.0f, -1.25f, 16.0f);
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(0.5f, 0.5f, 0.5f); // Màu xám
    drawSolidCylinder(0.7, 1.5, 20, 20); // Loa trái
    glPopMatrix();
    //
    glPushMatrix();
    glTranslatef(-6.0f, -1.25f, 12.0f);
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(0.5f, 0.5f, 0.5f); // Màu xám
    drawSolidCylinder(0.7, 1.5, 20, 20); // Loa trái
    glPopMatrix();
    //
    glPushMatrix();
    glTranslatef(-3.0f, -1.25f, 12.0f);
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(0.5f, 0.5f, 0.5f); // Màu xám
    drawSolidCylinder(0.7, 1.5, 20, 20); // Loa trái
    glPopMatrix();
    //
    glPushMatrix();
    glTranslatef(0.0f, -1.25f, 12.0f);
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(0.5f, 0.5f, 0.5f); // Màu xám
    drawSolidCylinder(0.7, 1.5, 20, 20); // Loa trái
    glPopMatrix();
    //
    glPushMatrix();
    glTranslatef(3.0f, -1.25f, 12.0f);
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(0.5f, 0.5f, 0.5f); // Màu xám
    drawSolidCylinder(0.7, 1.5, 20, 20); // Loa trái
    glPopMatrix();
    //
    glPushMatrix();
    glTranslatef(6.0f, -1.25f, 12.0f);
    glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(0.5f, 0.5f, 0.5f); // Màu xám
    drawSolidCylinder(0.7, 1.5, 20, 20); // Loa trái
    glPopMatrix();
}
void drawLoa() {
    // Vẽ loa trái trên bục
    glPushMatrix();
    glTranslatef(-6.5f, 3.0f, -16.75f);
    glRotatef(0.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(0.5f, 0.5f, 0.5f); // Màu xám
    drawSolidCylinder(0.5, 2.0, 20, 20); // Loa trái
    glPopMatrix();
    //kich am
    glDisable(GL_LIGHTING);
    glPushMatrix();
    glColor3f(0, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(-6.5f, 2.0f, -15.75f);
    glScalef(2.0f, 3.5f, 1.50f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glTranslatef(-6.5f, 1.5f, -14.95f);
    glColor3f(1.0f, 1.0f, 0.0f); // Màu vàng
    glutSolidSphere(0.6f, 20, 20); // Đèn 1
    glPopMatrix();

    // Vẽ loa phải trên bục
    glEnable(GL_LIGHTING);
    glPushMatrix();
    glTranslatef(6.5f, 3.0f, -16.75f);
    glRotatef(0.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(0.5f, 0.5f, 0.5f); // Màu xám
    drawSolidCylinder(0.5, 2.0, 20, 20); // Loa phải
    glPopMatrix();
    //
    glDisable(GL_LIGHTING);
    glPushMatrix();
    glColor3f(0, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(6.5f, 2.0f, -15.75f);
    glScalef(2.0f, 3.5f, 1.50f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glTranslatef(6.5f, 1.5f, -14.95f);
    glColor3f(1.0f, 1.0f, 0.0f); // Màu vàng
    glutSolidSphere(0.6f, 20, 20); // Đèn 1
    glPopMatrix();

}

void drawTree() {
    glEnable(GL_LIGHTING);
    // Vật liệu cho thân 1
    GLfloat body_ambient[] = { 0.0f, 0.0f, 0.0f, 1.0f };
    GLfloat body_diffuse[] = { 0.0f, 0.0f, 0.0f, 1.0f };
    GLfloat body_specular[] = { 0.0f, 0.0f, 0.0f, 1.0f };
    GLfloat body_shininess = 50.0f;

    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, body_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, body_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, body_specular);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, body_shininess);

    // Vẽ thân 1
    glPushMatrix();
    glTranslatef(-6.5f, -1.5f, -5.0f);
    glScalef(0.3, 1.0, 0.2);
    glutSolidCube(1.0);
    glPopMatrix();


    // Vật liệu cho cây 1
    GLfloat tree_ambient[] = { 0.0f, 0.4f, 0.0f, 1.0f };
    GLfloat tree_diffuse[] = { 0.0f, 0.6f, 0.0f, 1.0f };
    GLfloat tree_specular[] = { 0.0f, 0.8f, 0.0f, 1.0f };
    GLfloat tree_shininess = 30.0f;

    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, tree_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, tree_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, tree_specular);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, tree_shininess);

    // Vẽ cây 1
    glPushMatrix();
    glTranslatef(-6.5f, -1.f, -5.0f);
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    glutSolidCone(0.7, 2.0, 10, 10);
    glPopMatrix();
    // Vật liệu cho chậu 1
    GLfloat pot_ambient[] = { 0.6f, 0.3f, 0.1f, 1.0f };
    GLfloat pot_diffuse[] = { 0.6f, 0.3f, 0.1f, 1.0f };
    GLfloat pot_specular[] = { 0.6f, 0.3f, 0.1f, 1.0f };
    GLfloat pot_shininess = 50.0f;

    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, pot_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, pot_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, pot_specular);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, pot_shininess);

    // Vẽ chậu 1
    glPushMatrix();
    glTranslatef(-6.5f, -2.5f, -5.0f);
    glScalef(1, 1.0, 1);
    glutSolidCube(1.0);
    glPopMatrix();

    // Vật liệu cho thân 2
    GLfloat body2_ambient[] = { 0.0f, 0.0f, 0.0f, 1.0f };
    GLfloat body2_diffuse[] = { 0.0f, 0.0f, 0.0f, 1.0f };
    GLfloat body2_specular[] = { 0.0f, 0.0f, 0.0f, 1.0f };
    GLfloat body2_shininess = 50.0f;

    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, body2_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, body2_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, body2_specular);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, body2_shininess);

    // Vẽ thân 2
    glPushMatrix();
    glTranslatef(6.5f, -1.5f, -5.0f);
    glScalef(0.3, 1.0, 0.2);
    glutSolidCube(1.0);
    glPopMatrix();


    // Vật liệu cho cây 2
    GLfloat tree2_ambient[] = { 0.0f, 0.4f, 0.0f, 1.0f };
    GLfloat tree2_diffuse[] = { 0.0f, 0.6f, 0.0f, 1.0f };
    GLfloat tree2_specular[] = { 0.0f, 0.8f, 0.0f, 1.0f };
    GLfloat tree2_shininess = 30.0f;

    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, tree2_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, tree2_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, tree2_specular);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, tree2_shininess);

    // Vẽ cây 2
    glPushMatrix();
    glTranslatef(6.5f, -1.f, -5.0f);
    glRotatef(-90.0f, 1.0f, 0.0f, 0.0f);
    glutSolidCone(0.7, 2.0, 10, 10);
    glPopMatrix();
    // Vật liệu cho chậu 2
    GLfloat pot2_ambient[] = { 0.6f, 0.3f, 0.1f, 1.0f };
    GLfloat pot2_diffuse[] = { 0.6f, 0.3f, 0.1f, 1.0f };
    GLfloat pot2_specular[] = { 0.6f, 0.3f, 0.1f, 1.0f };
    GLfloat pot2_shininess = 50.0f;

    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, pot2_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, pot2_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, pot2_specular);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, pot2_shininess);

    // Vẽ chậu 2
    glPushMatrix();
    glTranslatef(6.5f, -2.5f, -5.0f);
    glScalef(1, 1.0, 1);
    glutSolidCube(1.0);
    glPopMatrix();
}
// Hàm vẽ trục tọa độ
void drawAxis() {
    glDisable(GL_LIGHTING);
    glBegin(GL_LINES);
    // Trục X (màu đỏ)
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(-10.0f, 0.0f, 0.0f);
    glVertex3f(10.0f, 0.0f, 0.0f);
    // Trục Y (màu xanh lá cây)
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(0.0f, -10.0f, 0.0f);
    glVertex3f(0.0f, 10.0f, 0.0f);
    // Trục Z (màu xanh dương)
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(0.0f, 0.0f, -10.0f);
    glVertex3f(0.0f, 0.0f, 10.0f);
    glEnd();
    glEnable(GL_LIGHTING);
}
void drawKhandai() {
    // Mái trái
    glEnable(GL_LIGHTING);
    GLfloat mai1_ambient[] = { 0.5, 0.5, 0.0, 1.0 };
    GLfloat mai1_diffuse[] = { 0.5, 0.0, 0.0, 1.0 };
    GLfloat mai1_specular[] = { 0.5, 0.0, 0.0, 1.0 };
    GLfloat mai1_shininess = 50.0;
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, mai1_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mai1_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, mai1_specular);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, mai1_shininess);

    glPushMatrix();
    glColor3f(0.5, 0.0, 0.0); // Màu đỏ
    glTranslatef(-6.1f, 10.5f, -13.0);
    glRotatef(20.0f, 0.0f, 0.0f, 1.0f);
    glScalef(13.0f, 0.3f, 10.0f);
    glutSolidCube(1.0);
    glPopMatrix();

    // Mái phải
    glEnable(GL_LIGHTING);
    GLfloat mai2_ambient[] = { 0.5, 0.5, 0.0, 1.0 };
    GLfloat mai2_diffuse[] = { 0.5, 0.0, 0.0, 1.0 };
    GLfloat mai2_specular[] = { 0.5, 0.0, 0.0, 1.0 };
    GLfloat mai2_shininess = 50.0;
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, mai2_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, mai2_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, mai2_specular);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, mai2_shininess);
    glPushMatrix();
    glColor3f(0.5, 0.0, 0.0); // Màu đỏ
    glTranslatef(6.1f, 10.5f, -13.0);
    glRotatef(-20.0f, 0.0f, 0.0f, 10.0f);
    glScalef(13.0f, 0.3f, 10.0f);
    glutSolidCube(1.0);
    glPopMatrix();

    // Vẽ tường sau
    glDisable(GL_LIGHTING);
    GLfloat wallback_ambient[] = { 1,0.99, 0.7, 1.0 };
    GLfloat wallback_diffuse[] = { 1,0.99, 0.7, 1.0 };
    GLfloat wallback_specular[] = { 1,0.99, 0.7, 1.0 };
    GLfloat wallback_shininess = 50.0;
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, wallback_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, wallback_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, wallback_specular);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, wallback_shininess);
    glPushMatrix();
    glColor3f(1, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(0.0, 2.00, -16.25);
    glScalef(15.0f, 9.5f, 0.8f);
    glutSolidCube(1.0);
    glPopMatrix();
    //vẽ bục
    // 
    glEnable(GL_LIGHTING);
    GLfloat floor1_ambient[] = { 1,0.99, 0.7, 1.0 };
    GLfloat floor1_diffuse[] = { 1,0.941, 0.7, 1.0 };
    GLfloat floor1_specular[] = { 1,0.941, 0.7, 1.0 };
    GLfloat floor1_shininess = 50.0;
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, floor1_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, floor1_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, floor1_specular);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, floor1_shininess);
    glPushMatrix();
    glColor3f(0.0, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(-8.25, -1.0, -9.0);
    glScalef(6.0f, 2.5f, 6.0f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glColor3f(0.0, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(8.25, -1.0, -9.0);
    glScalef(6.0f, 2.5f, 6.0f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glColor3f(0.0, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(0.0, -1.0, -13.0);
    glScalef(15.0f, 2.5f, 7.0f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glColor3f(0.0, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(0.0, -1.25, -8.0);
    glScalef(8.0f, 2.0f, 3.0f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glColor3f(0.0, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(0.0, -1.5, -5.5);
    glScalef(5.0f, 1.5f, 2.0f);
    glutSolidCube(1.0);
    glPopMatrix();
    // Vẽ sàn
    glDisable(GL_LIGHTING);
    GLfloat floor_ambient[] = { 1,0.99, 0.7, 1.0 };
    GLfloat floor_diffuse[] = { 1,0.941, 0.7, 1.0 };
    GLfloat floor_specular[] = { 1,0.941, 0.7, 1.0 };
    GLfloat floor_shininess = 50.0;
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, floor_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, floor_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, floor_specular);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, floor_shininess);
    //
    glPushMatrix();
    glColor3f(1.0, 0.0, 0.0); // Màu xanh da trời
    glTranslatef(0.0, -2.5, 1.0);
    glScalef(17.0f, 0.2f, 60.0f);
    glutSolidCube(1.0);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0.0, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(0.0, -2.5, -13.0);
    glScalef(21.0f, 0.2f, 10.0f);
    glutSolidCube(1.0);
    glPopMatrix();
    // vẽ cột trống khán đài

    glDisable(GL_LIGHTING);
    GLfloat cot1_ambient[] = { 1,0.99, 0.7, 1.0 };
    GLfloat cot1_diffuse[] = { 1,0.99, 0.7, 1.0 };
    GLfloat cot1_specular[] = { 1,0.99, 0.7, 1.0 };
    GLfloat cot1_shininess = 50.0;
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, cot1_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, cot1_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, cot1_specular);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, cot1_shininess);
    //
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(-8.5, 3.5, -17.25);
    glScalef(0.5f, 12.5f, 0.5f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(8.5, 3.5, -17.25);
    glScalef(0.5f, 12.5f, 0.5f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(-10.5, 3.1, -8.75);
    glScalef(0.5f, 11.5f, 0.5f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(10.5, 3.1, -8.75);
    glScalef(0.5f, 11.5f, 0.5f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(0.0, 8.5, -8.75);
    glScalef(21.0f, 0.5f, 0.5f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(-8.25, 2.1, 2.0);
    glScalef(0.5f, 9.5f, 0.5f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(8.25, 2.1, 2.0);
    glScalef(0.5f, 9.5f, 0.5f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(-8.25, 2.1, 14.0);
    glScalef(0.5f, 9.5f, 0.5f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(8.25, 2.1, 14.0);
    glScalef(0.5f, 9.5f, 0.5f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(-8.25, 2.1, 24.0);
    glScalef(0.5f, 9.5f, 0.5f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(8.25, 2.1, 24.0);
    glScalef(0.5f, 9.5f, 0.5f);
    glutSolidCube(1.0);
    glPopMatrix();
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(-8.25, 2.1, 31.0);
    glScalef(0.5f, 9.5f, 0.5f);
    glutSolidCube(1.0);
    glPopMatrix();
    //
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5); // Màu xanh da trời
    glTranslatef(8.25, 2.1, 31.0);
    glScalef(0.5f, 9.5f, 0.5f);
    glutSolidCube(1.0);
    glPopMatrix();
}
void drawLights() {
    // Tắt ánh sáng
    glDisable(GL_LIGHTING);

    // Màu và vật liệu cho dây treo
    GLfloat wire_ambient[] = { 0.3f, 0.3f, 0.3f, 1.0f }; // Màu xám
    GLfloat wire_diffuse[] = { 0.3f, 0.3f, 0.3f, 1.0f }; // Màu xám
    GLfloat wire_specular[] = { 0.3f, 0.3f, 0.3f, 1.0f }; // Màu xám
    GLfloat wire_shininess = 50.0f;

    // Thiết lập các thuộc tính vật liệu cho dây treo
    glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, wire_ambient);
    glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, wire_diffuse);
    glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, wire_specular);
    glMaterialf(GL_FRONT_AND_BACK, GL_SHININESS, wire_shininess);

    // Vẽ dây treo nối tất cả các đèn
    glPushMatrix();
    glColor3f(0.3f, 0.3f, 0.3f); // Màu xám
    glBegin(GL_LINES);
    // Duyệt qua các vị trí của các đèn
    for (float z = 2; z <= 22.0; z += 10.0) {
        for (float x = -8.25; x <= 8.25; x += 16.5) {
            // Vẽ đường thẳng từ đèn hiện tại đến đèn tiếp theo cùng trên cột
            glVertex3f(x, 5.5f, z);
            glVertex3f(x, 5.5f, z + 10.0);
        }
    }
    glEnd();
    glPopMatrix();

    // Bật lại ánh sáng
    glEnable(GL_LIGHTING);

    // Vẽ đèn
    glColor3f(1.0f, 1.0f, 0.0f); // Màu vàng cho đèn
    for (float z = 2; z <= 22.0; z += 10.0) {
        for (float x = -8.25; x <= 8.25; x += 16.5) {
            glPushMatrix();
            glTranslatef(x, 5.5f, z);
            glutSolidCube(0.6f); // Vẽ đèn hình vuông
            glPopMatrix();
        }
    }
}


// Vẽ tường sau với 2 đèn ở hai góc trên
void drawlight1() {
    glEnable(GL_LIGHTING);

    // Vật liệu và nguồn sáng cho đèn 1
    GLfloat light1_ambient[] = { 0.5f, 0.5f, 0.0f, 1.0f };
    GLfloat light1_diffuse[] = { 1.0f, 0.0f, 0.0f, 1.0f };
    GLfloat light1_specular[] = { 1.0f, 0.0f, 0.0f, 1.0f };
    GLfloat light1_position[] = { 7.5f, 6.0f, -16.0f, 1.0f }; // Vị trí đèn 1
    // Đặt góc chiếu và độ tập trung cho đèn 1
    GLfloat light1_spot_cutoff = -45.0f; // Góc chiếu
    GLfloat light1_spot_exponent = 10.0f; // Độ tập trung
    glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, light1_spot_cutoff);
    glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, light1_spot_exponent);
    glLightfv(GL_LIGHT1, GL_AMBIENT, light1_ambient);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, light1_diffuse);
    glLightfv(GL_LIGHT1, GL_SPECULAR, light1_specular);
    glLightfv(GL_LIGHT1, GL_POSITION, light1_position);

    // Vẽ đèn 1 ở góc trên bên trái
    glPushMatrix();
    glTranslatef(-6.5f, 6.0f, -16.0f);
    glColor3f(1.0f, 1.0f, 0.0f); // Màu vàng
    glutSolidSphere(0.5f, 20, 20); // Đèn 1
    glPopMatrix();
}
void drawlight2(){
    // Vật liệu và nguồn sáng cho đèn 2
    GLfloat light2_ambient[] = { 1.0f, 1.0f, 0.0f, 1.0f };
    GLfloat light2_diffuse[] = { 1.0f, 1.0f, 0.0f, 1.0f };
    GLfloat light2_specular[] = { 1.0f, 1.0f, 0.0f, 1.0f };
    GLfloat light2_position[] = { -7.5f, 6.0f, -16.0f, 1.0f }; // Vị trí đèn 2
    GLfloat light2_spot_cutoff = -45.0f; // Góc chiếu
    GLfloat light2_spot_exponent = 10.0f; // Độ tập trung
    glLightf(GL_LIGHT2, GL_SPOT_CUTOFF, light2_spot_cutoff);
    glLightf(GL_LIGHT2, GL_SPOT_EXPONENT, light2_spot_exponent);
    glLightfv(GL_LIGHT2, GL_AMBIENT, light2_ambient);
    glLightfv(GL_LIGHT2, GL_DIFFUSE, light2_diffuse);
    glLightfv(GL_LIGHT2, GL_SPECULAR, light2_specular);
    glLightfv(GL_LIGHT2, GL_POSITION, light2_position);

    // Vẽ đèn 2 ở góc trên bên phải
    glPushMatrix();
    glTranslatef(6.5f, 6.0f, -16.0f);
    glColor3f(1.0f, 1.0f, 0.0f); // Màu vàng
    glutSolidSphere(0.5f, 20, 20); // Đèn 2
    glPopMatrix();
}

// Hàm hiển thị
void display() {
    // Xóa màn hình thành màu trắng
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Màu nền trắng
    // Đặt màu vẽ là đen
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0, 5, 35.0, 0, 0, 0, 0.0, 1.0, 0.0);
    glRotatef(rotateAngleX, 1.0f, 0.0f, 0.0f);
    glRotatef(rotateAngleY, 0.0f, 1.0f, 0.0f);
    drawTree();
    drawKhandai();
    drawlight1();
    drawlight2();
    drawbuc();
    drawLoa();
    drawLights();
    drawchair();
    drawTV();
    glutSwapBuffers();
}

// Hàm khởi tạo
void Init() {
    for (int i = 0; i < 8; ++i) {
        glEnable(GL_LIGHT0 + i);
    }
    glEnable(GL_DEPTH_TEST);
}

// Hàm xử lý bàn phím
void keyboard(unsigned char key, int x, int y) {
    switch (key) {
    case '1':
        light1_enabled = !light1_enabled; // Đảo trạng thái của đèn 1
        if (light1_enabled)
            glEnable(GL_LIGHT1); // Bật đèn 1
        else
            glDisable(GL_LIGHT1); // Tắt đèn 1
        break;
    case '2':
        light2_enabled = !light2_enabled; // Đảo trạng thái của đèn 2
        if (light2_enabled)
            glEnable(GL_LIGHT2); // Bật đèn 2
        else
            glDisable(GL_LIGHT2); // Tắt đèn 2
        break;

    case 'w':
        rotateAngleX -= 5.0f;
        glDisable(GL_LIGHT1);
        glDisable(GL_LIGHT2);

        break;
    case 's':
        rotateAngleX += 5.0f;
        glDisable(GL_LIGHT1);
        glDisable(GL_LIGHT2);

        break;
    case 'a':
        rotateAngleY -= 5.0f;
        glDisable(GL_LIGHT1);
        glDisable(GL_LIGHT2);

        break;
    case 'd':
        rotateAngleY += 5.0f;
        glDisable(GL_LIGHT1);
        glDisable(GL_LIGHT2);

        break;
    }
    glutPostRedisplay();
}

// Hàm xử lý thay đổi kích thước cửa sổ
void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45, (float)w / (float)h, 5.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
}

// Hàm main
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowSize(800, 600);
    glutCreateWindow("House with Pool Underground");

    Init(); // Khởi tạo
    glutKeyboardFunc(keyboard);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();

    return 0;
}
