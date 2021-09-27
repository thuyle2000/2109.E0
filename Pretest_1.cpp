#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


void Q_1();
void Q_2();

int main() {
	char op;
	while(1) {
		printf("\n*************************************************************** \n");
		printf("*                                                             * \n");
		printf("*   SELECTING APPROPRIATE ACTION:                             * \n");
		printf("*      1. Question 1                                          * \n");
		printf("*      2. Question 2                                          * \n");
		printf("*      3. Quit Program                                        * \n");
		printf("*                                                             * \n");
		printf("*************************************************************** \n");
		printf("Enter your choice:  ");

		op = getche();

		switch(op) {
			case '1':
				Q_1();
				break;
			case '2':
				Q_2();
				break;
			case '3':
				return 0;
		}

	}
}


void Q_1() {
	printf(" QUESTION 1 \n");
	fflush(stdin);

	int max = 100;
	int a[max];
	int index= 0;
	char c;

	while(1) {

		// 1. Ask the user to enter a positive number
		printf (">>Please enter a positive number (>0): ");
		scanf ("%d", &a[index]);

		index++;
		if(index==max) {
			printf("out of memory !");
			break;
		}

		// 2. After entering each number the program should ask the user
		// whether he/she wants to enter more number (press y/n).

		fflush(stdin);

		printf(" Continue y/n:  ");
		scanf("%c",&c);

		if(c=='n' || c=='N') {
			break;
		}

	}


	int soLonNhat = a[0];
	printf("\n >> Day so duoc nhap: ");
	for(int i=0; i<index; i++) {
		printf("%d ", a[i]);
		soLonNhat = (soLonNhat>a[i])? soLonNhat : a[i];
	}
	printf("\n >> So lon nhat la: %d \n", soLonNhat);


}




void Q_2() {
	printf(" QUESTION 2 \n");

	/*
	viet chuong trinh thong tin chi tiet cua sinh vien
	1 Name
	2 Enrollment_No
	3 Science_Mark
	4 Math_Mark
	5 English_Mark
	*/

//Buoc 1. Dinh nghia kieu cau truc thong tin diem cua sinh vien
	struct detailStudent {
		char name[31];
		char enrollment_No[3];
		float science_Mark;
		float math_Mark;
		float english_Mark;
	};

// Buoc 2: nhap so luong chi tiet sinh vien
	int n = 0;
	printf ("****Student Management Program****\n\n");
	do {
		printf ("How many students do you want to manage: ");
		scanf ("%d", &n);
		if (n < 1 || n > 99) {
			printf ("The number of student must be between 1 and 100. Press any key to continue...\n");
			getch();
			printf ("\n");
		}
	} while (n < 1 || n > 99);


// Buoc 3: khai bao mang [ds] co the chua n-san pham
	struct detailStudent list[n];


	fflush(stdin);
	
// Buoc 4: dung vong lap de nhap du lieu chi tiet cho diem sinh vien
	printf ("\nPlease enter students data: \n");
	for(int i=0; i<n; i++) {
		//nhap du lieu cho sinh vien duoc luu tai vi tri index i cua mang
		printf("  >> Student No. %d : \n", i+1);
		printf(" Name: ");
		gets(list[i].name);
		printf(" Enrollment_No: ");
		gets(list[i].enrollment_No);
		printf(" Science Mark: ");
		scanf("%f",& list[i].science_Mark);
		fflush(stdin);
		printf(" Math Mark: ");
		scanf("%f", &list[i].math_Mark);
		fflush(stdin);
		printf(" English Mark: ");
		scanf("%f", &list[i].english_Mark);
		fflush(stdin);
	}

// Buoc 5: in danh sach sinh vien
	printf("\n\n * * * The details of the students * * * \n");
	for (int i = 0; i < n; i++) {
		printf ("\nStudent no: %d\n", i+1);
		printf ("Name: %s  \n", list[i].name);
		printf ("Enroll No: %s  \n", list[i].enrollment_No);
		printf ("Science Mark: %.2f  \n", list[i].science_Mark);
		printf ("Math Mark: %.2f  \n", list[i].math_Mark);
		printf ("English Mark: %.2f  \n", list[i].english_Mark);
		printf ("Average Mark: %.2f  \n", (list[i].science_Mark+list[i].math_Mark+list[i].english_Mark) /3);
	}

}




