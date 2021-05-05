/**
 * My implementation of the "Queue"
 */

'use strict';

class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

class Queue {
  constructor() {
    this.root = null;
    this.tail = null;
  }

  // push
  enqueue(data) {
    const node = new Node(data);
    if (this.root === null) {
      this.root = node;
      this.tail = node;
      return this;
    }
    this.tail.next = node;
    this.tail = node;
    return this;
  }

  // shift
  dequeue() {
    if (!this.root && !this.tail) {
      throw new Error('Nothing is in the queue');
    }
    if (this.root === this.tail) {
      this.root = null;
      this.tail = null;
      return this;
    }
    this.root = this.root.next;
    return this;
  }
}

// usage

const queue = new Queue();

queue.enqueue(1); // root
queue.enqueue(2);
queue.enqueue(3);
queue.enqueue(4); // tail
console.dir({ queue }, { depth: null });

queue.dequeue(); // 2 - root, 4 - tail
console.dir({ queue }, { depth: null });
