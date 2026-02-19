#include <iostream>
#include <vector>
using namespace std;
class MaxHeap
{
    vector<int> heap;

    // Heapify Up (for insertion)
    void heapifyUp(int index)
    {
        while (index > 0)
        {
            int parent = (index - 1) / 2;

            if (heap[parent] < heap[index])
            {
                swap(heap[parent], heap[index]);
                index = parent;
            }
            else
            {
                break;
            }
        }
    }

    // Heapify Down (for deletion)
    void heapifyDown(int index)
    {
        int size = heap.size();

        while (index < size)
        {
            int left = 2 * index + 1;
            int right = 2 * index + 2;
            int largest = index;

            if (left < size && heap[left] > heap[largest])
                largest = left;

            if (right < size && heap[right] > heap[largest])
                largest = right;

            if (largest != index)
            {
                swap(heap[index], heap[largest]);
                index = largest;
            }
            else
            {
                break;
            }
        }
    }

public:
    // Insert element
    void insert(int value)
    {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }

    // Remove max element
    void deleteMax()
    {
        if (heap.empty())
        {
            cout << "Heap is empty\n";
            return;
        }

        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    // Get max element
    int getMax()
    {
        if (heap.empty())
        {
            cout << "Heap is empty\n";
            return -1;
        }
        return heap[0];
    }

    // Print heap
    void print()
    {
        for (int val : heap)
            cout << val << " ";
        cout << endl;
    }
};

int main()
{
    MaxHeap h;

    h.insert(10);
    h.insert(30);
    h.insert(20);
    h.insert(5);

    cout << "Heap elements: ";
    h.print();

    cout << "Max element: " << h.getMax() << endl;

    h.deleteMax();

    cout << "After deleting max: ";
    h.print();

    return 0;
}