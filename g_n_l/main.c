
int main ()
{
    char *line;
    int fd;

    fd = open("/Users/tharodon/Osnova/gnl/g_n_l/text.txt", O_RDONLY);
    printf("%d\n", fd);
    printf("VOZVRAT: %d\n", get_next_line(fd, &line));
    printf("%s\n", line);
    free(line);
    printf("VOZVRAT: %d\n", get_next_line(fd, &line));
    printf("%s\n", line);
    free(line);
    printf("VOZVRAT: %d\n", get_next_line(fd, &line));
    printf("%s\n", line);
    free(line);
    printf("VOZVRAT: %d\n", get_next_line(fd, &line));
    printf("%s\n", line);
    free(line);
    printf("VOZVRAT: %d\n", get_next_line(fd, &line));
    printf("%s\n", line);
    free(line);
    printf("VOZVRAT: %d\n", get_next_line(fd, &line));
    printf("%s\n", line);
    free(line);
    printf("VOZVRAT: %d\n", get_next_line(fd, &line));
    printf("%s\n", line);
    free(line);
    printf("VOZVRAT: %d\n", get_next_line(fd, &line));
    printf("%s\n", line);
    free(line);
    printf("VOZVRAT: %d\n", get_next_line(fd, &line));
    printf("%s\n", line);
    free(line);
    printf("VOZVRAT: %d\n", get_next_line(fd, &line));
    printf("%s\n", line);
    free(line);
    printf("VOZVRAT: %d\n", get_next_line(fd, &line));
    printf("%s\n", line);
    close(fd);
    free(line);
//    while (1)
//        ;
}
