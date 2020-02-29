#include <cstdio>
#include <cstring>
char str[114514] = {'\0'};

void operate1() {
    if (str[0] == 'g') {
        str[strlen(str)] = 'h';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate2() {
    if (str[0] == 'w' && !(str[strlen(str) - 1] == 'y')) {
        str[strlen(str)] = 'j';
    }
    else {
        str[strlen(str)] = 't';
    }
}

void operate3() {
    if (strlen(str) <= 42) {
        str[strlen(str)] = 'u';
    }
}

void operate4() {
    if (str[strlen(str) - 1] == 'v') {
        str[strlen(str)] = 'd';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate5() {
    if (strlen(str) <= 43) {
        str[strlen(str)] = 'o';
    }
    else {
        str[strlen(str)] = 'q';
    }
}

void operate6() {
    for (int i = 0; i < strlen(str) / 2; i++) {
        char temp = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = temp;
    }
}

void operate7() {
    if (str[strlen(str) - 1] != 'x') {
        str[strlen(str)] = 's';
    }
}

void operate8() {
    if (strlen(str) < 22) {
        str[strlen(str)] = 'n';
    }
    else {
        str[strlen(str)] = 't';
    }
}

void operate9() {
    if (str[0] == 'i') {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate10() {
    if (str[strlen(str) - 1] == 'c') {
        str[strlen(str)] = 'e';
    }
    else {
        str[strlen(str)] = 'a';
    }
}

void operate11() {
    if (strlen(str) != 42 && str[strlen(str) - 1] == 'v') {
        str[strlen(str)] = 'u';
    }
}

void operate12() {
    if (strlen(str) >= 47) {
        str[strlen(str)] = 'j';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate13() {
    if (str[0] != 'v') {
        str[strlen(str)] = 'e';
    }
    else {
        str[strlen(str)] = 'd';
    }
}

void operate14() {
    if (str[strlen(str) - 1] == 'y') {
        str[strlen(str)] = 'w';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate15() {
    if (str[0] != 'u') {
        str[strlen(str)] = 'i';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate16() {
    if (strlen(str) >= 32) {
        str[strlen(str)] = 'w';
    }
}

void operate17() {
    if (str[strlen(str) - 1] != 'i' && str[0] == 'd') {
        str[strlen(str)] = 'a';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate18() {
    if (str[strlen(str) - 1] != 'y') {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate19() {
    if (str[0] == 'y') {
        str[strlen(str)] = 'v';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate20() {
    if (strlen(str) <= 50) {
        str[strlen(str)] = 'm';
    }
}

void operate21() {
    if (str[strlen(str) - 1] == 't') {
        str[strlen(str)] = 'w';
    }
    else {
        str[strlen(str)] = 'q';
    }
}

void operate22() {
    if (str[0] == 't') {
        str[strlen(str)] = 'e';
    }
}

void operate23() {
    if (strlen(str) > 48) {
        str[strlen(str)] = 'l';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate24() {
    if (str[strlen(str) - 1] == 'y') {
        str[strlen(str)] = 'w';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate25() {
    if (strlen(str) >= 18 && str[0] != 'b') {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
    else {
        str[strlen(str)] = 'c';
    }
}

void operate26() {
    if (strlen(str) > 18) {
        str[strlen(str)] = 'y';
    }
}

void operate27() {
    if (str[strlen(str) - 1] != 'g') {
        str[strlen(str)] = 'a';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate28() {
    if (str[0] != 'q') {
        str[strlen(str)] = 'i';
    }
}

void operate29() {
    if (str[strlen(str) - 1] == 'n' && strlen(str) >= 38) {
        str[strlen(str)] = 'o';
    }
    else {
        str[strlen(str)] = 'v';
    }
}

void operate30() {
    if (str[0] == 'n') {
        str[strlen(str)] = 'z';
    }
}

void operate31() {
    if (strlen(str) == 21 && str[0] != 'm') {
        str[strlen(str)] = 'u';
    }
    else {
        str[strlen(str)] = 'o';
    }
}

void operate32() {
    if (strlen(str) != 34) {
        str[strlen(str)] = 'z';
    }
}

void operate33() {
    for (int i = 0; i < strlen(str) / 2; i++) {
        char temp = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = temp;
    }
}

void operate34() {
    if (strlen(str) > 25) {
        str[strlen(str)] = 'c';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate35() {
    if (str[0] == 'u') {
        str[strlen(str)] = 'l';
    }
    else {
        str[strlen(str)] = 'k';
    }
}

void operate36() {
    if (strlen(str) >= 41) {
        str[strlen(str)] = 'p';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate37() {
    if (str[0] == 'p') {
        str[strlen(str)] = 'z';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate38() {
    if (!(str[strlen(str) - 1] == 'p' &&  strlen(str) < 4)) {
        str[strlen(str)] = 'l';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate39() {
    if ((strlen(str) != 16) && str[0] == 'w') {
        str[strlen(str)] = 'w';
    }
    else {
        str[strlen(str)] = 'o';
    }
}

void operate40() {
    if (str[strlen(str) - 1] == 'c') {
        str[strlen(str)] = 'p';
    }
    else {
        str[strlen(str)] = 'i';
    }
}

void operate41() {
    if (strlen(str) != 20) {
        str[strlen(str)] = 'p';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate42() {
    if (str[strlen(str) - 1] == 'b') {
        str[strlen(str)] = 'p';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate43() {
    if (str[0] == 'c') {
        str[strlen(str)] = 'l';
    }
    else {
        str[strlen(str)] = 'n';
    }
}

void operate44() {
    if (strlen(str) <= 40) {
        str[strlen(str)] = 'd';
    }
}

void operate45() {
    if (str[0] == 'g') {
        str[strlen(str)] = 'y';
    }
    else {
        str[strlen(str)] = 'i';
    }
}

void operate46() {
    if (str[strlen(str) - 1] != 'k') {
        str[strlen(str)] = 'v';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}

void operate47() {
    for (int i = 0; i < strlen(str) / 2; i++) {
        char temp = str[i];
        str[i] = str[strlen(str) - i - 1];
        str[strlen(str) - i - 1] = temp;
    }
}

void operate48() {
    if (strlen(str) <= 46) {
        str[strlen(str)] = 'v';
    }
    else {
        str[strlen(str)] = 'f';
    }
}

void operate49() {
    if (str[0] == 'i') {
        str[strlen(str)] = 'z';
    }
}

void operate50() {
    if (strlen(str) < 38) {
        str[strlen(str)] = 'b';
    }
    else {
        for (int i = 0; i < strlen(str) / 2; i++) {
            char temp = str[i];
            str[i] = str[strlen(str) - i - 1];
            str[strlen(str) - i - 1] = temp;
        }
    }
}


int main() {
    scanf("%s", str);

    operate1();
    //printf("%s\n", str);
    operate2();
    //printf("%s\n", str);
    operate3();
    //printf("%s\n", str);
    operate4();
    //printf("%s\n", str);
    operate5();
    //printf("%s\n", str);
    operate6();
    //printf("%s\n", str);
    operate7();
    //printf("%s\n", str);
    operate8();
    //printf("%s\n", str);
    operate9();
    //printf("%s\n", str);
    operate10();
    //printf("%s\n", str);
    operate11();
    //printf("%s\n", str);
    operate12();
    //printf("%s\n", str);
    operate13();
    //printf("%s\n", str);
    operate14();
    //printf("%s\n", str);
    operate15();
    //printf("%s\n", str);
    operate16();
    //printf("%s\n", str);
    operate17();
    //printf("%s\n", str);
    operate18();
    //printf("%s\n", str);
    operate19();
    //printf("%s\n", str);
    operate20();
    //printf("%s\n", str);
    operate21();
    //printf("%s\n", str);
    operate22();
    //printf("%s\n", str);
    operate23();
    //printf("%s\n", str);
    operate24();
    //printf("%s\n", str);
    operate25();
    //printf("%s\n", str);
    operate26();
    //printf("%s\n", str);
    operate27();
    //printf("%s\n", str);
    operate28();
    //printf("%s\n", str);
    operate29();
    //printf("%s\n", str);
    operate30();
    //printf("%s\n", str);
    operate31();
    //printf("%s\n", str);
    operate32();
    //printf("%s\n", str);
    operate33();
    //printf("%s\n", str);
    operate34();
    //printf("%s\n", str);
    operate35();
    //printf("%s\n", str);
    operate36();
    //printf("%s\n", str);
    operate37();
    //printf("%s\n", str);
    operate38();
    //printf("%s\n", str);
    operate39();
    //printf("%s\n", str);
    operate40();
    //printf("%s\n", str);
    operate41();
    //printf("%s\n", str);
    operate42();
    //printf("%s\n", str);
    operate43();
    //printf("%s\n", str);
    operate44();
    //printf("%s\n", str);
    operate45();
    //printf("%s\n", str);
    operate46();
    //printf("%s\n", str);
    operate47();
    //printf("%s\n", str);
    operate48();
    //printf("%s\n", str);
    operate49();
    //printf("%s\n", str);
    operate50();
    //printf("%s\n", str);

    printf("%s", str);

    return 0;
}