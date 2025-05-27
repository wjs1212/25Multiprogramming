#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;       // 衛濛婁 部 衛除 盪濰辨 滲熱
    double cpu_time_used;     // 唳婁 衛除 (蟾) 盪濰辨 滲熱
    start = clock();          // ⑷營 CPU 衛除擊 衛濛 衛除戲煎 盪濰

    int i = 0;
    // 蕨衛 濛機: 衛除檜 褻旎 勘葬朝 瑞Щ (衛除 難薑擊 嬪и 渦嘐 濛機)
    while (i < 100000)
    {
        //moveCursor(0, 0);
        printf("戲�黰鷝R %d\n", i);
        i = i + 1;
    }

    end = clock();            // ⑷營 CPU 衛除擊 部 衛除戲煎 盪濰

    // 唳婁 衛除 啗骯 (す 熱 離檜 / 蟾渡 す 熱)
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("濛機縑 勘萼 衛除: %.3f蟾\n", cpu_time_used);  // 唸婁 轎溘

    return 0;
}
