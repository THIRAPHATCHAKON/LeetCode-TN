typedef struct
{
    char *collection;
    int capacity;
    int size;
} Stack;

Stack *create_stack(int capacity);
void destroy_stack(Stack *stack);
bool is_full(Stack *stack);
bool is_empty(Stack *stack);
bool pop(Stack *stack, char *item);
bool push(Stack *stack, char item);

bool isValid(char* s) {
    if(s == NULL) return false;
    Stack *stack = create_stack(strlen(s));
    if(stack == NULL) return false;
    char value = '\0';
    while(*s != '\0'){
        if((*s == '[') || (*s == '(') || (*s == '{')){
            if(!push(stack, *s)){
                destroy_stack(stack);
                return false;
            }
        }
        else if((*s == ']') || (*s == ')') || (*s == '}')){
            if(!pop(stack, &value)){
                destroy_stack(stack);
                return false;
            }
            if((*s == ']') && (value == '[')){}
            else if((*s == ')') && (value == '(')){}
            else if((*s == '}') && (value == '{')){}
            else{
                destroy_stack(stack);
                return false;
                }
        }else{
            destroy_stack(stack);
            return false;
            }
        s++;
    }
    if (is_empty(stack)){
        destroy_stack(stack);
        return true;
    }else{
        destroy_stack(stack);
        return false;
    }

}

Stack *create_stack(int capacity){
    if (capacity <= 0) return NULL;

    Stack *stack = malloc(sizeof(Stack));
    if(stack == NULL) return NULL;

    stack->collection = malloc(sizeof(char) * capacity);

    if(stack->collection == NULL){
        free(stack);
        return NULL;
        }

    stack->capacity = capacity;
    stack->size = 0;
    return stack;
}

void destroy_stack(Stack *stack){
    free(stack->collection);
    free(stack);
}

bool is_full(Stack *stack){
    return stack->capacity == stack->size;
}

bool is_empty(Stack *stack){
    return stack->size == 0;
}

bool push(Stack *stack, char item){
    if(is_full(stack)) return false;

    stack->collection[stack->size] = item;
    stack->size++;
    return true;
}

bool pop(Stack *stack, char *item){
    if(is_empty(stack)) return false;
    stack->size--;
    *item = stack->collection[stack->size];
    return true;
}