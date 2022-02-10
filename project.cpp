// project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "kdiminsional.h"
using namespace std;

int main()
{
	/*kdiminsional *kd=new kdiminsional();
    int points[][k] = { {3, 6}, {17, 15}, {13, 15}, {6, 12},
                       {9, 1}, {2, 7}, {10, 19} };
    int n = sizeof(points) / sizeof(points[0]);
    for (int i = 0; i < n; i++)
    {
         kd->insert(points[i]);
    }
    int point1[] = { 3, 6 };
    (kd->search(point1)) ? cout << "Found\n" : cout << "Not Found\n";
    int point2[] = { 20, 21 };
    (kd->search(point2)) ? cout << "Found\n" : cout << "Not Found\n";
    int point3[] = { 6, 12 };
     kd->deleteNode(points[0]);
     (kd->search(point1)) ? cout << "Found\n" : cout << "Not Found\n";
    cout << "Root after deletion of (3, 6)\n";
    cout << kd->root->point[0] << ", " << kd->root->point[1] << endl;
    (kd->search(point3)) ? cout << "Found\n" : cout << "Not Found\n";
    return 0;*/
    /*kdiminsional *kd = new kdiminsional();
    int c, i;
    while (1)
    {
        cout << "  " << endl;
        cout << "---------------------------------------------" << endl;
        cout << "          K-Dimentional Tree                 " << endl;
        cout << "---------------------------------------------" << endl;
        cout << "1. Insert The written points into the tree" << endl;
        cout << "2. Search elements in Tree" << endl;
        cout << "3. Delete a value from the Tree" << endl;
        cout << "4. To Exit." << endl;
        cout << "Enter Your Choice : ";
        cin >> c;
        int points[][k] = { {3, 6}, {17, 15}, {13, 15}, {6, 12}, {9, 1}, {2, 7}, {10, 19} };

        int n = sizeof(points) / sizeof(points[0]);

        switch (c)
        {
        case 1:

            for (int i = 0; i < n; i++)
            {
                kd->insert(points[i]);
            }
            cout << n << " Elements inserted In Tree successfully! " << endl;
            break;
        case 2:
            cout << "Enter Number you want to search in Tree " << endl;
            int point1[k];
            for (int i = 0; i < k; i++)
            {
                 cin >> point1[i];
            }
            (kd->search(point1))? cout << "Found\n" : cout << "Not Found\n";
            break;
        case 3:
            cout << "Enter Element to delete it: ";
            int point2[k];
            for (int i = 0; i < k; i++)
            {
                cin >> point2[i];
            }
            kd->deleteNode(point2);
            cout << "Element deleted successfully! " << endl;

            break;
        case 4:
            exit(1);
            break;
        default:
            cout << "       !! Wrong Choice !!" << endl;
        }
    }
    return 0; */

        kdiminsional * kd = new kdiminsional();
    int c, i;
    while (1)
    {
        cout << "  " << endl;
        cout << "---------------------------------------------" << endl;
        cout << "          K-Dimentional Tree                 " << endl;
        cout << "---------------------------------------------" << endl;
        cout << "1. Insert The written points into the tree" << endl;
        cout << "2. Search elements in Tree" << endl;
        cout << "3. Delete a value from the Tree" << endl;
        cout << "4. To Exit." << endl;
        cout << "Enter Your Choice : ";
        cin >> c;

        int points[][k] = { 0 };




        int n = sizeof(points) / sizeof(points[0]);
        switch (c)
        {
        case 1:

            for (int i = 0; i < n; i++)
            {

                for (int j = 0; j < k; j++) {


                    cin >> points[i][j];
                    kd->insert(points[i]);
                }
                cout << endl;



            }
            cout << "Elements inserted In Tree successfully! " << endl;
            break;
        case 2:
            cout << "Enter Number you want to search in Tree " << endl;
            int point1[k];
            for (int i = 0; i < k; i++)
            {
                cin >> point1[i];
            }
            (kd->search(point1)) ? cout << "Found\n" : cout << "Not Found\n";
            break;
        case 3:
            cout << "Enter Element to delete it: ";
            int point2[k];
            for (int i = 0; i < k; i++)
            {
                cin >> point2[i];
            }
            kd->deleteNode(point2);
            cout << "Element deleted successfully! " << endl;

            break;
        case 4:
            exit(1);
            break;
        default:
            cout << "       !! Wrong Choice !!" << endl;
        }
    }
    return 0;
}