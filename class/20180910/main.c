#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* hello world */

int main(int argc, char *argv[]) {
/* printf include in stdio.h*/
    printf("Hello World!\n");
/* ���h�ϱ׽u�H�L�X�ϱ׽u �ϱ׽u�N��}��/�����S��\��*/
/* Double reverse slash to print reverse slash, reverse slash stands for opening/closing special features*/
/* DevC++ not support UTF-8*/
    printf("\\\n");
/* now print it all*/
    printf("#include <stdio.h>\n#include <stdlib.h>\n\nint main(int argc, char *argv[]){\n    printf(\"Hello World!\\n\");\n    system(\"pause\");\n    retern 0;\n}\n");
/* system pause include in stdlib.h*/
    system("pause");
    return 0;
}
