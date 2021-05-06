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
    /**
     * Here can be options like:
     * isEmpty to be updated once push() or pop() gets executed
     * bottom to store the first node of Stack
     */
  }

  push(data) {
    const node = new Node(data);
    if (!this.top) {
      this.top = node;
      return this;
    }
    node.next = this.top;
    this.top = node;
    return node;
  }

  pop() {
    if (!this.top) return null;
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

const node1 = stack.push({ number: 1, city: 'Kyiv' });
const node2 = stack.push({ number: 2, city: 'London' });
const node3 = stack.push({ number: 3, city: 'Lviv' });
const node4 = stack.push({ number: 4, city: 'Moscow' });
const node5 = stack.push({ number: 5, city: 'Berlin' });

const top = stack.getTop();

console.dir({ stack, top }, { depth: null });
