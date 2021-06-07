// https://codeforces.com/contest/1489/problem/C

fun main() {
    var n: Int = readLine()!!.toInt()
    var text: String = readLine()!!

    var x_streak = 0
    var ans = 0

    for (c in text) {
        if (c == 'x') {
            x_streak++
        } else {
            if (x_streak >= 3) {
                ans += (x_streak - 2)
            }
            x_streak = 0
        }
    }

    if (text[text.length - 1] == 'x') {
        if (x_streak >= 3) {
            ans += (x_streak - 2)
        }
    }

    println(ans)
}