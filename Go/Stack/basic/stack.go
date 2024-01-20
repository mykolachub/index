package basic

import "fmt"

type Node struct {
	Data int
	Next *Node
}

type Stack struct {
	Top *Node
}

func NewStack() Stack {
	return Stack{}
}

func (s *Stack) Push(data int) {
	node := Node{Data: data}
	if s.Top == nil {
		s.Top = &node
		return
	}
	node.Next = s.Top
	s.Top = &node
}

func (s *Stack) Pop() {
	if s.Top == nil {
		return
	}
	s.Top = s.Top.Next
}

func (s Stack) Print() {
	tmp := s.Top
	fmt.Print("Stack: ")
	for tmp != nil {
		fmt.Printf("%v ", tmp.Data)
		tmp = tmp.Next
	}
	fmt.Println()
}

// func main() {
// 	stack := NewStack()

// 	stack.Push(1)
// 	stack.Push(2)
// 	stack.Push(3)
// 	stack.Print() // 3 2 1

// 	stack.Pop()
// 	stack.Push(4)
// 	stack.Print() // 4 2 1
// }
