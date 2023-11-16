#include <iostream>
#include "product.h"

using namespace std;

int main() {
    // Створення об'єкту класу Product
    Product product(1, "Product Name", "Manufacturer", 10.99, 30, 100, "Warehouse A", 250);

    // Отримання та виведення даних про продукт
    cout << "Product ID: " << product.getProductId() << endl;
    cout << "Product Name: " << product.getName() << endl;
    cout << "Manufacturer: " << product.getManufacturer() << endl;
    cout << "Price: $" << product.getPrice() << endl;
    cout << "Shelf Life: " << product.getShelfLife() << " days" << endl;
    cout << "Quantity: " << product.getQuantity() << endl;
    cout << "Storage: " << product.getStorage() << endl;
    cout << "Calories per 100g: " << product.getCaloriesPer100g() << endl;

    // Зміна даних про продукт
    product.setPrice(12.99);
    product.setQuantity(80);

    // Виведення змінених даних про продукт
    cout << "\nUpdated Product Details:\n";
    cout << "Price: $" << product.getPrice() << endl;
    cout << "Quantity: " << product.getQuantity() << endl;

    return 0;
}
