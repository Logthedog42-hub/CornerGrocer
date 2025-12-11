# CornerGrocer

Project Summary and Purpose
The Corner Grocer project was designed to create an item-tracking system that reads daily purchase data from a text file and analyzes how frequently individual grocery items were purchased. The purpose of the program is to help the store make informed decisions about product placement by identifying high-demand items. The program allows users to search for individual item frequencies, display a full frequency list, generate a visual histogram, and automatically create a backup data file for record keeping.

What I Did Particularly Well
One of my strongest contributions in this project was the overall organization and structure of the program. I successfully implemented a class-based, object-oriented design using a GroceryTracker class that cleanly encapsulates all frequency tracking logic. I also implemented all required menu options correctly and ensured that the backup data file (frequency.dat) was created automatically at program startup. Additionally, my use of clear output formatting and menu-driven interaction made the program easy to use and understand.

Areas for Future Improvement
If I were to enhance this program further, I would strengthen user input validation to handle incorrect data types more gracefully, such as non-numeric menu selections. I would also improve error handling for file access to ensure the program responds properly if the input file is missing or unreadable. These improvements would make the program more secure, more efficient, and more robust for real-world use.

Most Challenging Aspects and How I Overcame Them
The most challenging part of this project was correctly managing file input and output using C++, particularly ensuring that item data was read correctly and stored accurately using a map. I overcame this challenge through careful testing and by referencing zyBooks sections on file handling and maps. I also relied on structured debugging and step-by-step validation to ensure the frequency tracking logic worked correctly.

Transferable Skills Gained
This project strengthened several transferable skills, including file handling, object-oriented programming, data structure implementation using maps, and menu-based program design. These skills will be extremely useful in future coursework, especially in projects requiring data processing, file persistence, and structured user interaction.

Maintainability, Readability, and Adaptability
To ensure maintainability and readability, I followed consistent naming conventions, separated functionality into header and implementation files, and added in-line comments throughout the code. The use of a dedicated class allows the program to be easily adapted for additional features or different datasets in the future. This modular design ensures the program can evolve without requiring a complete rewrite.
