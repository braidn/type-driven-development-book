let people = People.[bob, jim, tom, billy];

let rec greetAll = people =>
  switch (people) {
  | [person, ...people] =>
    List.greetOne(person);
    greetAll(people);
  | [] => ()
  };
