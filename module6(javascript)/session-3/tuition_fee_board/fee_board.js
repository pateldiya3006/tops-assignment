
let monthlyFee = 1800;
let months = 6;
let siblingDiscount = 10;
let lateDays = 4;
let lateFee = 50;

let totalFee = monthlyFee * months;

let discountAmount = totalFee * siblingDiscount / 100;

let lateAmount = lateFee * lateDays;

let netPayable = totalFee - discountAmount + lateAmount;

console.log("Total Fee:", totalFee);
console.log("Sibling Discount:", discountAmount);
console.log("Late Fee:", lateAmount);
console.log("Net Payable:", netPayable);

// TASK 2



let attendancePercent = 80;
let feePaid = true;
let hasPermission = false;

let canWriteTest = (attendancePercent >= 75 && feePaid === true) || hasPermission === true;

console.log("Student 1 Can Write Test:", canWriteTest);


// Student 2

attendancePercent = 70;
feePaid = false;
hasPermission = true;

canWriteTest = (attendancePercent >= 75 && feePaid === true) || hasPermission === true;

console.log("Student 2 Can Write Test:", canWriteTest);


// Student 3

attendancePercent = 60;
feePaid = true;
hasPermission = false;

canWriteTest = (attendancePercent >= 75 && feePaid === true) || hasPermission === true;

console.log("Student 3 Can Write Test:", canWriteTest);



// TASK 3


let feeBand;

// Test 1 - Fee 1200
monthlyFee = 1200;

if (monthlyFee < 1500) {
    feeBand = "Basic";
}
else if (monthlyFee <= 2500) {
    feeBand = "Standard";
}
else {
    feeBand = "Premium";
}

console.log("Fee 1200:", feeBand);


// Test 2 - Fee 1800
monthlyFee = 1800;

if (monthlyFee < 1500) {
    feeBand = "Basic";
}
else if (monthlyFee <= 2500) {
    feeBand = "Standard";
}
else {
    feeBand = "Premium";
}

console.log("Fee 1800:", feeBand);



monthlyFee = 2500;

if (monthlyFee < 1500) {
    feeBand = "Basic";
}
else if (monthlyFee <= 2500) {
    feeBand = "Standard";
}
else {
    feeBand = "Premium";
}

console.log("Fee 2500:", feeBand);

monthlyFee = 3000;

if (monthlyFee < 1500) {
    feeBand = "Basic";
}
else if (monthlyFee <= 2500) {
    feeBand = "Standard";
}
else {
    feeBand = "Premium";
}

console.log("Fee 3000:", feeBand);


feePaid = true;

console.log("Payment Status:", feePaid ? "Paid" : "Due");

feePaid = false;

console.log("Payment Status:", feePaid ? "Paid" : "Due");


//task 4



console.log("0:", 0 ? "truthy" : "falsy");

console.log('"":', "" ? "truthy" : "falsy");

console.log("null:", null ? "truthy" : "falsy");

console.log("undefined:", undefined ? "truthy" : "falsy");

console.log("NaN:", NaN ? "truthy" : "falsy");

console.log("1:", 1 ? "truthy" : "falsy");

console.log('"0":', "0" ? "truthy" : "falsy");

console.log('"Aarav":', "Aarav" ? "truthy" : "falsy");
