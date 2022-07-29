/**
 * @param {string[]} words
 * @return {number}
 */
var uniqueMorseRepresentations = function(words) {
    
    let total=0;
    const seen = new Map();
    const morse = new Map()
    const l = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
    const alphas = [...Array(26)].map((_,i) => String.fromCharCode(i+97))
    for(i=0;;){
        if(i== l.length) break;
        
        morse.set(alphas[i],l[i])
        i++;
    }
    for (const word of words){
        trans = ''
        word.split('').map((el,i)=> trans+= morse.get(el))
        if (!seen.has(trans)) total++;
        seen.set(trans,true);
    }

    return total;
};