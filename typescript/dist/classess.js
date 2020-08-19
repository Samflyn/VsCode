"use strict";
class Person {
    constructor(id, name) {
        this.id = id;
        this.name = name;
        this.people = [];
    }
}
class Employee extends Person {
}
const emp = new Employee('emp', '111');
console.log(emp);
