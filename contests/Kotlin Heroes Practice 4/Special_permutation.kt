// https://codeforces.com/contest/1347/problem/E
import java.util.Deque
import java.util.LinkedList

fun main() {
    var tc: Int = readLine()!!.toInt()

    while (tc-- > 0) {
        var n: Int = readLine()!!.toInt()
        
        if (n <= 3) {
            println(-1)
            continue
        }

        var ans: Deque<Int> = LinkedList()

        ans.addLast(3)
        ans.addLast(1)
        ans.addLast(4)
        ans.addLast(2)
        
        var turn: Int = 1

        for (i in 5..n) {
            if (turn == 1) {
                ans.addLast(i)
            } else {
                ans.addFirst(i)
            }
            turn = turn xor 1
        }

        while (!ans.isEmpty()) {
            print(ans.first())
            print(" ")
            ans.removeFirst()
        }
        println()
    }
}