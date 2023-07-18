#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    // represent (+, -, *, /) operations
    enum TypeTag {
        ADD,
        SUB,
        MUL
    } type;
    int value;
} Node;

// Allocate memory for a new node
// set up node type
// return created node
Node* makeFunc(enum TypeTag type) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->type = type;
    return node;
}

// allocate memory for fibonacci sequence
//  set first & second fibonacci number
// calculate sequence up to desired position
// store number at desired position and fee allocated memory for sequence
int fibonacci(int n) {
    int* fib = (int*)malloc((n + 2) * sizeof(int));
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    int result = fib[n];
    free(fib);
    return result;
}

void calc(Node* node) {
    switch (node->type) {
        case ADD:
            printf("add:%d\n", node->value);
            break;
        case SUB:
            printf("sub:%d\n", node->value);
            break;
        case MUL:
            printf("mul:%d\n", node->value);
            break;
        default:
            break;
    }
}

// create nodes for (+, -, *, /) operations
// setvalues for the nodes
// print values associated with respective operations
//  free the memory allocated for the nodes
int main() {
    Node* add = makeFunc(ADD);
    add->value = 10 + 6;
    Node* mul = makeFunc(MUL);
    mul->value = 5 * 4;
    Node* sub = makeFunc(SUB);
    sub->value = mul->value - add->value;
    Node* fibo = makeFunc(SUB);
    fibo->value = fibonacci(sub->value);

    calc(add);
    calc(mul);
    calc(sub);
    calc(fibo);

    free(add);
    free(mul);
    free(sub);
    free(fibo);

    return 0;
}
