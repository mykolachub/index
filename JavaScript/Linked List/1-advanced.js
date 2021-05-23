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

  getFirst() {
    return this.head;
  }

  getlast() {
    return this.last;
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

  pushAfter(data, prevNode) {
    if (!prevNode) {
      return this.push(data);
    }
    const node = new Node(data);
    let nextNode = prevNode.next;
    node.next = nextNode;
    node.prev = prevNode;
    prevNode.next = node;
    nextNode.prev = node;
    return node;
  }

  pushBefore(node, data) {}

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

  shift() {}
}

// usage
const list = new LinkedList();

// adding node
const node1 = list.push(10);
const node2 = list.push(20);
const node4 = list.push(40);
const node5 = list.push(50);

// poping node
list.pop();

// adding node after existing node
const node3 = list.pushAfter(30, node2);

console.dir({ list }, { depth: null });
