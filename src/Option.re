let rec tryFind = (needle, haystac) =>
  switch (haystac) {
  | [item, ..._items] when needle(item) => Some(item)
  | [_item, ...items] => tryFind(needle, items)
  | [] => None
  };

let optionallyGreet = person =>
  switch (person) {
  | Some(person) => List.greetOne(person)
  | None => print_endline("No Person Found")
  };

let idEq1 = ({People.id}) => id == 1;
let idEq4 = ({People.id}) => id == 4;

optionallyGreet(tryFind(idEq1, ReasonList.people));
optionallyGreet(tryFind(idEq4, ReasonList.people));
