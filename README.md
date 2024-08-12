# Hospital Management System

## Overview

The **Hospital Management System** is a C++ application that utilizes advanced Object-Oriented Programming (OOP) principles to efficiently manage hospital records. The system incorporates a class hierarchy to handle doctors, nurses, and patients, with features including dynamic memory management, sorting, searching, and a recommendation system for doctors based on specialization.

## Features

- **Object-Oriented Design**: Uses a base class (`HospitalMember`) and derived classes (`Doctor`, `Nurse`, `Patient`) for structured representation of hospital members.
- **Polymorphism**: Allows for seamless handling of different member types through a common interface.
- **Dynamic Memory Management**: Manages hospital member objects with dynamic arrays and manual resizing.
- **Sorting & Searching**: Implements sorting algorithms (e.g., bubble sort) for members by name or age and provides search functionality by name or gender.
- **Recommendation System**: Suggests doctors based on their specialization and can be extended to recommend nurses based on their experience or shift.

## Classes

- **HospitalMember**: Base class with attributes such as `memberID`, `name`, `age`, and `gender`. Includes a virtual method `displayDetails()` for displaying member details.
- **Doctor**: Derived class with additional attributes `specialization` and `availability`. Overrides `displayDetails()`.
- **Nurse**: Derived class with attributes `experienceYears` and `shift`. Overrides `displayDetails()`.
- **Patient**: Derived class with attributes `disease` and `admissionDate`. Overrides `displayDetails()`.
- **Hospital**: Manages a dynamic array of `HospitalMember` pointers, with methods for adding, removing, and displaying members, and sorting them.

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/hospital-management-system.git
