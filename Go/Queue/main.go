package main

import (
	"queue/basic"
	"queue/generic"
)

func main() {
	queue := basic.NewQueue()

	queue.Enqueue(1)
	queue.Enqueue(2)
	queue.Enqueue(3)

	queue.Print() // 1 2 3

	queue.Dequeue()
	queue.Print() // 2 3

	queueT := generic.NewQueue[string]()

	queueT.Enqueue("1")
	queueT.Enqueue("2")
	queueT.Enqueue("3")

	queueT.Print() // 1 2 3

	queueT.Dequeue()
	queueT.Print() // 2 3

}
