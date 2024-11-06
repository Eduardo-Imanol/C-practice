class Libro {
  final String titulo;
  final String autor;

  Libro(this.titulo, this.autor);
}

void main() {
  // Crear una lista de libros
  final libros = [
    Libro("El Hobbit", "Tolkien"),
    Libro("El Señor de los Anillos", "Tolkien"),
    Libro("Harry Potter", "Rowling"),
    Libro("Cien años de soledad", "García Márquez"),
    Libro("Crime and Punishment", "Dostoevsky"),
  ];

  // Consultas lógicas

  // ¿Quién escribió "El Hobbit"?
  final autorElHobbit = obtenerAutor("El Hobbit", libros);
  print('El autor de "El Hobbit" es: $autorElHobbit');

  // ¿Qué libros escribió "Tolkien"?
  final librosDeTolkien = obtenerLibrosPorAutor("Tolkien", libros);
  print('Libros escritos por Tolkien: $librosDeTolkien');

  // ¿Quién escribió "Harry Potter"?
  final autorHarryPotter = obtenerAutor("Harry Potter", libros);
  print('El autor de "Harry Potter" es: $autorHarryPotter');

  // ¿Qué libros escribió "Rowling"?
  final librosDeRowling = obtenerLibrosPorAutor("Rowling", libros);
  print('Libros escritos por Rowling: $librosDeRowling');
}

String obtenerAutor(String tituloLibro, List<Libro> libros) {
  for (final libro in libros) {
    if (libro.titulo == tituloLibro) {
      return libro.autor;
    }
  }
  return "Desconocido";
}

List<String> obtenerLibrosPorAutor(String nombreAutor, List<Libro> libros) {
  final librosDelAutor = <String>[];
  for (final libro in libros) {
    if (libro.autor == nombreAutor) {
      librosDelAutor.add(libro.titulo);
    }
  }
  return librosDelAutor;
}
