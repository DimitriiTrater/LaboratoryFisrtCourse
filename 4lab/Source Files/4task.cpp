// DimitriiTrater
// Created by 1 on 22.10.2022
// 
#include <iostream>
#include <random>
#include <chrono>
#include <SFML/Graphics.hpp>


using namespace std;


int counter(int number, int array[], int size) {
    int num_count = 0;
    for (int i = 0; i < size; i++) {
        if (number == array[i]) {
            num_count++;
        }
    }
    return num_count;
}

string charFarm(int num) {
    switch(num) {
        case 0:
        return "0";
        case 1:
        return "1";
        case 2:
        return "2";
        case 3:
        return "3";
        case 4:
        return "4";
        case 5:
        return "5";
        case 6:
        return "6";
        case 7:
        return "7";
        case 8:
        return "8";
        case 9:
        return "9";
        case 10:
        return "10";
        case 11:
        return "11";
        case 12:
        return "12";
        case 13:
        return "13";
        case 14:
        return "14";
        case 15:
        return "15";
        case 16:
        return "16";
        case 17:
        return "17";
        case 18:
        return "18";
        case 19:
        return "19";
        case 20:
        return "20";
    } return " ";
}


int drawArray(int array[], int size) {
    sf::Text text;
    sf::Font font;
    sf::CircleShape shape(5.f);
    font.loadFromFile("C:\\Users\\1\\CLionProjects\\untitled\\4lab\\Source Files\\sansation.ttf");
    sf::RenderWindow window(sf::VideoMode(1800, 720), "4 task");
    
    shape.setFillColor(sf::Color::Red);

    text.setFont(font);
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            window.clear();
            float y_letter = 5;
            float x_letter = 15;
            float x_circle;
            float y_circle = 10;
            for (int i = 0; i <= 20; i++) {
                x_circle = 45;
                text.setString(charFarm(i));
                text.setPosition(x_letter, y_letter);
                window.draw(text);
                int b = counter(i, array, size);
                for (int a = 0; a < b; a++) {
                        shape.setPosition(x_circle, y_circle);
                        window.draw(shape);
                        x_circle += 20;
                }
                y_letter += 30; // new string its like \n
                y_circle += 30.2;
            }
            
            window.display();
        }
    }
    return 0;
}


void bubleSort(int array[], int size) {
    while (size--) {
        bool swapped = false;
        for(int i = 0; i < size; i++) {
			if(array[i] > array[i + 1]) {
				swap(array[i], array[i + 1]);
				swapped = true;
			}
		}
		
        if(swapped == false){
			break;
        }
    }

}




int printArray(int array[], int size) {
    for (int i = 0; i <= 20; i++) {
        cout << i << " ";
        int b = counter(i, array, size);
        for (int a = 0; a < b; a++) {
            cout << "-";
        }cout << endl;
    }
    return 0;
}


int generalFunctionOfTaskFourLabFour() {
    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    default_random_engine eng(seed);

    cout << "Enter the size array" << endl;
    int size = 0;
    cin >> size;
    
    int* array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = eng() % 21;
    }
    
    bubleSort(array, size);
    
    printArray(array, size);

    drawArray(array, size);
    
    delete[] array;
    
    return 0;
}