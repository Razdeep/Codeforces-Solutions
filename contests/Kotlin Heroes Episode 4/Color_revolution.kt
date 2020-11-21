// https://codeforces.com/contest/1346/problem/A
fun main() {
    var tc: Int = readLine()!!.toInt()

    while (tc-- > 0) {
        var (n, k) = readLine()!!.split(' ').map { it.toInt() }
        var n1: Int = n / (1 + k + (k * k) + (k * k * k))
        print(n1)
        print(" ")
        print(k * n1)
        print(" ")
        print(k * k * n1)
        print(" ")
        print(k * k * k * n1)
        println()
    }
}