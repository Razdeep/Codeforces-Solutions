// https://codeforces.com/contest/1489/problem/D

fun isSubstring(shorter_string: String, longer_string: String): Boolean {
    val m: Int = shorter_string.length
    val n: Int = longer_string.length
    var i: Int = 0
    var j: Int = 0

    var res = false

    while (i < n) {
        j = 0
        while (i + j < n && j < m && shorter_string.elementAt(j) == longer_string.elementAt(i + j)) {
            ++j
        }
        if (j == m) {
            return true
        }
        ++i
    }
    return false
}

fun main() {
    var no_of_strings = readLine()!!.toInt()
    var arr: MutableList<String> = mutableListOf()
    var copy_no_of_strings = no_of_strings

    while (copy_no_of_strings-- > 0) {
        var text = readLine()!!
        arr.add(text)
    }

    arr.sortBy { it.length }
    var possible = true

    for (i in 0 .. (no_of_strings - 2)) {
        if (!isSubstring(arr.elementAt(i), arr.elementAt(i + 1))) {
            possible = false
            break
        }
    }

    if (possible) {
        println("YES")

        for (i in 0 .. (no_of_strings - 1)) {
            println(arr.elementAt(i))
        }
    } else {
        println("NO")
    }

}