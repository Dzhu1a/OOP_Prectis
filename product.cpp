#include "Product.h"

// Constructor implementation
Product::Product(int id, const std::string& pname, const std::string& pmanufacturer, double pprice, int pshelfLife, int pquantity, const std::string& pstorage, int pcaloriesPer100g)
    : productId(id), name(pname), manufacturer(pmanufacturer), price(pprice), shelfLife(pshelfLife), quantity(pquantity), storage(pstorage), caloriesPer100g(pcaloriesPer100g) {}

// Getter implementations
int Product::getProductId() const {
    return productId;
}

std::string Product::getName() const {
    return name;
}

std::string Product::getManufacturer() const {
    return manufacturer;
}

double Product::getPrice() const {
    return price;
}

int Product::getShelfLife() const {
    return shelfLife;
}

int Product::getQuantity() const {
    return quantity;
}

std::string Product::getStorage() const {
    return storage;
}

int Product::getCaloriesPer100g() const {
    return caloriesPer100g;
}

// Setter implementations
void Product::setProductId(int id) {
    productId = id;
}

void Product::setName(const std::string& pname) {
    name = pname;
}

void Product::setManufacturer(const std::string& pmanufacturer) {
    manufacturer = pmanufacturer;
}

void Product::setPrice(double pprice) {
    price = pprice;
}

void Product::setShelfLife(int pshelfLife) {
    shelfLife = pshelfLife;
}

void Product::setQuantity(int pquantity) {
    quantity = pquantity;
}

void Product::setStorage(const std::string& pstorage) {
    storage = pstorage;
}

void Product::setCaloriesPer100g(int pcaloriesPer100g) {
    caloriesPer100g = pcaloriesPer100g;
}
