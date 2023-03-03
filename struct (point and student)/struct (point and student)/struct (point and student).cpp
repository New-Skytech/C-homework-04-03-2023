#include <iostream>
#include <string>
using namespace std;


struct point
{
public:
    int x;
    int y;
    int z;
    point(int x1, int y1, int z1)
    {
        x = x1; y = y1; z = z1;
    }
    point(int x1, int y1)
    {
        x = x1; y = y1; z = 0;
    }
    void print()
    {
        cout << "x:" << x << endl;
        cout << "y:" << y << endl;
        cout << "z:" << z << endl;
    }
};

struct student
{
public:
    string subname;
    string name;
    string surname;
    int number;
    int grades[5];
    student()
    {
        subname = ""; name = ""; surname = ""; number = 0;
    }
    student(string name1, string name2, string name3, int num, int* grade)
    {
        subname = name1; name = name2; surname = name3; number = num; grades[0] = grade[0]; grades[1] = grade[1]; grades[2] = grade[2]; grades[3] = grade[3]; grades[4] = grade[4];
    }
    void setinfo(string name1, string name2, string name3, int num, int* grade)
    {
        subname = name1; name = name2; surname = name3; number = num; grades[0] = grade[0]; grades[1] = grade[1]; grades[2] = grade[2]; grades[3] = grade[3]; grades[4] = grade[4];
    }
    int testscore()
    {
        float avrg = 0;
        for (int x = 0; x < 5; x++)
        {
            avrg += grades[x];
        }
        avrg = avrg / 5.0;
        if (avrg > 4.2)
        {
            cout << subname << number << endl;
            return 1;
        }
    }
};


int main()
{
    point point3D = point(5, 10, 7);
    point point2D = point(10, 17);

    point3D.print();
    point2D.print();

    
    int flag = 0;
    student std[10];
    string name1;
    string name2;
    string name3;
    int num;
    int grades[5];
    for (int x = 0; x < 10; x++)
    {
    cin >> name1 >> name2 >> name3 >> num >> grades[0] >> grades[1] >> grades[2] >> grades[3] >> grades[4];
    std[x].setinfo(name1, name2, name3, num, grades);
    }

    for (int x = 0; x < 10; x++)
    {

        flag += std[x].testscore();
    }
    if (flag == 0)
    {
        cout << "there is no students with average grade higher than 4.2";
    }
}
