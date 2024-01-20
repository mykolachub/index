package generic

import "fmt"

type Node[T any] struct {
	Data T
	Next *Node[T]
	Prev *Node[T]
}

type Queue[T any] struct {
	Head   *Node[T]
	Tail   *Node[T]
	Length int
}

func NewQueue[T any]() Queue[T] {
	return Queue[T]{}
}

func (q *Queue[T]) Enqueue(data T) {
	node := Node[T]{Data: data}
	if q.Length == 0 {
		q.Head = &node
		q.Tail = &node
		q.Length = 1
		return
	}
	node.Next = q.Tail
	q.Tail.Prev = &node
	q.Tail = &node
	q.Length += 1
}

func (q *Queue[T]) Dequeue() {
	if q.Length == 0 {
		return
	}
	if q.Length == 1 {
		q.Head = nil
		q.Tail = nil
		q.Length = 0
		return
	}
	q.Head.Prev.Next = nil
	q.Head = q.Head.Prev
	q.Length -= 1
}

func (q Queue[T]) Print() {
	tmp := q.Head
	for tmp != nil {
		fmt.Printf("%v ", tmp.Data)
		tmp = tmp.Prev
	}
}
