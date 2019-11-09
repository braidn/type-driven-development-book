type person = {
  id: int,
  name: string,
};
let bob = {name: "Bob", id: 1};
let jim = {
  let id = 2;
  let name = "Jim";
  {id, name};
};
let billy = {
  let id = 2;
  let name = "Billy";
  {id, name};
};
let tomId = 3;
let tom = {id: tomId, name: "Tom"};
