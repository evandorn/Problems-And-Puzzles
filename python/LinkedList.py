# Doubly Linked List Implmentation in Python

#!/usr/bin/env python

class Node(object):
    def __init__(self):
        self.next = None
        self.previous = None


class LinkedList(object):
    def __init__(self):
        self.nodeCount = 0
        self.last = Node()
        self.first = self.last

    def append(self, element):
        self.last.element = element
        self.last.next = Node()
        temp = self.last
        self.last = self.last.next
        self.last.previous = temp
        self.nodeCount += 1

    def front(self):
        if (self.nodeCount == 0):
            return None
        item = self.first.element
        self.first = self.first.next
        self.nodeCount -= 1
        return item

    def back(self):
        if (self.nodeCount == 0):
            return None
        item = self.last.previous.element
        self.last = self.last.previous
        self.last.next = Node()
        self.nodeCount -= 1
        return item

    def getSize(self):
        return self.nodeCount

    def getElements(self):
        i = self.first
        while i.element:
            yield i.element
            i = i.next

if __name__ == "__main__":
        LinkedList()

        assert None == list.front()
        assert None == list.back()

        list.append(1)
        list.append(2)
        list.append(3)

        assert 1 == list.front()
        assert 2 == list.front()
        assert 3 == list.front()

        list.append(1)
        list.append(2)
        list.append(3)

        assert 3 == list.back()
        assert 2 == list.back()
        assert 1 == list.back()

        list.append(1)
        assert 1 == list.back()

        list.append(1)
        assert 1 == list.front()
