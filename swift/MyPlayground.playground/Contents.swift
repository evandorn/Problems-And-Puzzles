import Cocoa

import Foundation

let b = 20
var a = 5
a = b
print(b)
print(a)
let c = b * (a > 10 ? 2 : 3)
print(c)

let foo = (38 % 5)

print(foo)

/*
 * Swift Sets:
 *   "is equal" operator (==): Determines whether two sets contain all of the same values.
 *   isSubsetOf method: Determines whether all of the values of a set are contained in the specified set.
 *   isSupersetOf method: Determines whether a set contains all of the values in a specified set.
 *   isStrictSubsetOf or isStrictSupersetOf method: Determines whether a set is a subset or superset of, but not equal to, a specified set.
 *   isDisjointWith method: determines whether two sets have any values in common.
 *
 */

let group1: Set = ["A", "B", "C"]
let group2: Set = ["B", "D", "E", "A"]
print(group2.subtract(group1).count)


/*
 *  Fill in the blanks to create a new set "c", with only the values common to both "a" and "b", 
 *      if not all of the values of set "a" are contained in set "b".
 */

let set1: Set = [1, 2, 3]
let set2: Set = [3, 5, 2]
if !set1.isSubsetOf(set2) {
    let set3: Set = set1.intersect(set2)
}


var test = [1:"A", 2:"B", 3:"C"]
test[3] = nil
print(test.count)


var result = 0;
for(var i = 0; i < 5; i++) {
    if i == 3 {
        result += 10;
    } else {
        result += i;
    }
}
print(result)


// count even items in an Array
func countEvens() {
    var count = 0
    for(item in myArr) {
        if(item % 2 == 0) {
            count += 1
        }
    }
}

