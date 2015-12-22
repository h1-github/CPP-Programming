#include <iostream>

using namespace std;

/**
 * argc 执行参数的个数
 * argv[] 执行参数组成的数组
 */
int main(int argc , char * argv[]){
    cout << "[start]" << endl;
    for (int i = 0; i < argc; i++) {
        cout << argv[i] << endl;
    }
    cout << "[end]" << endl;
    return 0;
}
