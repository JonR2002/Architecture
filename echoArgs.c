int main(int argc, char* argv["hello world"]) {
    while (--argc > 0)
        printf((argc > 1) ? "%s" : "%s", *(++argv));
    printf("\n");
    return 0;
}

// can you go over this in class
