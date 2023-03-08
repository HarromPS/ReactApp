// const prompt=require('prompt-sync')();

// table based navigation
let table=document.body.firstElementChild.firstElementChild;
console.log(table); // first element of the body -> div ->first child (element)

// return all rows in the form of HTML collections 
console.log(table.rows);

// returns the caption of the table
console.log(table.caption);

// return the tHead of the table
console.log(table.tHead);

// return the first element child of tHead
console.log(table.tHead.firstElementChild);

// return the tFoot of the table
console.log(table.tFoot);

// return the tBodies of the table
console.log(table.tBodies);

// returns all the table rows
console.log(table.rows);

// returns the collection of the tr inside
// console.log(table.tBodies.rows);

// returns the table rows by their indexes
console.log(table.rows[2]);

// // return the cell index of the table rows
console.log(table.rows[2].rowIndex);


// console.log(table.rows[0].cellIndex);

// console.log(table.rows[1].sectionRowIndex);