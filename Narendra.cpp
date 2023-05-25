#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

struct Item {
    string name;
    double price;
    double discount;
};

void displayItems(const vector<Item>& items) {
    cout << "Available Items:" << endl;

cout << setw(15) << left << "Item" << setw(10) << "Price" << setw(10) << "Discount (%)" << endl;
    cout << "--------------------------------------" << endl;
    for (const Item& item : items) {
        cout << setw(15) << left << item.name << setw(10) << item.price << setw(10) << item.discount << endl;
    }
    cout << "--------------------------------------" << endl;
}

double calculateTotalBill(const vector<Item>& items, const vector<int>& quantities) {
    double total = 0.0;
    for (size_t i = 0; i < items.size(); ++i) {
        total += (items[i].price * (1 - (items[i].discount / 100))) * quantities[i];
    }
    return total;
}

void generateReceipt(const vector<Item>& items, const vector<int>& quantities, double total) {
    cout << "Receipt" << endl;
    cout << "--------------------------------------" << endl;
    cout << setw(15) << left << "Item" << setw(10) << "Quantity" << setw(10) << "Price" << setw(10) << "Discount" << endl;
    cout << "--------------------------------------" << endl;
    for (size_t i = 0; i < items.size(); ++i) {
        if (quantities[i] > 0) {
            double discountedPrice = items[i].price * (1 - (items[i].discount / 100));
            cout << setw(15) << left << items[i].name << setw(10) << quantities[i] << setw(10) << discountedPrice << setw(10) << items[i].discount << endl;
        }
    }
    cout << "--------------------------------------" << endl;
    cout << "Total: " << total << endl;
    cout << "--------------------------------------" << endl;
}

int main() {
    vector<Item> items = {
        {"Apple", 10.0, 2.0},
        {"Banana", 5.0, 3.0},
        {"Milk", 3.5, 10.0},
    };

    displayItems(items);

    vector<int> quantities(items.size(), 0);
    char choice;
    do {
        string itemName;
        int quantity;
        cout << "Enter item name and quantity (e.g., Apple 2): ";
        cin >> itemName >> quantity;

        bool found = false;
        for (size_t i = 0; i < items.size(); ++i) {
            if (items[i].name == itemName) {
                quantities[i] += quantity;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Invalid item." << endl;
        }

        double totalBill = calculateTotalBill(items, quantities);
        cout << "Total Bill: " << totalBill << endl;

        cout << "Do you want to add/edit more items? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    double totalBill = calculateTotalBill(items, quantities);
    cout << "Final Total Bill: " << totalBill << endl;
    generateReceipt(items, quantities, totalBill);

    return 0;
}