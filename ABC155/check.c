// include
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// prototype
int SortAscendStr(const void *str1, const void *str2);
int SortDescendStr(const void *str1, const void *str2);
 
// main
int main(void)
{
    char **str;
    unsigned int elmt;
    size_t cnt;
     
    // ソート対象の文字列を格納
    int index=0;
	int N;
	scanf("%d",&N);
	str = (char **)malloc(sizeof(char*)*N);
	while (index <N)
	{
		str[index] = (char*)malloc(sizeof(char)*(10+1));
		scanf("%s",str[index]);
		index++;
	}	
    // ソート対象の要素数を格納
    cnt = 8;
     
    printf("ソート前\n");
    for (elmt = 0; elmt < cnt; elmt++) {
        printf("[%s] ", str[elmt]);
    }
    printf("\n");
    printf("\n");
     
    // 文字列を昇順でソート
    qsort(str, cnt, sizeof(*str), SortAscendStr);
    printf("昇順でソート\n");
    for (elmt = 0; elmt < cnt; elmt++) {
        printf("[%s] ", str[elmt]);
    }
    printf("\n");
    printf("\n");
     
    // 文字列を降順でソート
    qsort(str, cnt, sizeof(*str), SortDescendStr);
    printf("降順でソート\n");
    for (elmt = 0; elmt < cnt; elmt++) {
        printf("[%s] ", str[elmt]);
    }
    printf("\n");
     
    return 0;
}
 
// =======================================
// @brief  文字列を昇順でソートする
// @param  str1 [in],比較対象1
// @param  str2 [in],比較対象2
// @return 負 比較対象1の方が小さい
// @return 0  比較対象1と比較対象2が等しい
// @return 正 比較対象1の方が大きい
// @note   無し
// =======================================
int SortAscendStr(const void *str1, const void *str2)
{
    return strcmp(*(char **)str1, *(char **)str2);
}
 
// =======================================
// @brief  文字列を降順でソートする
// @param  str1 [in],比較対象1
// @param  str2 [in],比較対象2
// @return 負 比較対象2の方が小さい
// @return 0  比較対象1と比較対象2が等しい
// @return 正 比較対象2の方が大きい
// @note   無し
// =======================================
int SortDescendStr(const void *str1, const void *str2)
{
    return strcmp(*(char **)str2, *(char **)str1);
}
