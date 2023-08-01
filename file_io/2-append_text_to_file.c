#include "holberton.h"

/**
 * append_text_to_file - agrega texto al final de un archivo
 * @filename: nombre del archivo.
 * @text_content: contenido a añadir.
 *
 * Return: 1 si el archivo existe. -1 si falla o no existe.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nletters, rwr;

	/* Verifica si el puntero "filename" es nulo */
	if (!filename)
		return (-1);

	/* Abre el archivo en modo de escritura (agrega al final del archivo) */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1) /* Verifica si la apertura del archivo ha fallado */
		return (-1);

/*Si el puntero "text_content" no es nulo, escribe el contenido en el archivo*/
	if (text_content)
	{
		/* Calcula la cantidad de letras en el contenido de texto */
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		/* Escribe el contenido de texto en el archivo */
		rwr = write(fd, text_content, nletters);
	}

	/* Cierra el archivo */
	close(fd);

	/* Devuelve 1 si el contenido se agregó correctamente, -1 si falló */
	return ((text_content && rwr == -1) ? -1 : 1);
}
