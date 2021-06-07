// https://codeforces.com/contest/1509/problem/A

fun main() {
    var tc = readLine()!!.toInt()
    
    while (tc-- > 0) {
        var n = readLine()!!.toInt()
        var arr = readLine()!!.split(' ').map { it.toInt() }

        var odds = arrayListOf<Int>()
        var evens = arrayListOf<Int>()

        for (i in 0 .. (n - 1)) {
            var elem = arr.get(i)
            if ((elem and 1) == 1) {
                odds.add(elem)
            } else {
                evens.add(elem)
            }
        }

        for (elem in odds) {
            print(elem)
            print(" ")
        }

        for (elem in evens) {
            print(elem)
            print(" ")
        }
        println()
    }
}