/*
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
*/
/*
06:甲流疫情死亡率
查看提交统计提问
总时间限制: 1000ms 内存限制: 65536kB
描述
甲流并不可怕，在中国，它的死亡率并不是很高。请根据截止2009年12月22日各省报告的甲流确诊数和死亡数，计算甲流在各省的死亡率。

输入
输入仅一行，有两个整数，第一个为确诊数，第二个为死亡数。
输出
输出仅一行，甲流死亡率，以百分数形式输出，精确到小数点后3位。
样例输入
10433 60
样例输出
0.575%
提示
输出%可以使用printf(“%%”);
来源
习题(3-10)
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(3) << 100*b/a << "%" << endl;
    return 0;
}
*/
/*
07:计算多项式的值
查看提交统计提问
总时间限制: 1000ms 内存限制: 65536kB
描述
对于多项式f(x) = ax3 + bx2 + cx + d 和给定的a, b, c, d, x，计算f(x)的值。

输入
输入仅一行，包含5个实数，分别是x，及参数a、b、c、d的值，每个数都是绝对值不超过100的双精度浮点数。数与数之间以一个空格分开。
输出
输出一个实数，即f(x)的值，保留到小数点后7位。
样例输入
2.31 1.2 2 2 3
样例输出
33.0838692
 */
/*#include <bits/stdc++.h>
#include <iomanip>
double func(double x, double a, double b, double c, double d) {
    return a*pow(x, 3) + b*pow(x, 2) + c * x + d;
}
int main() {
    double a, b, c ,d, x;
    std::cin >> x >> a >> b >> c >> d;
    std::cout << std::fixed << std::setprecision(7) << func(x,a,b,c,d) << std::endl;
    return 0;
}*/
/*
*08:温度表达转化
查看提交统计提问
总时间限制: 1000ms 内存限制: 65536kB
描述
利用公式 C = 5 * (F-32) / 9 （其中C表示摄氏温度，F表示华氏温度） 进行计算转化。

输入
输入一行，包含一个实数f，表示华氏温度。（f >= -459.67）
输出
输出一行，包含一个实数，表示对应的摄氏温度，要求精确到小数点后5位。
样例输入
41
样例输出
5.00000
提示
C/C++,使用double
来源*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
double Celcius(double Falcius) {
    return 5 * (Falcius - 32) / 9;
}
int main() {
    double c, f;
    cin >> f;
    cout << fixed << setprecision(5) << Celcius(f) << endl;
    return 0;
}
*/
/*
09:与圆相关的计算
查看提交统计提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给出圆的半径，求圆的直径、周长和面积。

输入
输入包含一个实数r（0 < r <= 10,000），表示圆的半径。
输出
输出一行，包含三个数，分别表示圆的直径、周长、面积，数与数之间以一个空格分开，每个数保留小数点后4位。
样例输入
3.0
样例输出
6.0000 18.8495 28.2743
提示
如果圆的半径是r，那么圆的直径、周长、面积分别是2*r、2 * pi * r、pi * r * r，其中约定pi＝3.14159。
可以使用printf("%.4lf", ...)实现保留小数点后4位。
来源
习题(3-1) 计算概论07（工学院）周文灵
*/
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
const double pi = 3.14159;
double d(double r) { return 2 * r; }
double s(double r) { return pi * r * r; }
double c(double r) { return 2 * pi * r; }

int main() {
    double r;
    cin >> r;
    cout << fixed << setprecision(4) << d(r) << " " << c(r) << " " << s(r) << endl;
    return 0;
}
/*
*10:计算并联电阻的阻值
查看提交统计提问
总时间限制: 1000ms 内存限制: 65536kB
描述
对于阻值为r1和r2的电阻，其并联电阻阻值公式计算如下：

R = 1/(1/r1 + 1/r2)

输入
两个电阻阻抗大小，浮点型，以一个空格分开。
输出
并联之后的阻抗大小，结果保留小数点后2位
样例输入
1 2
样例输出
0.67
提示
计算过程使用float类型
 */