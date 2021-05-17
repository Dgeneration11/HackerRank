

/*
 * Complete the reverseString function
 * Use console.log() to print to stdout.
 */
function reverseString(s) {
    
    try{
        var spl = s.split("");
        var rev = spl.reverse();
        var joi = rev.join("");
        
        console.log(joi);
    }
    catch(error){
        console.log(error.message);
        console.log(s);
    }
}

