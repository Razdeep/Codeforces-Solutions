// https://codeforces.com/contest/1347/problem/C
fun main() {
    var tc: Int
    tc = readLine()!!.toInt()

    while (tc-- > 0) {
        var text: String = readLine()!!
        var len: Int = text.length
        var ans: MutableList<String> = arrayListOf()

        for (i in 0..(len - 1)) {
            if (text[i] != '0') {
                var sb = StringBuilder()
                sb.append(text[i])
                for (j in 0..(len - i - 2)) {
                    sb.append("0")
                }
                ans.add(sb.toString())
            }
        }

        println(ans.size)
        for (i in 0..(ans.size - 1)) {
            print(ans.get(i))
            print(" ")
        }
        println()
    }
}