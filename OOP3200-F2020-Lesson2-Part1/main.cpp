/*
 * Author: Nicholas Shortt
 * StudentID: 100630003
 *
 * Date: September 31, 2021
 * Project: OOP3200-F2021-Lesson2-Part1
 * Description: Example code that was done by following along with the class demo done by prof Tom Tsiliopoulos
 */ 

#include "Person.h"
#include "Student.h"

int main()
{
    // Declare object of custom data type
    Student nick("Nick", 23, "100630003");

	nick.IsStudying();

    nick.SaysHello();
}
