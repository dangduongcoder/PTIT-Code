#include <stdio.h>
#include <string.h>

struct Number
{
    char num[10];
    int count;
    int len;
};


int main() {

    char raw[1000005] = {};
    int cnt_w = 0;
    int cnt_i = 0;
    char words[100005][10] = {};
    int ok = 1;
    char tw[10] = {};


    while (fgets(raw, 1000005, stdin)) {
        cnt_i = 0;

        raw[strcspn(raw, "\n")] = '\0';

        for (int i = 0 ; i < strlen(raw); i ++) {
            
            tw[cnt_i] = raw[i];
            cnt_i ++;
            
            if (raw[i] == ' ' || raw[i + 1] == '\0') {
                tw[(raw[i] == ' ') ? (cnt_i - 1) : cnt_i] = '\0';
                ok = 1;
                int l = strlen(tw);
                for (int j = 0 ; j < l / 2; j ++) {
                    if (tw[j] != tw[l - 1 - j]) {
                        ok = 0;
                        break;
                    }
                }
                if (ok) {
                    strcpy(words[cnt_w], tw);
                    cnt_w ++;
                }
                cnt_i = 0;

            }

        }
        // cnt_w ++;
    
    }

    cnt_w --;

    // gets(raw);

    

    // if (ok == 0) cnt_w --; 

    

    // printf("%s\n", words[cnt_w]);

    // for (int i = 0 ; i <= cnt_w ; i ++) {
    //     printf("%s\n", words[i]);
    // }

    struct Number r[cnt_w + 1];
    int cnt_r = 0;
    int max_l = 0;

    for (int i = 0 ; i <= cnt_w ; i ++) {
        ok = 1;

        for (int j = 0 ; j < cnt_r ; j ++) {
            if (strcmp(r[j].num, words[i]) == 0) {
                r[j].count ++;
                ok = 0;
                break;
            }
        }

        if (ok) {
            r[cnt_r].count = 1;
            r[cnt_r].len = strlen(words[i]);
            strcpy(r[cnt_r].num, words[i]);
            cnt_r ++;

        }
    }


    // for (int i = 0 ; i < cnt_r - 1 ; i ++) {
    //     for (int j = i + 1 ; j < cnt_r ; j ++) {
    //         if (r[i].count < r[j].count) {
    //             struct Number temp = r[i];
    //             r[i] = r[j];
    //             r[j] = temp;
    //         }
    //     }
    // }


    for (int i = 0 ; i < cnt_r ; i ++) {
        // if (r[i].len == max_l) {
        //     printf("%s %d %d\n", r[i].num, r[i].count, r[i].len);
        // }
        // printf("%s %d %d\n", r[i].num, r[i].count, r[i].len);
        if (r[i].len > max_l) max_l = r[i].len;
    }

    // printf("%d\n", max_l);

    for (int i = 0 ; i < cnt_r ; i ++) {
        if (r[i].len == max_l) {
            printf("%s %d\n", r[i].num, r[i].count);
        }
    }
    

    return 0;
}