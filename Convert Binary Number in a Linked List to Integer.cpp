#include <iostream>

// Définition de la structure ListNode
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Classe Solution avec la méthode getDecimalValue
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int base = 1;
        int value = 0;
        ListNode* cursor = head;
        
        // Première boucle pour calculer la base maximale
        while (cursor != NULL) {
            base *= 2;
            cursor = cursor->next;
        }
        
        cursor = head;
        // Deuxième boucle pour calculer la valeur décimale
        while (cursor != NULL) {
            base /= 2;
            if (cursor->val) value += base;
            cursor = cursor->next;
        }
        
        return value;    
    }
};

// Fonction principale (main)
int main() {
    // Création de la liste chaînée représentant un nombre binaire
    ListNode* head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(1); // La liste représente le nombre binaire "101" (5 en décimal)

    // Création d'une instance de Solution et appel de la méthode
    Solution solution;
    int decimalValue = solution.getDecimalValue(head);
    
    // Affichage du résultat
    std::cout << "La valeur décimale du nombre binaire représenté par la liste est : " << decimalValue << std::endl;

    // Libération de la mémoire (optionnel mais recommandé)
    ListNode* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
