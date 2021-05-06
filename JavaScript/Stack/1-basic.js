/**
 * My implementation of the "Stack"
 */

'use strict';

class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

class Stack {
  constructor() {
    this.top = null;
  }

  push(data) {
    const node = new Node(data);
    if (this.top === null) {
      this.top = node;
      return this;
    }
    node.next = this.top;
    this.top = node;
    return this;
  }

  pop() {
    if (this.top === null) {
      return null;
    }
    let temp = this.top;
    this.top = this.top.next;
    temp = null;
    return this;
  }

  getTop() {
    return this.top ? this.top.data : null;
  }

  isEmpty() {
    return this.top === null;
  }
}

// usage

const stack = new Stack();

stack.push(1);
stack.push(2);
stack.push(3);
stack.push(4);

console.dir({ stack }, { depth: null });

stack.pop();

console.dir({ stack }, { depth: null });
