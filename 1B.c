#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long int money;
        int year;
        int month;
        int day;
        double date;
        scanf("%lld%d%d%d", &money, &year, &month, &day);
        date = sqrt(2 * (1e9 - money));
        while(date > 0.5){
            if ((year % 4 == 0) && (year != 1900) && (year != 2100)) {
                if (month == 1 && day == 1 && date >= 366) {
                    date -= 366;
                    year ++;
                    continue;
                }
                switch(month) {
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                    case 8:
                    case 10:{
                        if(date >= 32) {
                            date -= 32 - day;
                            day = 1;
                            month++;
                        }
                        else {
                            if(day == 31) {
                                day = 1;
                                date--;
                                month++;
                            }
                            else {
                                date--;
                                day++;
                            }
                        }
                        break;
                    }
                    case 2:{
                        if(date >= 30) {
                            date -= 30 - day;
                            day = 1;
                            month++;
                        }
                        else {
                            if(day == 29) {
                                day = 1;
                                date--;
                                month++;
                            }
                            else {
                                date--;
                                day++;
                            }
                        }
                        break;
                    }
                    case 12: {
                        date--;
                        if (day == 31) {
                            day = 1;
                            month = 1;
                            year++;
                        }
                        else {
                            day++;
                        }
                        break;
                    }
                    default: {
                        if(date >= 31) {
                            date -= 31 - day;
                            day = 1;
                            month++;
                        }
                        else {
                            if(day == 30) {
                                day = 1;
                                date--;
                                month++;
                            }
                            else {
                                date--;
                                day++;
                            }
                        }
                        break;
                    }
                }
            }
            else {
                if (month == 1 && day == 1 && date >= 365) {
                    date -= 365;
                    year ++;
                    continue;
                }
                switch(month) {
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                    case 8:
                    case 10: {
                        if (date >= 32) {
                            date -= 32 - day;
                            day = 1;
                            month++;
                        } else {
                            if(day == 31) {
                                day = 1;
                                date--;
                                month++;
                            }
                            else {
                                date--;
                                day++;
                            }
                        }
                        break;
                    }
                    case 2:{
                        if(date >= 29) {
                            date -= 29 - day;
                            day = 1;
                            month++;
                        }
                        else {
                            if(day == 28) {
                                day = 1;
                                date--;
                                month++;
                            }
                            else {
                                date--;
                                day++;
                            }
                        }
                        break;
                    }
                    case 12: {
                        date--;
                        if (day == 31) {
                            day = 1;
                            month = 1;
                            year++;
                        }
                        else {
                            day++;
                        }
                        break;
                    }
                    default: {
                        if(date >= 31) {
                            date -= 31 - day;
                            day = 1;
                            month++;
                        }
                        else {
                            if(day == 30) {
                                day = 1;
                                date--;
                                month++;
                            }
                            else {
                                date--;
                                day++;
                            }
                        }
                        break;
                    }
                }
            }
        }
        printf("%d %d %d\n", year, month, day);
    }
    return 0;
}
