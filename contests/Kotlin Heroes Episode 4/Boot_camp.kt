// https://codeforces.com/contest/1346/problem/B
fun main() {
    var tc: Int = readLine()!!.toInt()

    while (tc-- > 0) {
        var (n, k1, k2) = readLine()!!.split(' ').map { it.toInt() }
        var text: String = readLine()!!
        var arr: MutableList<Int> = mutableListOf<Int>();
        for (i in 0..(n - 1)) {
            if (text[i] == '0') {
                arr.add(0)
            } else {
                arr.add(1)
            }
        }
        var ans: Int = 0
        for (i in 0..(n - 2)) {
            if (arr.get(i) == 1 && arr.get(i + 1) == 1) {
                ans = ans + Math.min(2 * k1, k2)
                arr[i] = 0
                arr[i + 1] = 0
            } else if (arr.get(i) == 1) {
                ans = ans + k1
                arr[i] = 0
            }
        }
        if (arr.get(n - 1) == 1) {
            ans = ans + k1
        }

        println(ans)
    }
}