# Demos
Certainly! This code is a simple console-based program that allows users to select items from a list, specify the quantity of each item, and calculate the total bill with discounts. Here's a brief description of how the code works:

1. The code starts by defining a `struct` named `Item`, which represents a product or item. It has three members: `name`, `price`, and `discount`.

2. There are three functions defined:
   - `displayItems`: It takes a vector of `Item` objects as input and displays the available items with their prices and discounts.
   - `calculateTotalBill`: It calculates the total bill based on the selected items, their quantities, and their discounts.
   - `generateReceipt`: It generates a receipt showing the selected items, their quantities, prices, and discounts, along with the total bill.

3. In the `main` function, a vector of `Item` objects named `items` is created, representing the available items for purchase. Each item has a name, price, and discount.

4. The `displayItems` function is called to show the available items to the user.

5. A vector of integers named `quantities` is created to store the quantities of each item selected by the user. Initially, all quantities are set to 0.

6. The code enters a `do-while` loop that allows the user to select items and specify their quantities. The user is prompted to enter the item name and quantity.

7. The code searches for the entered item name in the `items` vector and updates the corresponding quantity in the `quantities` vector if the item is found.

8. If the entered item name is not found, the code displays an error message.

9. The total bill is calculated using the `calculateTotalBill` function and displayed to the user.

10. The user is asked if they want to add/edit more items. If the user enters 'Y' or 'y', the loop continues; otherwise, it exits.

11. After the loop ends, the final total bill is calculated again and displayed.

12. The `generateReceipt` function is called to generate a receipt based on the selected items, quantities, prices, and discounts.

13. The program ends by returning 0, indicating successful execution.

Overall, this code provides a simple interactive interface for users to select items, specify quantities, and calculate the total bill with discounts. It demonstrates the use of data structures, loops, and functions in C++.
