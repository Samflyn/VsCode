"use strict";
var Role;
(function (Role) {
    Role[Role["ADMIN"] = 0] = "ADMIN";
    Role[Role["READ_ONLY"] = 1] = "READ_ONLY";
    Role[Role["READ_WRITE"] = 2] = "READ_WRITE";
})(Role || (Role = {}));
const person = {
    role: Role.ADMIN,
};
function combine(input1, input2, result) {
    if (typeof input1 === 'number' &&
        typeof input2 === 'number' &&
        result === 'number') {
        return input1 + input2;
    }
    else {
        return input1.toString() + input2.toString();
    }
}
// return type
function add(a, b) {
    console.log(a + b);
}
// function as type
let combination;
// params => return type
let combined;
// ignores return type if void is set
function addHandle(a, b, cb) {
    cb(a + b);
}
const result = addHandle(1, 2, (result) => {
    console.log(result);
    return result;
});
// unknown type
// cannot set without typechecking unlike any
let userInput;
let userName;
if (typeof userInput === 'string') {
    userName = userInput;
}
// never type - wont return anything not even undefined
function errors(code) {
    throw { errorCode: code };
}
