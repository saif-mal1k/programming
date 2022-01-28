function person(name, age, color) {
  this.name = name;
  this.age = age;
  this.favColor = color;
  this.changeName = function(newName) {
    this.name = newName;
  }
}
