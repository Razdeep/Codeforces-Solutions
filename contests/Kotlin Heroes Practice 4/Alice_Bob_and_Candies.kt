// https://codeforces.com/contest/1347/problem/D
fun main() {
    var tc: Int = readLine()!!.toInt()

    while (tc-- > 0) {
        var n: Int = readLine()!!.toInt()
        var arr: List<Int> = readLine()!!.split(' ').map { it.toInt() }

        var left: Int = 0
        var right: Int = n - 1
        var last_alice: Int = 0
        var last_bob: Int = 0
        var turn: Int = 1
        var total_alice: Int = 0
        var total_bob: Int = 0
        var moves: Int = 0

        while (left <= right) {
            if (turn == 1) {
                last_alice = 0
                while (last_alice <= last_bob && (left <= right)) {
                    last_alice += arr.get(left++)
                }
                total_alice += last_alice
            } else {
                last_bob = 0
                while (last_bob <= last_alice && (left <= right)) {
                    last_bob += arr.get(right--)
                }
                total_bob += last_bob
            }
            moves++
            turn = turn xor 1
        }

        print(moves)
        print(" ")
        print(total_alice)
        print(" ")
        print(total_bob)
        println()
    }
}