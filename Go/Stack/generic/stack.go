package generic

import "fmt"

type Node[T any] struct {
	Data T
	Next *Node[T]
}

type Stack[T any] struct {
	Top *Node[T]
}

func NewStack[T any]() Stack[T] {
	return Stack[T]{}
}

func (s *Stack[T]) Push(data T) {
	node := Node[T]{Data: data}
	if s.Top == nil {
		s.Top = &node
		return
	}
	node.Next = s.Top
	s.Top = &node
}

func (s *Stack[T]) Pop() {
	if s.Top == nil {
		return
	}
	s.Top = s.Top.Next
}

func (s Stack[T]) Print() {
	tmp := s.Top
	fmt.Print("Stack: ")
	for tmp != nil {
		fmt.Printf("%v ", tmp.Data)
		tmp = tmp.Next
	}
	fmt.Println()
}
