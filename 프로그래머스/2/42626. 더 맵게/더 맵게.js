// 최소 힙
class MinHeap {
    // 힙 정의
    constructor() {
        this.heap = [];
    }
    
    // 인데스로 값 구하기
    getValue(index) {
        return this.heap[index];
    }
    
    // 부모 인덱스 구하기
    getParentIndex(index) {
        return Math.floor((index - 1) / 2);
    }
    
    // 값 추가하기
    insert(value) {
        this.heap.push(value);
        this.bubbleUp(this.heap.length - 1);
    }
    
    // 최소값 꺼내기
    remove() {
        if (this.heap.length === 0) return null;
        
        const min = this.heap[0];
        const last = this.heap.pop();
        
        if ((this.heap.length > 0) && (last !== undefined)) {
            this.heap[0] = last;
            this.bubbleDown(0);
        }
        
        return min;
    }
    
    // 값 위로 올리기 (새로운 값 추가 시)
    bubbleUp(index) {
        while (index > 0) {
            const parentIndex = this.getParentIndex(index);
            if (this.heap[parentIndex] <= this.heap[index]) break;
            [this.heap[index], this.heap[parentIndex]] = [this.heap[parentIndex], this.heap[index]];
            index = parentIndex;
        }
    }
    
    // 힙 재정비 (최소값 꺼낸 후)
    bubbleDown(index) {
        while (true) {
            let min = index;
            
            const leftChild = (2 * index) + 1;
            const rightChild = (2 * index) + 2;
            
            if ((leftChild < this.heap.length) && (this.heap[leftChild] < this.heap[min])) {
                min = leftChild;
            }
            
            if ((rightChild < this.heap.length) && (this.heap[rightChild] < this.heap[min])) {
                min = rightChild;
            }
            
            if (min === index) break;
            
            [this.heap[index], this.heap[min]] = [this.heap[min], this.heap[index]];
            
            index = min;
        }
    }
    
    // 힙의 크기
    size() {
        return this.heap.length;
    }
}

function solution(scoville, K) {
    const minHeap = new MinHeap();
    let count = 0;
    
    scoville.forEach((s) => minHeap.insert(s));
    
    while ((minHeap.size() >= 2) && (minHeap.getValue(0) < K)) {
        const first = minHeap.remove();
        const seconde = minHeap.remove();
        const newScoville = first + (seconde * 2);
        
        minHeap.insert(newScoville);
        count += 1;
    }
    
    return minHeap.getValue(0) < K ? -1 : count;
}