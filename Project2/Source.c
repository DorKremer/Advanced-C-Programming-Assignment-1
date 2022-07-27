//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////int gigaNoder(int**,int);
////unsigned long student_id();
//void scanPoint(point* point);
//void scanPolygon(polygon* polygon);
////double distance(point*, point*);
////void calculatePolygonScope(polygon*);
////void freeMemory(polygon*);
//
//typedef struct point
//{
//	int x, y;
//}point;
//
//typedef struct polygon
//{
//	int n;
//	point* points;
//	double scope;
//}polygon;
//void main() {
//	//int nums2[15] = {32, 64, 66, 69, 72 ,78 ,81, 87, 94, 95, 1,2,4 ,8,16};
//	//int* nums1 = (int*)malloc(15 * sizeof(int));
//	//if (nums1) {
//	//for (int i = 0; i < 15; i++)
//	//	nums1[i] = nums2[i];
//	//for (int i = 0; i < 15; i++)
//	//	printf("%d, ", *(nums1 + i));
//	//}
//	//printf("\n\n");
//	//printf("%d", gigaNoder(&nums1, 15));
//	//for (int i = 0; i < 15; i++)
//	//	printf("%d, ", *(nums1 + i));
//	//free(nums1);
//	point* p;
//	scanPoint(p);
//	printf("(%d,%d)", p->x, p->y);
//
//
//}
//
//void scanPolygon(polygon* poly) {
//	printf("Enter Amount Of Points: ");
//	scanf("%d", &poly->n);
//	poly->points = (point*)malloc(poly->n * sizeof(point));
//	for (int i = 0; i < poly->n; i++) {
//		scanPoint(&poly->points[i]);
//	}
//
//}
//
//
//void scanPoint(point* p) {
//	printf("Enter Value Of X: ");
//	scanf("%d", &p->x);
//	printf("\nEnter Value Of Y: ");
//	scanf("%d", &p->y);
//}
//
////int gigaNoder(int** nums,int size) {
////	int min = (*nums)[0], low = 0, high = size - 2, mid = -1;
////	while (low < high) {
////		mid = (low + high) / 2;
////		if ((*nums)[mid]>(*nums)[mid+1]) {
////			mid=mid+1;
////		}
////		else if ((*nums)[mid] < min) {
////			high = mid-1;
////		}
////		else if ((*nums)[mid] > min) {
////			low = mid+1;
////		}
////	}
////	mid=mid+2;
////	*nums =(int*)realloc(*nums, (size+mid)*sizeof(int));
////	if(*nums)
////		memcpy(*nums, (*nums)[size], mid * sizeof(int));
////	return mid;
////}