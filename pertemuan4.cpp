#include <iostream>
#include <vector>
#include <limits> 

class ArrayProgram {
private:
    std::vector<int> data;

public:
    void input_data() {
        std::cout << "Masukkan Data (comma-Terpisah): ";
        std::string input;
        std::getline(std::cin, input);

        std::string delimiter = ",";
        size_t pos = 0;
        std::string token;
        while ((pos = input.find(delimiter)) != std::string::npos) {
            token = input.substr(0, pos);
            data.push_back(std::stoi(token));
            input.erase(0, pos + delimiter.length());
        }
        data.push_back(std::stoi(input));
    }

    void add_data(int new_data) {
        data.push_back(new_data);
    }

    void delete_data(int index) {
        if (index >= 0 && index < data.size()) {
            data.erase(data.begin() + index);
            std::cout << "Data deleted successfully." << std::endl;
        } else {
            std::cout << "Invalid index!" << std::endl;
        }
    }

    void edit_data(int index, int new_data) {
        if (index >= 0 && index < data.size()) {
            data[index] = new_data;
            std::cout << "Data edited successfully." << std::endl;
        } else {
            std::cout << "Invalid index!" << std::endl;
        }
    }

    void show_data() {
        std::cout << "Data in the array:" << std::endl;

        std::cout << "+--------+------+" << std::endl;
        std::cout << "| Index  | Data |" << std::endl;
        std::cout << "+--------+------+" << std::endl;

        for (int index = 0; index < data.size(); ++index) {
            std::cout << "| " << index << "\t| " << data[index] << "\t|" << std::endl;
        }

        std::cout << "+--------+------+" << std::endl;
    }
};

int main() {
    ArrayProgram array_program;
    array_program.input_data();

    while (true) {
        std::cout << "\n1. Tambahkan Data data" << std::endl;
        std::cout << "2. Hapus data" << std::endl;
        std::cout << "3. Edit data" << std::endl;
        std::cout << "4. PErlihatkan Data" << std::endl;
        std::cout << "5. Keluar" << std::endl;

        std::cout << "PIlihan : ";
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            int new_data;
            std::cout << "Masukkan Data Baru: ";
            std::cin >> new_data;
            array_program.add_data(new_data);
        } else if (choice == 2) {
            int index;
            std::cout << "Masukkan Index yang Akan Dihapus: ";
            std::cin >> index;
            array_program.delete_data(index);
        } else if (choice == 3) {
            int index;
            std::cout << "Masukkan Index Yang Akan diedit: ";
            std::cin >> index;

            
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            int new_data;
            std::cout << "Masukkan Data Baru: ";
            std::cin >> new_data;
            array_program.edit_data(index, new_data);
        } else if (choice == 4) {
            array_program.show_data();
        } else if (choice == 5) {
            break; 
        } else {
            std::cout << "Pilihan Salah." << std::endl;
        }
    }

    return 0;
}
