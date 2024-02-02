// main.cpp

#include "Item.hpp"
#include <iostream>

int main() {
    // Membuat beberapa objek Item
    Item item1;                 // Menggunakan konstruktor default
    Item item2(10, 50);         // Menggunakan konstruktor dengan parameter

    // Menampilkan informasi awal
    std::cout << "Item 1 - Serial Number: " << item1.getSerialNum() << ", Price: " << item1.getPrice() << std::endl;
    std::cout << "Item 2 - Serial Number: " << item2.getSerialNum() << ", Price: " << item2.getPrice() << std::endl;

    // Menambahkan stok dan menetapkan harga baru
    item1.addStock(5);
    item2.setPrice(60);

    // Menampilkan informasi setelah perubahan
    std::cout << "Item 1 - New Stock: " << item1.getSold() << ", New Price: " << item1.getPrice() << std::endl;
    std::cout << "Item 2 - New Stock: " << item2.getSold() << ", New Price: " << item2.getPrice() << std::endl;

    // Menjual beberapa item
    item1.sell(3);
    item2.sell(8);

    // Menampilkan informasi setelah penjualan
    std::cout << "Item 1 - Sold: " << item1.getSold() << ", Remaining Stock: " << (item1.getSerialNum() - item1.getSold()) << std::endl;
    std::cout << "Item 2 - Sold: " << item2.getSold() << ", Remaining Stock: " << (item2.getSerialNum() - item2.getSold()) << std::endl;

    // Menampilkan total revenue dan total items
    std::cout << "Total Revenue: " << Item::totalRevenue << std::endl;
    std::cout << "Total Items: " << Item::totalItems << std::endl;

    return 0;
}