type list('a) =
  | Cons('a, list('a))
  | Empty;

let people = Cons(People.bob, Cons(People.jim, Cons(People.tom, Empty)));

let greetOne = ({People.id, name}) =>
  print_endline({j|Hello, $name with ID $id|j});

let rec greetAll = people =>
  switch (people) {
  | Cons(person, people) =>
    greetOne(person);
    greetAll(people);
  | Empty => ()
  };
