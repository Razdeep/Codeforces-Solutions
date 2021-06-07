// https://codeforces.com/contest/1509/problem/B

// NOT SOLVED

fun main() {
    var tc = readLine()!!.toInt()

    while (tc-- > 0) {
        var n = readLine()!!.toInt()
        var text = readLine()!!

        var isUsed = BooleanArray(n) { it -> false }

        var possible = true
        var last_T = n - 1
        var first_T = 0

        for (i in 0 .. (text.length - 1)) {
            if (isUsed.get(i) == false) {
                if (text.get(i) == 'M') {

                    while (first_T < i && text.get(first_T) == 'M') {
                        first_T++
                    }

                    if (first_T < i) {
                        isUsed.set(first_T, true)
                    } else {
                        possible = false
                    }
                    first_T++

                    // ----------

                    while (last_T >= i && text.get(last_T) == 'M') {
                        last_T--
                    }

                    if (possible && last_T >= i) {
                        isUsed.set(last_T, true)
                    } else {
                        possible = false
                    }
                    last_T--

                    // -----------

                    if (possible) {
                        isUsed.set(i, true)
                    }
                }
            }
        }

        for (i in 0 .. (n - 1)) {
            if (isUsed.get(i) == false) {
                possible = false
            }
        }

        println(if (possible) "YES" else "NO")
    }
}