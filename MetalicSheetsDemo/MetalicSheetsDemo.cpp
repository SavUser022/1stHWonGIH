#include "Header.h"
#include "Sheets.h"
#include "RectangleSheet.h"
#include "TrangleSheet.h"
#include "SquareSheet.h"

int main()
{
    // Start
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // 1
    cout << "START" << endl;
    cout << "==================================" << endl;
    int N = 16;
    Sheets** sheets = new Sheets * [N]
        {
                new SquareSheet(100, 100, "Квадратний лист", 10, 2700, "Алюміній"),
                new SquareSheet(1000, 500, "Квадрантий лист", 7, 7800, "Залізо"),
                new SquareSheet(150, 50, "Квадрантий лист", 7, 7800, "Залізо"),
                new SquareSheet(1000, 1500, "Квадрантий лист", 11, 7800, "Залізо"),
                new SquareSheet(2000, 1000, "Квадрантий лист", 20, 7800, "Залізо"),
                new TrangleSheet("Трикутний лист", 10, 7000, 200, 100, 500, "Чавун"),
                new TrangleSheet("Трикутний лист", 15, 7000, 500, 200, 1500, "Чавун"),
                new TrangleSheet("Трикутний лист", 8, 7000, 1000, 400, 2000, "Чавун"),
                new SquareSheet(100, 100, "Квадратний лист", 3, 19300, "Золото"),
                new SquareSheet(200, 200, "Квадратний лист", 10, 19300, "Золото"),
                new SquareSheet(650, 650, "Квадратний лист", 7, 8900, "Мідь"),
                new SquareSheet(10000, 10000, "Квадратний лист", 50, 7300, "Олово"),
                new SquareSheet(400, 400, "Квадратний лист", 5, 8500, "Латунь"),
                new RectangleSheet(1000, 1500, "Прямокутний лист", 4, 7800, "Залізо"),
                new RectangleSheet(100, 500, "Прямокутний лист", 5, 7800, "Залізо"),
                new RectangleSheet(5000, 770, "Прямокутний лист", 9, 7800, "Залізо"),
                new RectangleSheet(890, 1500, "Прямокутний лист", 7, 7800, "Залізо"),
                new RectangleSheet(1000, 500, "Прямокутний лист", 4, 7800, "Залізо"),
                new RectangleSheet(10000, 680, "Прямокутний лист", 90, 7800, "Залізо"),
                new RectangleSheet(3999, 5999, "Прямокутний лист", 11, 7800, "Залізо")

        };
    for (int i = 0; i < N; i++)
    {
        cout << endl;
        cout << "-----------------------" << endl;
        sheets[i]->showInfo();
        cout << "-----------------------" << endl;
    }
    for (int i = 0; i < N; i++)
    {
        delete[] sheets[i];
    }
    cout << endl;
    cout << "==============================================" << endl;
    cout << "FINISH" << endl;
    cout << "==============================================" << endl;
    return 0;
}

