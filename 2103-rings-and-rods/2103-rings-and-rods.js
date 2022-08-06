/**
 * @param {string} rings
 * @return {number}
 */
var countPoints = function(rings) {
    let total = 0
    const map = new Map()
    
    for(i=0;i<rings.length;i+=2){
        c = rings[i]
        r = rings[i+1]
        if(!map.has(r)) map.set(r, new Set())
        map.get(r).add(c)
    }
    
    for(const [r,c] of map){
        if(c.size==3) total+=1
    }
    return total
};