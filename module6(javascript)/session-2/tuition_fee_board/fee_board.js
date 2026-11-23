const institutename = "Tops tech";

let studentname ="Diya patel";
let Monthlyfee ="1800";
let batchname ="MERN strack";
let paid = "true";


console.log("institute name:",institutename);
console.log("Student Name:",studentname);
console.log("Monthly fee:",Monthlyfee);

console.log("batch name:",batchname);
console.log("paid:",paid);

{
    var batchcode = "m9";
    let seatno = "12";
}
 
console.log(batchcode);
console.log(typeof seatno);

Monthlyfee = 2000;
console.log(Monthlyfee);


let feeB = Monthlyfee;

feeB = 2500;

console.log("Primitive Copy - monthlyFee: " + Monthlyfee);
console.log("Primitive Copy - feeB: " + feeB);

const student1 = { name: "Aarav", fee: 1800 };

const student2 = student1;

student2.fee = 2200;

console.log("Reference Copy - student1.fee: " + student1.fee);
console.log("Reference Copy - student2.fee: " + student2.fee);




let feeStatus = 1800;

console.log("Fee Status:", feeStatus);
console.log("Data Type:", typeof feeStatus);

feeStatus = "1800";

console.log("Fee Status:", feeStatus);
console.log("Data Type:", typeof feeStatus);

feeStatus = false;

console.log("Fee Status:", feeStatus);
console.log("Data Type:", typeof feeStatus);


