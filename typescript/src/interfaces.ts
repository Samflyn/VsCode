interface Pers {
  name: string;
  age: number;
  greet(greeting: string): void;
}

let user: Pers;

user = {
  name: 'sam',
  age: 1,
  greet(greetings: string): void {
    console.log(greetings);
  },
};
