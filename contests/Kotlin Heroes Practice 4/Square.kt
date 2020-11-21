// https://codeforces.com/contest/1347/problem/B
fun main() {
    var tc: Int
    tc = readLine()!!.toInt()

    while (tc-- > 0) {
        var (a1, b1) = readLine()!!.split(' ').map { it.toInt() }
        var (a2, b2) = readLine()!!.split(' ').map { it.toInt() }
        var tmp: Int = 0

        if (a1 > b1) {
            tmp = a1
            a1  = b1
            b1  = tmp
        }

        if (a2 > b2) {
            tmp = a2
            a2 = b2
            b2 = tmp
        }

        if (b1 == b2 && a1 + a2 == b1) {
            println("Yes")
        } else {
            println("No")
        }
    }
}