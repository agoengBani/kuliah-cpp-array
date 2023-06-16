#include <iostream>
#include <vector>
#include <iomanip> // untuk library  setw() 

struct Product {
    int index;
    std::string name;
    double price;
};

void displayData(const std::vector<Product>& products) {
    std::cout << std::setw(6) << "INDEX" << std::setw(15) << "Nama" << std::setw(10) << "Harga" << "\n";
    for (const auto& product : products) {
        std::cout << std::setw(6) << product.index << std::setw(15) << product.name << std::setw(10) << product.price << "\n";
    }
}

void addData(std::vector<Product>& products) {
    Product newProduct;
    std::cout << "Masukkan Index: ";
    std::cin >> newProduct.index;
    std::cout << "Masukkan Nama Produk : ";
    std::cin.ignore();
    std::getline(std::cin, newProduct.name);
    std::cout << "Masukkan Harga Produk: ";
    std::cin >> newProduct.price;

    products.push_back(newProduct);
    std::cout << "Berhasil Menambahkan!\n";
}

void editData(std::vector<Product>& products) {
    int productIndex;
    std::cout << "Masukkan Index Yang akan Diedit: ";
    std::cin >> productIndex;

    for (auto& product : products) {
        if (product.index == productIndex) {
            std::cout << "Masukkan Nama Baru: ";
            std::cin.ignore();
            std::getline(std::cin, product.name);
            std::cout << "Masukkan Harga Baru: ";
            std::cin >> product.price;
            std::cout << "Berhasil di Edit!\n";
            return;
        }
    }

    std::cout << "INVALID!\n";
}

void deleteData(std::vector<Product>& products) {
    int productIndex;
    std::cout << "Masukkan Index Yang Akan di Hapus: ";
    std::cin >> productIndex;

    for (auto it = products.begin(); it != products.end(); ++it) {
        if (it->index == productIndex) {
            products.erase(it);
            std::cout << "Berhasil Dihapus!\n";
            return;
        }
    }

    std::cout << "INVALID!\n";
}

int main() {
    std::vector<Product> products;

    while (true) {
        std::cout << "\n==============  MENU  ================\n";
        std::cout << "1. Tambah Produk\n";
        std::cout << "2. Edit Produk\n";
        std::cout << "3. Hapus Produk\n";
        std::cout << "4. Tampilkan Data Produk\n";
        std::cout << "5. Keluar\n";
        std::cout << "Masukkan Pilihan: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                addData(products);
                break;
            case 2:
                editData(products);
                break;
            case 3:
                deleteData(products);
                break;
            case 4:
                displayData(products);
                break;
            case 5:
                std::cout << "BYe BYE NT...\n";
                return 0;
            default:
                std::cout << "INVALID.\n";
                break;
        }
    }

    return 0;
}
