#include "main.h"

/**
 * read_textfile - lee un archivo de texto e imprime las letras
 * @filename: nombre del archivo.
 * @letters: número de letras a imprimir.
 *
 * Return: número de letras impresas. Si falla, devuelve 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;        /* Descriptor de archivo */
	/* Variables para almacenar el número de bytes leídos y escritos */
	ssize_t nrd, nwr;
	char *buf;     /* Búfer para almacenar los datos leídos del archivo */

	/* Verifica si el puntero "filename" es nulo */
	if (!filename)
		return (0);

	/* Abre el archivo en modo de solo lectura */
	fd = open(filename, O_RDONLY);
	if (fd == -1) /* Verifica si la apertura del archivo ha fallado */
		return (0);

	/* Asigna memoria dinámica para el búfer */
	buf = malloc(sizeof(char) * letters);
	if (!buf) /* Verifica si la asignación de memoria ha fallado */
		return (0);

	/* Lee "letters" bytes del archivo y los almacena en el búfer */
	nrd = read(fd, buf, letters);

	/* Escribe los datos del búfer en la salida estándar */
	nwr = write(STDOUT_FILENO, buf, nrd);

	/* Cierra el archivo abierto y libera la memoria del búfer */
	close(fd);
	free(buf);

	/* Devuelve el número de letras escritas en la salida estándar */
	return (nwr);
}
