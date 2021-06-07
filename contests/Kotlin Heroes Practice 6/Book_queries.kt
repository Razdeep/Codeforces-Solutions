// https://codeforces.com/contest/1489/problem/E

fun trace(message: String, x: Int) {
    print(message + ": ")
    print(x)
    println()
}

fun main() {
    var queries = readLine()!!.toInt()

    var position = IntArray(200007, { i -> 0 })
    var left = 0
    var right = 1
    var array_size = 0

    while (queries-- > 0) {
        var query_line = readLine()!!
        var command    = query_line.split(' ').elementAt(0)
        var num        = query_line.split(' ').elementAt(1).toInt()
        
        if (command == "L") {
            position.set(num, left)
            left = left - 1
            array_size = array_size + 1
        } else if (command == "R") {
            position.set(num, right)
            right = right + 1
            array_size = array_size + 1
        } else {
            var absolute_position = (left * (-1)) + position[num]
            var ans_from_left  = absolute_position - 1
            var ans_from_right = array_size - absolute_position

            var ans = Math.min(ans_from_left, ans_from_right)
            println(ans)
        }
    }
}