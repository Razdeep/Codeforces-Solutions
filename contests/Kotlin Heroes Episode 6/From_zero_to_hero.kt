// https://codeforces.com/contest/1488/problem/A

fun main() {
    var tc = readLine()!!.toInt()

    while (tc-- > 0) {
        var (x, y) = readLine()!!.split(' ').map { it.toDouble() }
        var k: Double = 0.0
        var operations: Double = 0.0

        for (p in 9 downTo 0) {
            while (k + (x * Math.pow( 10.0, p.toDouble() )) <= y) {
                k = k + (x * Math.pow( 10.0, p.toDouble() ))
                operations = operations + 1
            }
        }
        operations = operations + (y - k)
        
        println(operations.toInt())
    }
}