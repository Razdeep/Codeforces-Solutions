// https://codeforces.com/contest/1489/problem/B
fun main() {
    var queries: Long = readLine()!!.toLong()
    var ans: Long

    while (queries-- > 0) {
        var (n, cost_of_one, cost_of_two) = readLine()!!.split(' ').map { it.toLong() }
        if (2 * cost_of_one < cost_of_two) {
            ans = (cost_of_one * n)
        } else {
            ans = cost_of_two * (n / 2)
            if (n % 2L == 1L) {
                ans += cost_of_one
            }
        }
        println(ans)
    }
}