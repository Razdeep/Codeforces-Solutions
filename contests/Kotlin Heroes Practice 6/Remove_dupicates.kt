// https://codeforces.com/contest/1489/problem/A
fun main() {
    var set: MutableSet<Int> = mutableSetOf()

    var n: Int = readLine()!!.toInt()

    var arr: List<Int> = readLine()!!.split(' ').map { it.toInt() }
    var ans: MutableList<Int> = mutableListOf()
    arr = arr.reversed()

    for (i in 0 .. (n - 1)) {
        if (!set.contains(arr.get(i))) {
            ans.add(arr.get(i))
            set.add(arr.get(i))
        }
    }
    ans = ans.reversed() as MutableList<Int>

    println(ans.size)

    for (i in 0 .. (ans.size - 1)) {
        print(ans.elementAt(i))
        print(" ")
    }
    
}