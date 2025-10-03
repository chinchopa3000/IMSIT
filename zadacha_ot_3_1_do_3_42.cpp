#include <iostream>
#include <cmath>
#include <cstdio>

int main() {
    // 3.1
    double cm;
    printf("Enter centimeters for 3.1: ");
    scanf("%lf", &cm);
    printf("In %.0lf cm there are %.0lf full meters\n\n", cm, floor(cm / 100));

    // 3.2
    double kg;
    printf("Enter kilograms for 3.2: ");
    scanf("%lf", &kg);
    printf("In %.0lf kg there are %.0lf centners\n\n", kg, floor(kg / 100));

    // 3.3
    int days = 234;
    printf("In %d days there are %d full weeks\n\n", days, days / 7);

    // 3.4
    int N, k;
    printf("Enter number of students (N) for 3.4: ");
    scanf("%d", &N);
    printf("Enter number of apples (k) for 3.4: ");
    scanf("%d", &k);
    printf("Each student gets %d apples, %d remain in basket\n\n", k / N, k % N);

    // 3.5
    int a, b, c;
    printf("Enter a for 3.5: ");
    scanf("%d", &a);
    printf("Enter b for 3.5: ");
    scanf("%d", &b);
    printf("Enter c for 3.5: ");
    scanf("%d", &c);
    if (a < c || b < c) {
        printf("Cannot get a square with side %d\n\n", c);
    } else {
        int squares = (a / c) * (b / c);
        printf("You can get %d squares\n\n", squares);
    }

    // 3.6
    int seat;
    printf("Enter seat number (1-36) for 3.6: ");
    scanf("%d", &seat);
    if (seat < 1 || seat > 36) {
        printf("Invalid seat number\n\n");
    } else {
        printf("Your seat is in compartment %d\n\n", (seat - 1) / 4 + 1);
    }

    // 3.7
    int apartment;
    printf("Enter apartment number (1-15) for 3.7: ");
    scanf("%d", &apartment);
    if (apartment < 1 || apartment > 15) {
        printf("Invalid apartment number\n\n");
    } else {
        printf("Your floor is %d\n\n", (apartment - 1) / 3 + 1);
    }

    // 3.8
    int ticket;
    printf("Enter ticket number (1643-1942) for 3.8: ");
    scanf("%d", &ticket);
    if (ticket < 1643 || ticket > 1942) {
        printf("Wrong cinema\n\n");
    } else {
        int row = (ticket - 1643) / 15 + 1;
        printf("Your row is %d\n\n", row);
    }

    // 3.9
    int seconds;
    printf("Enter seconds for 3.9: ");
    scanf("%d", &seconds);
    printf("Hours passed: %d\n", seconds / 3600);
    printf("Minutes in current hour: %d\n", (seconds % 3600) / 60);
    printf("Seconds in current minute: %d\n\n", seconds % 60);

    // 3.10
    int day_of_year, first_day;
    printf("Enter day of year (1-365) for 3.10: ");
    scanf("%d", &day_of_year);
    printf("Enter first day of year (1-7) for 3.10: ");
    scanf("%d", &first_day);
    if (day_of_year < 1 || day_of_year > 365) {
        printf("Invalid day of year\n\n");
    } else if (first_day < 1 || first_day > 7) {
        printf("Invalid first day\n\n");
    } else {
        const char* days_of_week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
        int day_index = (day_of_year + first_day - 2) % 7;
        printf("Day of week: %s\n\n", days_of_week[day_index]);
    }

    // 3.11
    int month_num;
    printf("Enter month number for 3.11: ");
    scanf("%d", &month_num);
    printf("Month after %d months: %d\n\n", month_num, (month_num % 12) + 1);

    // 3.12
    int flat_num;
    printf("Enter flat number for 3.12: ");
    scanf("%d", &flat_num);
    printf("Floor: %d\n", (flat_num - 1) / 4 + 1);
    printf("Position on floor: %d\n\n", (flat_num - 1) % 4 + 1);

    // 3.13
    int number;
    printf("Enter number (1-50) for 3.13: ");
    scanf("%d", &number);
    printf("Row: %d\n", (number - 1) / 5 + 1);
    printf("Column: %d\n\n", (number - 1) % 5 + 1);

    // 3.14
    int flat;
    printf("Enter flat number for 3.14: ");
    scanf("%d", &flat);
    int entrance = (flat - 1) / 54 + 1;
    int floor_in_entrance = ((flat - 1) % 54) / 6 + 1;
    int position_on_floor = ((flat - 1) % 6) + 1;
    printf("Entrance: %d\n", entrance);
    printf("Floor: %d\n", floor_in_entrance);
    printf("Position on floor: %d\n\n", position_on_floor);

    // 3.15
    int product_num;
    printf("Enter product number for 3.15 (variant 1): ");
    scanf("%d", &product_num);
    int tier1 = (product_num - 1) / 120 + 1;
    int section1 = ((product_num - 1) % 120) / 15 + 1;
    printf("Section: %d, Tier: %d\n", section1, tier1);

    printf("Enter product number for 3.15 (variant 2): ");
    scanf("%d", &product_num);
    int section2 = (product_num - 1) / 150 + 1;
    int tier2 = (product_num - 1) % 10 + 1;
    printf("Section: %d, Tier: %d\n\n", section2, tier2);

    // 3.16
    int two_digit;
    printf("Enter two-digit number for 3.16: ");
    scanf("%d", &two_digit);
    if (two_digit < 10 || two_digit > 99) {
        printf("Not a two-digit number!\n\n");
    } else {
        printf("Tens: %d\n", two_digit / 10);
        printf("Units: %d\n\n", two_digit % 10);
    }

    // 3.17
    printf("Enter two-digit number for 3.17: ");
    scanf("%d", &two_digit);
    if (two_digit < 10 || two_digit > 99) {
        printf("Not a two-digit number!\n\n");
    } else {
        printf("Sum of digits: %d\n\n", (two_digit / 10) + (two_digit % 10));
    }

    // 3.18
    printf("Enter two-digit number for 3.18: ");
    scanf("%d", &two_digit);
    if (two_digit < 10 || two_digit > 99) {
        printf("Not a two-digit number!\n\n");
    } else {
        printf("Reversed: %d\n\n", (two_digit % 10) * 10 + (two_digit / 10));
    }

    // 3.19
    int three_digit;
    printf("Enter three-digit number for 3.19: ");
    scanf("%d", &three_digit);
    if (three_digit < 100 || three_digit > 999) {
        printf("Not a three-digit number!\n\n");
    } else {
        printf("%d, %d, %d\n\n", three_digit / 100, (three_digit / 10) % 10, three_digit % 10);
    }

    // 3.20
    printf("Enter three-digit number for 3.20: ");
    scanf("%d", &three_digit);
    if (three_digit < 100 || three_digit > 999) {
        printf("Not a three-digit number!\n\n");
    } else {
        int a = three_digit / 100;
        int b = (three_digit / 10) % 10;
        int c = three_digit % 10;
        printf("Units: %d\n", c);
        printf("Tens: %d\n", three_digit / 10);
        printf("Sum: %d\n", a + b + c);
        printf("Product: %d\n\n", a * b * c);
    }

    // 3.21
    printf("Enter three-digit number for 3.21: ");
    scanf("%d", &three_digit);
    if (three_digit < 100 || three_digit > 999) {
        printf("Not a three-digit number!\n\n");
    } else {
        printf("Reversed: %d\n\n", (three_digit % 10) * 100 + ((three_digit / 10) % 10) * 10 + (three_digit / 100));
    }

    // 3.22
    printf("Enter three-digit number for 3.22: ");
    scanf("%d", &three_digit);
    if (three_digit < 100 || three_digit > 999) {
        printf("Not a three-digit number!\n\n");
    } else {
        int result = ((three_digit / 10) % 10) * 100 + (three_digit % 10) * 10 + (three_digit / 100);
        printf("First digit moved to end: %d\n\n", result);
    }

    // 3.23
    printf("Enter three-digit number for 3.23: ");
    scanf("%d", &three_digit);
    if (three_digit < 100 || three_digit > 999) {
        printf("Not a three-digit number!\n\n");
    } else {
        int result = (three_digit % 10) * 100 + (three_digit / 100) * 10 + ((three_digit / 10) % 10);
        printf("Last digit moved to front: %d\n\n", result);
    }

    // 3.24
    printf("Enter three-digit number for 3.24: ");
    scanf("%d", &three_digit);
    if (three_digit < 100 || three_digit > 999) {
        printf("Not a three-digit number!\n\n");
    } else {
        int result = ((three_digit / 10) % 10) * 100 + (three_digit / 100) * 10 + (three_digit % 10);
        printf("First two digits swapped: %d\n\n", result);
    }

    // 3.25
    printf("Enter three-digit number for 3.25: ");
    scanf("%d", &three_digit);
    if (three_digit < 100 || three_digit > 999) {
        printf("Not a three-digit number!\n\n");
    } else {
        int result = (three_digit / 100) * 100 + (three_digit % 10) * 10 + ((three_digit / 10) % 10);
        printf("Last two digits swapped: %d\n\n", result);
    }

    // 3.26
    printf("Enter three-digit number with distinct digits for 3.26: ");
    scanf("%d", &three_digit);
    if (three_digit < 100 || three_digit > 999) {
        printf("Not a three-digit number!\n\n");
    } else {
        int a = three_digit / 100;
        int b = (three_digit / 10) % 10;
        int c = three_digit % 10;
        if (a == b || a == c || b == c) {
            printf("Digits are not distinct!\n\n");
        } else {
            printf("%d\n", a*100 + c*10 + b);
            printf("%d\n", a*100 + b*10 + c);
            printf("%d\n", b*100 + a*10 + c);
            printf("%d\n", b*100 + c*10 + a);
            printf("%d\n", c*100 + a*10 + b);
            printf("Sixth permutation: %d\n\n", three_digit);
        }
    }

    // 3.27
    int num;
    printf("Enter 4 or 5 digit number for 3.27: ");
    scanf("%d", &num);
    if (num < 1000 || num > 99999) {
        printf("Invalid number!\n\n");
    } else {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        printf("Sum of digits: %d\n\n", sum);
    }

    // 3.28
    int four_digit;
    printf("Enter four-digit number for 3.28: ");
    scanf("%d", &four_digit);
    if (four_digit < 1000 || four_digit > 9999) {
        printf("Not a four-digit number!\n\n");
    } else {
        int a = four_digit / 1000;
        int b = (four_digit / 100) % 10;
        int c = (four_digit / 10) % 10;
        int d = four_digit % 10;
        printf("Reversed: %d\n", d*1000 + c*100 + b*10 + a);
        printf("Swap 1-2 with 3-4: %d\n", c*1000 + d*100 + a*10 + b);
        printf("Swap 2nd and 3rd: %d\n", a*1000 + c*100 + b*10 + d);
        printf("Swap first two with last two: %d\n\n", c*1000 + d*100 + a*10 + b);
    }

    // 3.29
    int num29;
    printf("Enter number (>9) for 3.29: ");
    scanf("%d", &num29);
    if (num29 < 10) {
        printf("Number must be >9\n\n");
    } else {
        printf("Units: %d\n", num29 % 10);
        printf("Tens: %d\n\n", num29 / 10);
    }

    // 3.30
    printf("Enter number (>99) for 3.30: ");
    scanf("%d", &num29);
    if (num29 < 100) {
        printf("Number must be >99\n\n");
    } else {
        printf("Tens: %d\n", (num29 / 10) % 10);
        printf("Hundreds: %d\n\n", num29 / 100);
    }

    // 3.31
    printf("Enter number (>999) for 3.31: ");
    scanf("%d", &num29);
    if (num29 < 1000) {
        printf("Number must be >999\n\n");
    } else {
        printf("Hundreds: %d\n", (num29 / 100) % 10);
        printf("Thousands: %d\n\n", num29 / 1000);
    }

    // 3.32
    int num32;
    printf("Enter three-digit number for 3.32: ");
    scanf("%d", &num32);
    if (num32 < 100 || num32 > 999) {
        printf("Not a three-digit number!\n\n");
    } else {
        int original = (num32 % 100) * 10 + num32 / 100;
        printf("Original number: %d\n\n", original);
    }

    // 3.33
    printf("Enter three-digit number for 3.33: ");
    scanf("%d", &num32);
    if (num32 < 100 || num32 > 999) {
        printf("Not a three-digit number!\n\n");
    } else {
        int result = (num32 % 10) * 100 + num32 / 10;
        printf("Result number: %d\n\n", result);
    }

    // 3.34 & 3.35
    int num34;
    printf("Enter three-digit number for 3.34: ");
    scanf("%d", &num34);
    if (num34 < 100 || num34 > 999) {
        printf("Not a three-digit number!\n\n");
    } else {
        int original = (num34 % 10) * 100 + num34 / 10;
        printf("Original number: %d\n\n", original);
    }

    // 3.36
    printf("Enter three-digit number (with non-zero middle digit) for 3.36: ");
    scanf("%d", &num34);
    if (num34 < 100 || num34 > 999 || (num34 / 10) % 10 == 0) {
        printf("Invalid number!\n\n");
    } else {
        int original = ((num34 / 10) % 10) * 100 + (num34 / 100) * 10 + (num34 % 10);
        printf("Original number: %d\n\n", original);
    }

    // 3.38
    printf("Enter three-digit number for 3.38: ");
    scanf("%d", &num34);
    if (num34 < 100 || num34 > 999) {
        printf("Not a three-digit number!\n\n");
    } else {
        int original = (num34 / 100) * 100 + (num34 % 10) * 10 + ((num34 / 10) % 10);
        printf("Original number: %d\n\n", original);
    }

    // 3.39 (same as 3.38)

    // 3.40
    printf("Enter three-digit number for 3.40: ");
    scanf("%d", &num34);
    if (num34 < 100 || num34 > 999) {
        printf("Not a three-digit number!\n\n");
    } else {
        int original = (num34 % 10) * 100 + ((num34 / 10) % 10) * 10 + (num34 / 100);
        printf("Original number: %d\n\n", original);
    }

    // 3.42
    int a42, b42;
    printf("Enter two-digit number a for 3.42: ");
    scanf("%d", &a42);
    printf("Enter digit b for 3.42: ");
    scanf("%d", &b42);
    int sum_units = (a42 % 10 + b42) % 10;
    int sum_tens = a42 / 10 + (a42 % 10 + b42) / 10;
    printf("Result: %d%d\n\n", sum_tens, sum_units);

    return 0;
}
