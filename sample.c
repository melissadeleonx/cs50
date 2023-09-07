#include <cs50.h>
    #include <stdio.h>

    int main(void)

{
        FILE *htmlFile = fopen("index.html", "w");
        if (htmlFile == NULL) {
            perror("Error opening file");
            return 1;
        }

        fprintf(htmlFile, "<html><head><title>My Offline Webpage</title></head><body>\n");
        fprintf(htmlFile, "<h1>Hello, World!</h1>\n");
        fprintf(htmlFile, "</body></html>\n");

        fclose(htmlFile);

        printf("HTML file generated successfully. Open 'index.html' in your browser.\n");

        return 0;
    }