// Q2 Create a note saving app which saves notes in the localtorage
let topic=prompt("Enter your topic name");
let note=prompt("Enter your note");
localStorage.setItem(topic,note);

// Q3 fetch the note which was saved
let n=confirm("Do you want to see the note");
if(n){
    let topic=prompt("Enter the topic name");
    if(topic!=null){
        alert(localStorage.getItem(topic));
    }
    else {
        alert("Note not found");
    }
}

// Q4 delete the node in the prevoius question
let n1=confirm("Do you want to delete the note");
if(n1){
    localStorage.removeItem(topic);
    alert("Note Deleted Successfully");
}