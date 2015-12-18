#include <iostream>

using namespace std;

/**
 * 定义一个输出较小数的函数
 */
void PrintMin(int a, int b){
    if(a < b){
        cout << a << endl;
    }else{
        cout << b << endl;
    }
}

/**
 * 和数组 结构体一样 函数也会在内存中开辟一块存储空间
 * 我们可以把这快空间通过指针来控制 操作函数
 */
int main(){
    /**
     * 定义一个函数指针
     * void 是函数的返回类型
     * (*pm) 定义了函数指针 名称是 pm
     * （int, int）指明了函数的各个参数和类型 分别是两个 int 类型
     */
    void (*pm)(int, int);   // 定义函数指针
    int x = 6, y = 5;
    pm = PrintMin;  //将函数赋值给函数指针变量
    pm(x , y); //通过函数指针变量调用函数 执行任务
    return 0;
}
