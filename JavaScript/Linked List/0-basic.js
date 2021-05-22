'use strict';

class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
    this.prev = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
    this.last = null;
  }

  push(data) {
    const node = new Node(data);
    if (this.head === null) {
      this.head = node;
      this.last = node;
      return node;
    }
    node.prev = this.last;
    this.last.next = node;
    this.last = node;
    return node;
  }

  pop() {
    if (this.head === null) {
      return this;
    }
    let prev = this.last.prev;
    let tempLast = this.last;
    this.last = prev;
    tempLast = null;
    prev.next = null;
    return this;
  }
}

// usage

const list = new LinkedList();
list.push(5);
list.push(1);
list.push(8);

console.dir({ list }, { depth: null });

list.pop();

console.log('\n');
console.dir({ list }, { depth: null });
