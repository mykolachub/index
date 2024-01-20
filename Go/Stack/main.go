package main

import (
	generic "stack/generic"
)

func main() {
	stackInt := generic.NewStack[int]()

	stackInt.Push(1)
	stackInt.Push(2)
	stackInt.Push(3)
	stackInt.Print() // 3 2 1

	stackString := generic.NewStack[string]()

	stackString.Push("First")
	stackString.Push("Second")
	stackString.Pop()
	stackString.Push("Third")
	stackString.Print() // Third First
}
