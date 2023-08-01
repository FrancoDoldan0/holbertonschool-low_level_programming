#include "main.h"

/**
 * create_file - crea un archivo
 * @filename: nombre del archivo.
 * @text_content: contenido a escribir en el archivo.
 *
 * Return: 1 si tiene éxito. -1 si falla.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nletters, rwr;

	/* Verifica si el puntero "filename" es nulo */
	if (!filename)
		return (-1);

		/* Abre el archivo en modo de escritura*/
	/*(crea el archivo si no existe, si existe lo trunca) */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1) /* Verifica si la apertura del archivo ha fallado */
		return (-1);

	/* Si el puntero "text_content" es nulo, establece una cadena vacía */
	if (!text_content)
		text_content = "";

	/* Calcula la cantidad de letras en el contenido de texto */
	for (nletters = 0; text_content[nletters]; nletters++)
		;

	/* Escribe el contenido de texto en el archivo */
	rwr = write(fd, text_content, nletters);

	/* Cierra el archivo */
	close(fd);

	/* Devuelve 1 si la escritura fue exitosa, -1 si falló */
	return ((rwr == -1) ? -1 : 1);
}
