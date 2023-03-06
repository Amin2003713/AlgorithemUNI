#include <iostream>

// برای محاسبه 2 به توان n
int powerOfTwo(int n) {
    if (n == 0)
        return 1;
    return 2 * powerOfTwo(n - 1);
}

// الگوریتم استراسن
int strassen(int x, int y, int n) {
    // حالت پایه
    if (n == 1)
        return x * y;

    // تقسیم ماتریس ها به 4 زیر ماتریس
    int m = n / 2;
    int a = x / powerOfTwo(m);
    int b = x % powerOfTwo(m);
    int c = y / powerOfTwo(m);
    int d = y % powerOfTwo(m);

    // محاسبه مقادیر P1 تا P7
    int p1 = strassen(a, (c - d), m);
    int p2 = strassen((a + b), d, m);
    int p3 = strassen((b - d), c, m);
    int p4 = strassen(b, (d - c), m);
    int p5 = strassen((a + d), (c + d), m);
    int p6 = strassen((a - c), (c + d), m);
    int p7 = strassen((a - b), (c + d), m);

    // محاسبه مقدار های کانال های ماتریس حاصل
    int A = p5 + p4 - p2 + p6;
    int B = p1 + p2;
    int C = p3 + p4;
    int D = p1 + p5 - p3 - p7;

    // ترکیب 4 زیر ماتریس
    return powerOfTwo(2 * m) * A + powerOfTwo(m) * (B + C) + D;
}

int main() {
    int x, y, n;
    std::cout << "Enter two numbers to multiply: ";
    std::cin >> x >> y;
    n = 1;
    while (n < std::max(x, y)) {
        n *= 2;
    }
    std::cout << "Product: " << strassen(x, y, n) << std::endl;
    return 0;
}


///تابع powerOfTwo برای محاسبه توان 2 به توان n استفاده می‌شود.
///تابع strassen به صورت بازگشتی پیاده سازی شده است. در هر مرحله، دو ماتریس به