// https://codeforces.com/contest/1346/problem/C
fun main() {
    var tc: Int = readLine()!!.toInt()

    while (tc-- > 0) {
        var (n, k, x, y) = readLine()!!.split(' ').map { it.toLong() }
        var arr: List<Long> = (readLine()!!.split(' ').map { it.toLong() }).sorted()

        var bad_shelves: Long = 0
        var sum: Long = 0

        for (it in arr) {
            if (it > k) {
                bad_shelves = bad_shelves + 1
            }
            sum = sum + it
        }

        var ans: Long = (bad_shelves * x)
        var max_allowed: Long = (n * k).toLong()
        var other: Long = y

        for (i in 0..(n - 1)) {
            if (sum > max_allowed) {
                sum = sum - arr.get((n - i - 1).toInt())
                other = other + x
            }
        }

        println(minOf(ans, other))
    }
}