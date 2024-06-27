#include <iostream>
#include <string>

using namespace std;

// Item struct
struct Item {
  int id;
  string name;
  double price;
};

int main() {
  int choice;

  // Sample items
  Item item1 = {1, "Pizza", 10.99};
  Item item2 = {2, "Burger", 8.50};
  Item item3 = {3, "Salad", 6.25};

  while (true) {
    cout << "\nRestaurant Management System (Single Order)" << endl;
    cout << "1. Create Order" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1: {
        // Create Order
        int orderId = 1; // Assuming a single order for simplicity
        double total = 0.0;
        string orderDetails = "Order ID: " + to_string(orderId) + "\nItems:\n";

        cout << "Menu:" << endl;
        cout << "1. " << item1.name << " ($" << item1.price << ")" << endl;
        cout << "2. " << item2.name << " ($" << item2.price << ")" << endl;
        cout << "3. " << item3.name << " ($" << item3.price << ")" << endl;

        int itemChoice;
        do {
          cout << "Enter item number (0 to finish): ";
          cin >> itemChoice;

          if (itemChoice > 0 && itemChoice <= 3) {
            switch (itemChoice) {
              case 1:
                total += item1.price;
                orderDetails += "- " + item1.name + " ($" + to_string(item1.price) + ")\n";
                break;
              case 2:
                total += item2.price;
                orderDetails += "- " + item2.name + " ($" + to_string(item2.price) + ")\n";
                break;
              case 3:
                total += item3.price;
                orderDetails += "- " + item3.name + " ($" + to_string(item3.price) + ")\n";
                break;
            }
          } else if (itemChoice != 0) {
            cout << "Invalid choice. Please try again." << endl;
          }
        } while (itemChoice != 0);

        orderDetails += "Total: $" + to_string(total) + "\n";
        cout << orderDetails << endl;

        // Add logic for order confirmation, payment, etc. (not included in this simplified version)
        break;
      }
      case 2: {
        cout << "Exiting..." << endl;
        return 0;
      }
      default:
        cout << "Invalid choice. Please try again." << endl;
    }
  }

  return 0;
}
