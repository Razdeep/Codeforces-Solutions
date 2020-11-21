// https://codeforces.com/contest/1355/problem/A
import kotlin.math.*

fun getMinDigit(num: Long): Long{
    var res: Long = Long.MAX_VALUE
    var n: Long = num
    while (n > 0) {
        res = min(res, n % 10)
        n = n / 10
    }

    return res
}
fun getMaxDigit(num: Long): Long {
    var res: Long = 0
    var n: Long = num
    while (n > 0) {
        res = max(res, n % 10)
        n = n / 10
    }
    
    return res
}
fun main() {
    var tc: Long
    tc = readLine()!!.toLong()

    while (tc-- > 0) {
        var (n: Long, k: Long) = readLine()!!.split(' ').map {it.toLong()}
        
        for (i: Long in 0..(k - 2)) {
            var minDigit: Long = getMinDigit(n)
            var maxDigit: Long = getMaxDigit(n)

            n = n + (maxDigit * minDigit)

            if (minDigit == 0L) {
                break
            }
        }

        println(n)
    }
}