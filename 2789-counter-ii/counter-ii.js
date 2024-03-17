/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */

class CounterFunctions{
    constructor(initial){
        this.current = initial;
        this.start = initial;
    }
    
    increment(){
        return ++this.current;
    }
    
    decrement(){
        return --this.current;
    }
    
    reset(){
        this.current = this.start;
        return this.start;
    }
}
var createCounter = function(init) {
    return new CounterFunctions(init);
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */