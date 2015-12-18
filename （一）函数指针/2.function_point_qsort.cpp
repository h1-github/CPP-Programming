#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/**
 * 定义比较规则的函数
 */
int compare(const void *elem1, const void * elem2){
    unsigned int *a, *b;  //初始化两个 unsigned int 类型指针 来接收要比较的两个数组元素
    a = (unsigned int*)elem1; //强制转换数组元素类型为 unsigned int 类型
    b = (unsigned int*)elem2;
    return *a - *b; //计算 2 个元素的差 返回 -/0/+
}

#define NUM 5
/**
 * 库函数 qsort 的使用
 * 要对一组任意的数组按照指定规则进行排序的话 需要给出下面 4 个条件：
 * 1) 数组的起始位置
 * 2）数组的元素个数
 * 3）数组的元素大小
 * 4）排序的规则
 * qsort() 4）中 返回负数前一个参数置前 返回 0 两个参数位置任意 返回正数后一个参数置前
 */
int main(){
    unsigned int a[NUM] = { 12, 32, 45, 29, 71}; //初始化一个 unsigned int 类型的数组
    int (*cp)(const void *, const void *);
    cp = compare;
    qsort(a, NUM, sizeof(unsigned int), cp); // 调用 qsort 函数 并给出参数
    for (int i = 0; i < NUM; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
