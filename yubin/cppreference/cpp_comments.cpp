#include <iostream>
 
/* 여러줄 포함가능 */
 
/**************
 * *을 마음대로 삽입 가능가지만 중첩 불가능
 * 
 */
 
// 한 줄당 하나의 주석


int main()
{
    // 주석은 전처리 전에 제거되므로
    // ABC 는 1이되고 "1 hello world"가 출력
  
#define ABC 1//2134
    std::cout << ABC << " hello world\n";
 
    // The below code won't be run
    // return 1;
 
    // The below code will be run
    return 0;
}