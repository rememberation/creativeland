#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // ���������������

    for (int i = 0; i < n; ++i) 
	{
        int num, sum = 0;
        // ����ÿ�������������-1����
        while (1) {
            scanf("%d", &num);//�����������ĺö��� 
            if (num == -1)
			 {
                break;  // ������ǰ��������
            }
            // �ж��Ƿ���������������ۼӵ�sum
            if (num % 3 == 1 && num % 5 == 2) {
                sum += num;
            }
        }
        // �����ǰ���������Ľ��
        printf("%d\n", sum);
    }
    return 0;
}

