#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;       // ���۰� �� �ð� ����� ����
    double cpu_time_used;     // ��� �ð� (��) ����� ����
    start = clock();          // ���� CPU �ð��� ���� �ð����� ����

    int i = 0;
    // ���� �۾�: �ð��� ���� �ɸ��� ���� (�ð� ������ ���� ���� �۾�)
    while (i < 100000)
    {
        //moveCursor(0, 0);
        printf("�������R %d\n", i);
        i = i + 1;
    }

    end = clock();            // ���� CPU �ð��� �� �ð����� ����

    // ��� �ð� ��� (ƽ �� ���� / �ʴ� ƽ ��)
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("�۾��� �ɸ� �ð�: %.3f��\n", cpu_time_used);  // ��� ���

    return 0;
}
