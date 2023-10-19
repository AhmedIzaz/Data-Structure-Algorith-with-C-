package main

import (
	"fmt"
)

func swap(array []int, i int, j int) {
	temp := array[i]
	array[i] = array[j]
	array[j] = temp
}

func bubble_sort(array []int, length int) {
	for i := 0; i < length; i++ {
		for j := 0; j < length-i-1; j++ {
			if array[j] > array[j+1] {
				swap(array, j, j+1)
			}
		}
	}
}

func selection_sort(array []int, length int) {
	for i := 0; i < length-1; i++ {
		min := i
		for j := i + 1; j < length; j++ {
			if array[min] > array[j] {
				min = j
			}
		}
		if min != i {
			swap(array, min, i)
		}
	}
}

func insertion_sort(array []int, length int) {
	for i := 1; i < length; i++ {
		key := array[i]
		j := i - 1
		for j >= 0 && array[j] > key {
			array[j+1] = array[j]
			j--
		}
		array[j+1] = key
	}
}

func main() {
	array := []int{21, 341, 2, 23, 11, 11, 1, 3345}
	insertion_sort(array, len(array))
	fmt.Println(array)
}
