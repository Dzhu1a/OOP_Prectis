#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

using namespace std;

class Product {
private:
    int productId;
    string name;
    string manufacturer;
    double price;
    int shelfLife; // Термін зберігання в днях
    int quantity;
    string storage;
    int caloriesPer100g;

public:
    // Constructor
    Product(int id, const string& pname, const string& pmanufacturer, double pprice, int pshelfLife, int pquantity, const string& pstorage, int pcaloriesPer100g);

    // Getters
    int getProductId() const;
    string getName() const;
    string getManufacturer() const;
    double getPrice() const;
    int getShelfLife() const;
    int getQuantity() const;
    string getStorage() const;
    int getCaloriesPer100g() const;

    // Setters
    void setProductId(int id);
    void setName(const string& pname);
    void setManufacturer(const string& pmanufacturer);
    void setPrice(double pprice);
    void setShelfLife(int pshelfLife);
    void setQuantity(int pquantity);
    void setStorage(const string& pstorage);
    void setCaloriesPer100g(int pcaloriesPer100g);
};

#endif // PRODUCT_H
