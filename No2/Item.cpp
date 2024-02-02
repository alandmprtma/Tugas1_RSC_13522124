// Item.cpp

#include "Item.hpp"

int Item::totalRevenue = 0;
int Item::totalItems = 0;

Item::Item() : stock(0), price(0), sold(0), serialNum(totalItems + 1) {
    totalItems++;
}

Item::Item(int stock, int price) : stock(stock), price(price), sold(0), serialNum(totalItems + 1) {
    totalItems++;
}

Item::~Item() {
    totalItems--;
}

int Item::getSerialNum() const {
    return serialNum;
}

int Item::getSold() const {
    return sold;
}

int Item::getPrice() const {
    return price;
}

void Item::addStock(int addedStock) {
    if (addedStock > 0) {
        stock += addedStock;
    }
}

void Item::sell(int soldStock) {
    if (soldStock > 0) {
        // Jika stok cukup untuk dijual
        if (soldStock <= stock) {
            sold += soldStock;
            stock -= soldStock;
            totalRevenue += (soldStock * price);
        } else { // Jika stok tidak mencukupi
            sold += stock;
            totalRevenue += (stock * price);
            stock = 0;
        }
    }
}

void Item::setPrice(int newPrice) {
    if (newPrice >= 0) {
        price = newPrice;
    }
}