// https://codeforces.com/contest/1355/problem/D
fun main() {
    var (n, s) = readLine()!!.split(' ').map {it.toInt()}
    
    if (s >= (2 * n)) {
        println("YES")
        val builder = StringBuilder()
        for (i in 0 .. (n - 2)) {
            builder.append("2 ")
        }
        builder.append((s - (2 * (n - 1))).toString())
        println(builder.toString())
        println(1)
    } else {
        println("NO")
    }
}