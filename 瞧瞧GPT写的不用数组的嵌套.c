#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // 输入测试用例数量

    for (int i = 0; i < n; ++i) 
	{
        int num, sum = 0;
        // 输入每组测试用例，以-1结束
        while (1) {
            scanf("%d", &num);//用来替代数组的好东西 
            if (num == -1)
			 {
                break;  // 结束当前测试用例
            }
            // 判断是否符合条件，是则累加到sum
            if (num % 3 == 1 && num % 5 == 2) {
                sum += num;
            }
        }
        // 输出当前测试用例的结果
        printf("%d\n", sum);
    }
    return 0;
}

