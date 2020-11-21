// https://codeforces.com/contest/1347/problem/A
fun main() {
    var tc: Int
    tc = readLine()!!.toInt()

    while (tc-- > 0) {
        var (a, b) = readLine()!!.split(' ').map { it.toInt() }
        println((a + b))
    }
}