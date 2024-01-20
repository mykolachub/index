package basic

import "fmt"

type Node struct {
	Data int
	Next *Node
	Prev *Node
}

type Queue struct {
	Head   *Node
	Tail   *Node
	Length int
}

func NewQueue() Queue {
	return Queue{}
}

func (q *Queue) Enqueue(data int) {
	node := Node{Data: data}
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

func (q *Queue) Dequeue() {
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

func (q Queue) Print() {
	tmp := q.Head
	for tmp != nil {
		fmt.Printf("%v ", tmp.Data)
		tmp = tmp.Prev
	}
}
